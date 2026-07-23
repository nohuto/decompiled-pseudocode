/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x140202E14
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiGetWsleProtection @ 0x140202860 (MiGetWsleProtection.c)
 *     MiSetWsleProtection @ 0x140203240 (MiSetWsleProtection.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakePrototypePteVadLookup @ 0x1402104D0 (MiMakePrototypePteVadLookup.c)
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiSetProtectionOnTransitionPte @ 0x140212844 (MiSetProtectionOnTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x140212AA8 (MiUpdatePfnProtection.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
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
  char v15; // al
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbx
  unsigned __int64 v21; // r12
  unsigned __int8 WsleContents; // al
  int WsleProtection; // eax
  int v25; // eax
  char v26; // [rsp+30h] [rbp-78h]
  unsigned int v27; // [rsp+34h] [rbp-74h]
  int v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  __int64 v30; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-58h]
  unsigned __int64 v34; // [rsp+C8h] [rbp+20h]

  v30 = 0LL;
  v5 = a2;
  if ( (unsigned int)MiVadPureReserve(a2, a2, a3, a1) )
    return 3221225541LL;
  v27 = 4;
  updated = 1;
  v9 = 0;
  v28 = 0;
  ProcessorFlushList = 0LL;
  v11 = 0LL;
  v31 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v31;
  v13 = v7 + 1024;
  v14 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = v14;
  v29 = v7 + 1024;
  v15 = MiLockWorkingSetShared(v7 + 1024);
  v26 = v15;
  if ( v31 > v14 )
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
          MiFlushTbList(ProcessorFlushList);
          ProcessorFlushList = 0LL;
          MiReleaseProcessorFlushList();
        }
        MiUnlockPageTableInternal(v13, v11);
      }
      MiMakeSystemAddressValid(v12);
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
          if ( ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == (unsigned __int64)v27 )
          {
            v5 = a2;
            updated = MiUpdatePfnProtection(a2, 48 * v18 - 0x220000000000LL, updated);
LABEL_13:
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList(ProcessorFlushList, v13, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
            }
            MiRevertValidPte(v5, v12, updated, v18, ProcessorFlushList);
LABEL_16:
            v12 += 8LL;
            continue;
          }
        }
        else
        {
          v20 = *(_QWORD *)(v19 + 8);
          v21 = (__int64)(v12 << 25) >> 16;
          if ( (v20 | 0x8000000000000000uLL) == MiGetProtoPteAddress(a2, v21 >> 12, 8LL, &v30) )
          {
            WsleContents = MiGetWsleContents(0x8000000000000000uLL, v21);
            WsleProtection = MiGetWsleProtection(v21, WsleContents);
            if ( WsleProtection == v27 || !WsleProtection && ((*(_DWORD *)(v19 + 16) >> 5) & 0x1F) == v27 )
            {
              MiSetWsleProtection(v27, v21, updated);
              v14 = v34;
              v13 = v29;
              v5 = a2;
              goto LABEL_13;
            }
          }
          v13 = v29;
        }
      }
      v5 = a2;
      goto LABEL_31;
    }
    if ( (v17 & 0x400) != 0 )
    {
      if ( (updated & 7) == 4 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(*(_QWORD *)v12, 0xFFFFF68000000000uLL) )
          goto LABEL_51;
        *(_QWORD *)v12 = MiMakePrototypePteVadLookup(updated);
      }
LABEL_31:
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
          MiUnlockPageTableInternal(v13, v11);
          v11 = 0LL;
        }
      }
      v14 = v12 - 8;
      v27 = 1;
      v12 = v31;
      updated = 4;
      v34 = v14;
      v28 = -1073741755;
      continue;
    }
    if ( (v17 & 0x800) == 0 )
    {
      if ( ((v17 >> 5) & 0x1F) == v27 )
      {
LABEL_51:
        *(_QWORD *)v12 = (32LL * updated) ^ (v17 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
        goto LABEL_16;
      }
      goto LABEL_31;
    }
    v25 = MiSetProtectionOnTransitionPte(v5, v12, updated, (updated & 7) == 4);
    if ( !v25 )
      goto LABEL_16;
    if ( v25 != 2 )
      goto LABEL_31;
  }
  while ( v12 <= v14 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList(ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v11 )
    MiUnlockPageTableInternal(v13, v11);
  v15 = v26;
  v9 = v28;
LABEL_23:
  LOBYTE(v16) = v15;
  MiUnlockWorkingSetShared(v13, v16);
  return v9;
}
