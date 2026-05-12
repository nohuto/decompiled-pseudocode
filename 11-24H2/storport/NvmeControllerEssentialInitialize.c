/*
 * XREFs of NvmeControllerEssentialInitialize @ 0x1400ECE18
 * Callers:
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCbPrintfA @ 0x140030BE0 (RtlStringCbPrintfA.c)
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     NvmeControllerAllocateInternalBuffer @ 0x1400EA7C0 (NvmeControllerAllocateInternalBuffer.c)
 *     NvmeControllerCreateAdminQueue @ 0x1400EBE6C (NvmeControllerCreateAdminQueue.c)
 *     NvmeControllerGetMaxTransferSize @ 0x1400EEC00 (NvmeControllerGetMaxTransferSize.c)
 *     NvmeControllerGetPreferredIoQueueDepth @ 0x1400EECBC (NvmeControllerGetPreferredIoQueueDepth.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400EED34 (NvmeControllerGetReadyTimeout.c)
 *     NvmeControllerGetRegisterAddress @ 0x1400EEE44 (NvmeControllerGetRegisterAddress.c)
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeGetRegistrySettings @ 0x1400F92F8 (NvmeGetRegistrySettings.c)
 *     NvmeControllerCreateExtendedCommandPool @ 0x1401291AC (NvmeControllerCreateExtendedCommandPool.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeControllerEssentialInitialize(_QWORD *DeferredContext, char a2)
{
  __int64 v2; // r8
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  void *v9; // rcx
  __int64 v10; // rdx
  size_t v11; // rsi
  char *Pool; // rax
  __int64 v13; // r10
  _QWORD *RegisterAddress; // rax
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  int v18; // r10d
  int v19; // edx
  __int64 v20; // rdx
  int MaxTransferSize; // eax
  unsigned int v22; // eax
  char pszDest[128]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = DeferredContext[16];
  v5 = *(_QWORD *)(v2 + 576);
  v6 = v2 + 176;
  if ( !v5 )
    return 3221225860LL;
  *((_WORD *)DeferredContext + 470) = *(_WORD *)(v5 + 8);
  *((_WORD *)DeferredContext + 471) = *(_WORD *)(v5 + 10);
  *((_BYTE *)DeferredContext + 944) = *(_BYTE *)(v5 + 16);
  RtlStringCbPrintfA(
    pszDest,
    0x80uLL,
    "Segment:%u Bus:%u Device:%u Function:%u",
    (unsigned __int16)(*(_DWORD *)(v2 + 568) >> 8),
    (unsigned __int8)*(_DWORD *)(v2 + 568),
    **(unsigned __int16 **)(v2 + 576),
    *(unsigned __int16 *)(*(_QWORD *)(v2 + 576) + 2LL));
  v8 = -1LL;
  do
    ++v8;
  while ( pszDest[v8] );
  v9 = (void *)DeferredContext[94];
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52436152u);
  v10 = (unsigned int)(v8 + 1);
  v11 = v10;
  Pool = (char *)RaidAllocatePool(64LL, v10, 1380147538LL, *(_QWORD *)(DeferredContext[16] + 8LL));
  DeferredContext[94] = Pool;
  if ( !Pool )
    return 3221225626LL;
  RtlStringCbCopyA(Pool, v11, pszDest);
  v13 = *(_DWORD *)(v5 + 24) & 0xFFFFC000;
  DeferredContext[116] = v13;
  DeferredContext[116] = v13 | ((unsigned __int64)*(unsigned int *)(v5 + 28) << 32);
  RegisterAddress = (_QWORD *)NvmeControllerGetRegisterAddress(DeferredContext, v6);
  DeferredContext[115] = RegisterAddress;
  if ( RegisterAddress )
  {
    DeferredContext[73] = *RegisterAddress;
    v15 = HIDWORD(DeferredContext[73]);
    *((_DWORD *)DeferredContext + 144) = *(_DWORD *)(DeferredContext[115] + 8LL);
    *((_DWORD *)DeferredContext + 304) = 4 << (v15 & 0xF);
    *((_DWORD *)DeferredContext + 305) = NvmeControllerGetReadyTimeout(DeferredContext);
    if ( !a2 )
      NvmeGetRegistrySettings(DeferredContext);
    v16 = 3;
    if ( *(_DWORD *)(v6 + 20) != 1 )
      v16 = 1;
    *((_DWORD *)DeferredContext + 226) = v16;
    *((_WORD *)DeferredContext + 3) = 256;
    *((_DWORD *)DeferredContext + 2) = NvmeControllerGetPreferredIoQueueDepth(DeferredContext);
    v17 = *(_DWORD *)(v6 + 20) == 1;
    *(_DWORD *)(v6 + 48) = v18;
    *(_BYTE *)(v6 + 81) = 1;
    *(_BYTE *)(v6 + 145) = 0;
    *(_DWORD *)(v6 + 148) = 1;
    *(_DWORD *)(v6 + 160) = v17 + 1;
    *(_DWORD *)(v6 + 216) = 0;
    if ( *(_BYTE *)(v6 + 144) == 0x80 )
      *(_BYTE *)(v6 + 144) = 2;
    v19 = *(_DWORD *)(v6 + 220) | 0x2B;
    *(_BYTE *)(v6 + 147) = 0;
    *(_DWORD *)(v6 + 220) = v19;
    if ( (*(_DWORD *)(DeferredContext[131] + 24LL) & 2) == 0 )
      *(_DWORD *)(v6 + 220) = v19 | 4;
    *(_DWORD *)(v6 + 24) = 0x200000;
    result = NvmeControllerCreateAdminQueue(DeferredContext);
    if ( (int)result >= 0 )
    {
      if ( a2
        || (result = NvmeControllerAllocateInternalBuffer((__int64)DeferredContext, v6), (int)result >= 0)
        && ((*(_DWORD *)(DeferredContext[16] + 976LL) & 8) == 0 || (*(_DWORD *)(DeferredContext[131] + 24LL) & 8) == 0
          ? (DeferredContext[17] &= ~0x100000000uLL)
          : (DeferredContext[17] |= 0x100000000uLL),
            result = NvmeControllerCreateExtendedCommandPool(DeferredContext),
            (int)result >= 0) )
      {
        result = NvmeControllerReset(DeferredContext, v20, 1LL);
        if ( (int)result >= 0 )
        {
          result = NvmeControllerInitPhase1(DeferredContext);
          if ( (int)result >= 0 )
          {
            MaxTransferSize = NvmeControllerGetMaxTransferSize(DeferredContext);
            *((_DWORD *)DeferredContext + 155) = MaxTransferSize;
            *(_DWORD *)(v6 + 24) = MaxTransferSize;
            v22 = 0xA00000u / *((_DWORD *)DeferredContext + 155);
            if ( v22 >= 0x20 )
            {
              LOBYTE(v22) = 32;
            }
            else if ( v22 <= 0xA )
            {
              LOBYTE(v22) = 10;
            }
            *((_BYTE *)DeferredContext + 1730) = v22;
            *(_DWORD *)(v6 + 28) = 513;
            *(_BYTE *)(v6 + 72) = 1;
            *(_BYTE *)(v6 + 97) = 1;
            *(_BYTE *)(v6 + 146) = -1;
            *(_DWORD *)(v6 + 212) = 32;
            *(_DWORD *)(v6 + 204) = 32;
            *(_DWORD *)(v6 + 208) = 32;
            DeferredContext[121] &= ~2uLL;
            return 0LL;
          }
        }
        else
        {
          *((_DWORD *)DeferredContext + 298) = 5;
        }
      }
    }
  }
  else
  {
    *((_DWORD *)DeferredContext + 298) = 4;
    return 3221225858LL;
  }
  return result;
}
