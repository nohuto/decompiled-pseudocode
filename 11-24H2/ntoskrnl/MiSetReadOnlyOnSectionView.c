/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x140232BB8
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiSetWsleProtection @ 0x140232ACC (MiSetWsleProtection.c)
 *     MiGetWsleProtection @ 0x140233100 (MiGetWsleProtection.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakePrototypePteVadLookup @ 0x140236340 (MiMakePrototypePteVadLookup.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402386B4 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x140238918 (MiUpdatePfnProtection.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned int updated; // r15d
  unsigned int v9; // edi
  __int64 ProcessorFlushList; // rbp
  __int64 v11; // rsi
  ULONG_PTR v12; // r14
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbx
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  int WsleProtection; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v27; // eax
  unsigned __int8 v28; // [rsp+30h] [rbp-78h]
  unsigned int v29; // [rsp+34h] [rbp-74h]
  int v30; // [rsp+38h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-58h]
  unsigned __int64 v36; // [rsp+C8h] [rbp+20h]

  v32 = 0LL;
  v5 = a2;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v29 = 4;
  updated = 1;
  v9 = 0;
  v30 = 0;
  ProcessorFlushList = 0LL;
  v11 = 0LL;
  v33 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v33;
  v13 = v7 + 1024;
  v14 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = v14;
  v31 = v7 + 1024;
  v15 = MiLockWorkingSetShared(v7 + 1024);
  v28 = v15;
  if ( v33 > v14 )
    goto LABEL_23;
  do
  {
    if ( (v12 & 0xFFF) != 0 && v11 )
    {
      v16 = 0xFFFFF68000000000uLL;
    }
    else
    {
      if ( v11 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList, v16);
          ProcessorFlushList = 0LL;
          MiReleaseProcessorFlushList();
        }
        MiUnlockPageTableInternal(v13, v11);
        v15 = v28;
      }
      MiMakeSystemAddressValid(v12, (*(_DWORD *)(v5 + 48) >> 12) & 0x7F, v15, 0);
      v16 = 0xFFFFF68000000000uLL;
      v11 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v17 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
      goto LABEL_31;
    if ( (v17 & 1) != 0 )
    {
      v18 = (v17 >> 12) & 0xFFFFFFFFFFLL;
      v19 = 48 * v18 - 0x220000000000LL;
      if ( (unsigned __int16)*(_DWORD *)(v19 + 32) <= 1u || (updated & 7) == 4 )
      {
        if ( *(__int64 *)(v19 + 40) >= 0 )
        {
          if ( ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == (unsigned __int64)v29 )
          {
            v5 = a2;
            updated = MiUpdatePfnProtection(a2, 48 * v18 - 0x220000000000LL, updated);
LABEL_13:
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList(v25, v24);
              MiInitializeTbFlushList(ProcessorFlushList, v13, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
            }
            MiRevertValidPte(v5, v12, updated, v18, ProcessorFlushList);
LABEL_16:
            v12 += 8LL;
            goto LABEL_17;
          }
        }
        else
        {
          v20 = *(_QWORD *)(v19 + 8);
          v21 = (__int64)(v12 << 25) >> 16;
          if ( (v20 | 0x8000000000000000uLL) == MiGetProtoPteAddress(a2, v21 >> 12, 8LL, &v32) )
          {
            LOBYTE(v22) = MiGetWsleContents(0x8000000000000000uLL, v21);
            WsleProtection = MiGetWsleProtection(v21, v22);
            if ( WsleProtection == v29 || !WsleProtection && ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == v29 )
            {
              MiSetWsleProtection(v29, v21, updated);
              v14 = v36;
              v13 = v31;
              v5 = a2;
              goto LABEL_13;
            }
          }
          v13 = v31;
        }
      }
      v5 = a2;
      goto LABEL_31;
    }
    if ( (v17 & 0x400) != 0 )
    {
      if ( (updated & 7) == 4 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)v12) )
          goto LABEL_51;
        *(_QWORD *)v12 = MiMakePrototypePteVadLookup(updated);
      }
LABEL_31:
      if ( v11 != ((a3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList, v16);
          ProcessorFlushList = 0LL;
          MiReleaseProcessorFlushList();
        }
        if ( v11 )
        {
          MiUnlockPageTableInternal(v13, v11);
          v11 = 0LL;
        }
      }
      v14 = v12 - 8;
      v29 = 1;
      v12 = v33;
      updated = 4;
      v36 = v14;
      v30 = -1073741755;
      goto LABEL_17;
    }
    if ( (v17 & 0x800) == 0 )
    {
      if ( ((v17 >> 5) & 0x1F) == v29 )
      {
LABEL_51:
        *(_QWORD *)v12 = (32LL * updated) ^ (v17 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_16;
      }
      goto LABEL_31;
    }
    v27 = MiSetProtectionOnTransitionPte(v5, v12, updated, (updated & 7) == 4);
    if ( !v27 )
      goto LABEL_16;
    if ( v27 != 2 )
      goto LABEL_31;
LABEL_17:
    v15 = v28;
  }
  while ( v12 <= v14 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList(ProcessorFlushList, v16);
    MiReleaseProcessorFlushList();
  }
  if ( v11 )
    MiUnlockPageTableInternal(v13, v11);
  v15 = v28;
  v9 = v30;
LABEL_23:
  LOBYTE(v16) = v15;
  MiUnlockWorkingSetShared(v13, v16);
  return v9;
}
