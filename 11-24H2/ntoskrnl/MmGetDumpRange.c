/*
 * XREFs of MmGetDumpRange @ 0x140677B48
 * Callers:
 *     IoWriteCrashDump @ 0x1405927D4 (IoWriteCrashDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405A03BC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiRemovePendingBadPagesFromDump @ 0x1406742DC (MiRemovePendingBadPagesFromDump.c)
 *     MiAddNonSecuredPagesToDump @ 0x140676ECC (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x1406772A4 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140677E38 (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x140680AD4 (MiRemoveEnclavePagesFromDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MmGetDumpRange(__int64 a1, int a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned int i; // edi
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // edx
  int v14; // r10d
  unsigned int v15; // r9d
  char *v16; // rdi
  unsigned int v17; // r11d
  unsigned int v18; // edx
  char *v19; // rdx
  __int64 j; // r8
  unsigned __int64 v21; // rax
  unsigned int SizeOfBitMap; // edx
  __int64 v23; // rdi
  __int64 k; // rdi

  if ( a2 )
  {
    v8 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v10 = v8[2 * i + 3];
      v11 = v8[2 * i + 2];
      if ( (MiFlags & 0x4000) != 0 )
        MiAddNonSecuredPagesToDump(a1, v11, v10);
      else
        guard_dispatch_icall_no_overrides(a1, v11, v10, 2LL);
      v8 = MmPhysicalMemoryBlock;
    }
  }
  else
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v5 = KiProcessorBlock;
      v6 = (unsigned int)KeNumberProcessors_0;
      do
      {
        guard_dispatch_icall_no_overrides(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5++ + 8) + 184LL) + 40LL) >> 12,
          1LL,
          2LL);
        --v6;
      }
      while ( v6 );
    }
    MmAddRangeToCrashDump(a1, 0xFFFF800000000000uLL, 0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump(a1, 0LL, 0x7FFFFFFF0000LL);
    v7 = __readcr3();
    guard_dispatch_icall_no_overrides(a1, v7 / 4096, 1LL, 2LL);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump(a1);
      MmRemoveSystemCacheFromDump(a1);
    }
  }
  v12 = 0;
  while ( 2 )
  {
    v13 = qword_140E2FF68->SizeOfBitMap - 1;
    v14 = ((__int64)qword_140E2FF68->Buffer & 4) != 0LL ? 0x20 : 0;
    v15 = v12 < qword_140E2FF68->SizeOfBitMap ? v12 : 0;
    v16 = (char *)qword_140E2FF68->Buffer - (((__int64)qword_140E2FF68->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v17 = v14 + v13;
      if ( v13 - v15 == -1 )
        goto LABEL_18;
      v19 = &v16[8 * ((unsigned __int64)(v14 + v15) >> 6)];
      for ( j = ~*(_QWORD *)v19 | ((1LL << ((v14 + v15) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v19 )
      {
        v19 += 8;
        if ( v19 > &v16[8 * ((unsigned __int64)v17 >> 6)] )
          goto LABEL_18;
      }
      _BitScanForward64(&v21, ~j);
      v18 = v21 + ((unsigned int)((v19 - v16) >> 3) << 6);
      if ( v18 > v17 )
      {
LABEL_18:
        v18 = -1;
        goto LABEL_25;
      }
      if ( v18 != -1 )
        break;
LABEL_25:
      if ( !v15 )
        goto LABEL_30;
      SizeOfBitMap = v12 + 1;
      if ( v12 + 1 > qword_140E2FF68->SizeOfBitMap )
        SizeOfBitMap = qword_140E2FF68->SizeOfBitMap;
      v13 = SizeOfBitMap - 1;
      v15 = 0;
    }
    v18 -= v14;
LABEL_30:
    if ( v18 >= v12 && v18 != -1 )
    {
      v12 = v18 + 1;
      v23 = *((_QWORD *)qword_140E2FF88 + v18);
      if ( (*(_DWORD *)(v23 + 4) & 2) != 0 )
      {
        for ( k = *(_QWORD *)(v23 + 7056); k != 0x3FFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x220000000000LL) & 0xFFFFFFFFFFLL )
          guard_dispatch_icall_no_overrides(a1, k, 1LL, 2LL);
      }
      continue;
    }
    break;
  }
  MiRemovePendingBadPagesFromDump(a1);
  if ( qword_140E374B8 )
    MiRemoveEnclavePagesFromDump(a1);
}
