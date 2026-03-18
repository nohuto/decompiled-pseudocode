/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1408950F0 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x1409EC8A0 (NtReplyPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     AlpcpClearOwnerPortMessage @ 0x140892D3C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140892D70 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     AlpcpAvailableBufferSize @ 0x140896380 (AlpcpAvailableBufferSize.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureMessageData @ 0x14093FCA0 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x140AC0E98 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 *a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // ebx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rsi
  int v13; // ecx
  __int64 v14; // r15
  _QWORD *v15; // rsi
  _QWORD *v16; // rcx
  bool v17; // r15
  _QWORD *v18; // rax
  unsigned __int64 v19; // rax
  size_t v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // r13
  ULONG_PTR v25; // rbx
  __int64 v26; // rsi
  ULONG_PTR v27; // rbx
  int v28; // ecx
  int v29; // edx
  __int64 v30; // r15
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r9
  signed __int32 v39[8]; // [rsp+0h] [rbp-E8h] BYREF
  unsigned int v40; // [rsp+30h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-B0h] BYREF
  __m128i v42; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+68h] [rbp-80h]
  _QWORD *v45; // [rsp+70h] [rbp-78h]
  __int64 *v46; // [rsp+78h] [rbp-70h]
  __int64 v47; // [rsp+80h] [rbp-68h]
  __int64 *v48; // [rsp+90h] [rbp-58h]
  __int128 v49; // [rsp+A0h] [rbp-48h]
  __int64 v50; // [rsp+B0h] [rbp-38h]

  v46 = a1;
  v48 = a1;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  BugCheckParameter2[0] = 0LL;
  v4 = *a1;
  v47 = *a1;
  if ( !a3 )
  {
    v42 = *(__m128i *)a2;
    v43 = *(_OWORD *)(a2 + 16);
    HIDWORD(v44) = HIDWORD(*(_QWORD *)(a2 + 32));
    v8 = 0;
    LODWORD(v44) = 0;
    v6 = (unsigned int)_mm_cvtsi128_si32(v42);
    if ( (unsigned __int16)v6 >= (unsigned __int16)(v6 + 40)
      || (unsigned __int64)(unsigned __int16)v6 + 40 > v42.m128i_u16[1] )
    {
      return (unsigned int)-1073741811;
    }
    v42.m128i_i16[1] = v6 + 40;
LABEL_14:
    v7 = AlpcpLookupMessage(v4, SDWORD2(v43), v8, v6, BugCheckParameter2);
    v40 = v7;
    if ( v7 < 0 )
      return (unsigned int)v7;
    v12 = BugCheckParameter2[0];
    v13 = *(_DWORD *)(BugCheckParameter2[0] + 40);
    if ( (v13 & 0x80u) != 0 )
    {
      AlpcpCancelMessage(v4, BugCheckParameter2[0], 0x10000);
      return (unsigned int)-1073741769;
    }
    if ( (v13 & 0x200) != 0 || !*(_QWORD *)(BugCheckParameter2[0] + 32) )
      goto LABEL_63;
    v9 = *(_QWORD *)(BugCheckParameter2[0] + 16);
    if ( v9 != v4 )
    {
      if ( (v13 & 7) == 0 )
      {
        v14 = *(_QWORD *)(BugCheckParameter2[0] + 24);
        if ( !v14 )
          goto LABEL_63;
        v15 = *(_QWORD **)(v14 + 16);
        v16 = KeAbPreAcquire((__int64)(v15 - 2), 0LL);
        v45 = v16;
        if ( _InterlockedCompareExchange64(v15 - 2, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v15 - 2, 0, v16, (__int64)(v15 - 2));
          v16 = v45;
        }
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        if ( ((*(_DWORD *)(v14 + 416) >> 1) & 3) == 2 )
          v17 = *v15 == v4 || v15[1] == v4;
        else
          v17 = v15[2] == v4;
        if ( _InterlockedCompareExchange64(v15 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v15 - 2);
        KeAbPostRelease((ULONG_PTR)(v15 - 2));
        v12 = BugCheckParameter2[0];
        goto LABEL_41;
      }
      if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
        goto LABEL_63;
      v18 = *(_QWORD **)(v4 + 16);
      if ( !v18 || *v18 != v9 )
        goto LABEL_63;
    }
    if ( (v13 & 7) != 3 || (v13 & 0x2000) != 0 )
      goto LABEL_63;
    v17 = 1;
LABEL_41:
    if ( v17 )
    {
      v19 = AlpcpAvailableBufferSize(v12);
      if ( v20 > v19 )
      {
        v7 = AlpcpCaptureMessageData(v12, v20, (char *)(a2 + 40));
        v40 = v7;
      }
      else
      {
        memmove((void *)(v12 + 280), (const void *)(a2 + 40), v20);
        v7 = 0;
        v40 = 0;
      }
      v24 = v46;
      if ( v7 >= 0 )
      {
        *(_DWORD *)(v12 + 40) |= 0x10000u;
        _InterlockedOr(v39, 0);
        v25 = BugCheckParameter2[0];
        v26 = *(_QWORD *)(BugCheckParameter2[0] + 24);
        AlpcpRemoveMessageFromPendingQueue(BugCheckParameter2[0]);
        *(_DWORD *)(v25 + 240) = v42.m128i_i32[0];
        *(_WORD *)(v25 + 244) = 2;
        v27 = BugCheckParameter2[0];
        *(_OWORD *)(BugCheckParameter2[0] + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
        v28 = *(_DWORD *)(v27 + 40) | 0x200;
        *(_DWORD *)(v27 + 40) = v28;
        v29 = (*(_DWORD *)(v26 + 416) >> 1) & 3;
        *(_DWORD *)(v27 + 40) = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(8 * v29)) & 0x78;
        if ( v29 == 1 )
        {
          v30 = *(_QWORD *)(v26 + 16);
          v31 = KeAbPreAcquire(v30 - 16, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 - 16), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v30 - 16), 0, v31, v30 - 16);
          if ( v31 )
            *((_BYTE *)v31 + 10) = 1;
          v32 = *(_QWORD *)(v30 + 8);
          if ( v32 )
            *(_QWORD *)(BugCheckParameter2[0] + 120) = *(_QWORD *)(v32 + 56);
          else
            *(_QWORD *)(BugCheckParameter2[0] + 120) = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v30 - 16), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v30 - 16));
          KeAbPostRelease(v30 - 16);
          v27 = BugCheckParameter2[0];
        }
        else
        {
          *(_QWORD *)(v27 + 120) = *(_QWORD *)(v26 + 56);
        }
        v33 = *(_QWORD *)(v27 + 32);
        *(_QWORD *)(v27 + 32) = 0LL;
        --*(_WORD *)(v27 - 30);
        *(_DWORD *)(v27 + 40) = *(_DWORD *)(v27 + 40) & 0xFFFEFEF8 | 0x105;
        AlpcpClearOwnerPortMessage(v27);
        PsReferenceSiloContext((void *)v4);
        *(_QWORD *)(v27 + 24) = v4;
        *(_DWORD *)(v27 + 40) |= 0x1000u;
        AlpcpUnlockMessage(v27, v34, v35, v36);
        if ( (v24[6] & 4) != 0 )
          v24[3] = v33;
        else
          KeReleaseSemaphoreEx((volatile signed __int32 *)(v33 + 1304), 1LL, 1, v37, 0, 0LL);
        return v40;
      }
      else
      {
        AlpcpUnlockMessage(v12, v21, v22, v23);
      }
      return (unsigned int)v7;
    }
LABEL_63:
    AlpcpUnlockMessage(v12, v9, v10, v11);
    return (unsigned int)-1073741790;
  }
  v49 = 0LL;
  v50 = 0LL;
  v5 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v5 = a2;
  RtlCopyVolatileMemory(&v42, (const void *)v5, 0x28uLL);
  if ( (unsigned int)v42.m128i_i16[0] >= (unsigned __int16)(v42.m128i_i16[0] + 40)
    || (unsigned __int64)v42.m128i_u16[0] + 40 > v42.m128i_u16[1] )
  {
    v7 = -1073741811;
    v40 = -1073741811;
    return (unsigned int)v7;
  }
  v42.m128i_i16[1] = v42.m128i_i16[0] + 40;
  v40 = 0;
  if ( !v42.m128i_i16[3] || (v7 = AlpcpValidateDataInformation(a2, &v42), v40 = v7, v7 >= 0) )
  {
    v8 = v44;
    goto LABEL_14;
  }
  return (unsigned int)v7;
}
