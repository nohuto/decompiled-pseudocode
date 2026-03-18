/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x14037D0D8
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiSetWsleProtection @ 0x14037D510 (MiSetWsleProtection.c)
 *     MiGetWsleProtection @ 0x14037D600 (MiGetWsleProtection.c)
 *     MiMakePrototypePteVadLookup @ 0x14037DD10 (MiMakePrototypePteVadLookup.c)
 *     MiSetProtectionOnTransitionPte @ 0x14037F4E0 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x14037F744 (MiUpdatePfnProtection.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned int updated; // r15d
  unsigned int v9; // edi
  __int64 ProcessorFlushList; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rbx
  unsigned __int64 v20; // r12
  __int64 v21; // rdx
  int WsleProtection; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v28; // eax
  unsigned __int8 v29; // [rsp+30h] [rbp-78h]
  unsigned int v30; // [rsp+34h] [rbp-74h]
  int v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v33; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-58h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+20h]

  v33 = 0LL;
  v5 = a2;
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v30 = 4;
  updated = 1;
  v9 = 0;
  v31 = 0;
  ProcessorFlushList = 0LL;
  v11 = 0LL;
  v34 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v34;
  v13 = v7 + 1024;
  v14 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = v14;
  v32 = v7 + 1024;
  v15 = MiLockWorkingSetShared(v7 + 1024);
  v29 = v15;
  if ( v34 > v14 )
    goto LABEL_22;
  do
  {
    if ( (v12 & 0xFFF) == 0 || !v11 )
    {
      if ( v11 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList);
          ProcessorFlushList = 0LL;
          MiReleaseProcessorFlushList();
        }
        MiUnlockPageTable(v13, v11);
        v15 = v29;
      }
      MiMakeSystemAddressValid(v12, (*(_DWORD *)(v5 + 48) >> 12) & 0x7F, v15, 0);
      v11 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v16 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
      goto LABEL_30;
    if ( (v16 & 1) != 0 )
    {
      v17 = (v16 >> 12) & 0xFFFFFFFFFFLL;
      v18 = 48 * v17 - 0x220000000000LL;
      if ( (unsigned __int16)*(_DWORD *)(v18 + 32) <= 1u || (updated & 7) == 4 )
      {
        if ( *(__int64 *)(v18 + 40) >= 0 )
        {
          if ( ((*(_DWORD *)(v18 + 16) >> 5) & 0x1F) == (unsigned __int64)v30 )
          {
            v5 = a2;
            updated = MiUpdatePfnProtection(a2, 48 * v17 - 0x220000000000LL, updated);
LABEL_12:
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList(v24, v23, v25, v26);
              MiInitializeTbFlushList(ProcessorFlushList, v13, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
            }
            MiRevertValidPte(v5, v12, updated, v17, ProcessorFlushList);
LABEL_15:
            v12 += 8LL;
            goto LABEL_16;
          }
        }
        else
        {
          v19 = *(_QWORD *)(v18 + 8);
          v20 = (__int64)(v12 << 25) >> 16;
          if ( (v19 | 0x8000000000000000uLL) == MiGetProtoPteAddress(a2, v20 >> 12, 8, &v33) )
          {
            LOBYTE(v21) = MiGetWsleContents(0x8000000000000000uLL, v20);
            WsleProtection = MiGetWsleProtection(v20, v21);
            if ( WsleProtection == v30 || !WsleProtection && ((*(_DWORD *)(v18 + 16) >> 5) & 0x1F) == v30 )
            {
              MiSetWsleProtection(v30, v20, updated);
              v14 = v37;
              v13 = v32;
              v5 = a2;
              goto LABEL_12;
            }
          }
          v13 = v32;
        }
      }
      v5 = a2;
      goto LABEL_30;
    }
    if ( (v16 & 0x400) != 0 )
    {
      if ( (updated & 7) == 4 )
      {
        if ( MiIsPrototypePteVadLookup(*(_QWORD *)v12) )
          goto LABEL_50;
        *(_QWORD *)v12 = MiMakePrototypePteVadLookup(updated);
      }
LABEL_30:
      if ( v11 != ((a3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList);
          ProcessorFlushList = 0LL;
          MiReleaseProcessorFlushList();
        }
        if ( v11 )
        {
          MiUnlockPageTable(v13, v11);
          v11 = 0LL;
        }
      }
      v14 = v12 - 8;
      v30 = 1;
      v12 = v34;
      updated = 4;
      v37 = v14;
      v31 = -1073741755;
      goto LABEL_16;
    }
    if ( (v16 & 0x800) == 0 )
    {
      if ( ((v16 >> 5) & 0x1F) == v30 )
      {
LABEL_50:
        *(_QWORD *)v12 = (32LL * updated) ^ (v16 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_15;
      }
      goto LABEL_30;
    }
    v28 = MiSetProtectionOnTransitionPte(v5, v12, updated, (updated & 7) == 4);
    if ( !v28 )
      goto LABEL_15;
    if ( v28 != 2 )
      goto LABEL_30;
LABEL_16:
    v15 = v29;
  }
  while ( v12 <= v14 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList(ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v11 )
    MiUnlockPageTable(v13, v11);
  v15 = v29;
  v9 = v31;
LABEL_22:
  MiUnlockWorkingSetShared(v13, v15);
  return v9;
}
