/*
 * XREFs of MmGetDumpRange @ 0x14066C1F8
 * Callers:
 *     IoWriteCrashDump @ 0x14058EFA4 (IoWriteCrashDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059CBDC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiRemovePendingBadPagesFromDump @ 0x14066887C (MiRemovePendingBadPagesFromDump.c)
 *     MiAddNonSecuredPagesToDump @ 0x14066B57C (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x14066B954 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14066C4E8 (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x1406752B4 (MiRemoveEnclavePagesFromDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MmGetDumpRange(__int64 a1, int a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  unsigned int i; // edi
  unsigned int v9; // esi
  unsigned int v10; // edx
  int v11; // r10d
  unsigned int v12; // r9d
  char *v13; // rdi
  unsigned int v14; // r11d
  unsigned int v15; // edx
  char *v16; // rdx
  __int64 j; // r8
  unsigned __int64 v18; // rax
  unsigned int SizeOfBitMap; // edx
  __int64 v20; // rdi
  __int64 k; // rdi

  if ( a2 )
  {
    v7 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      if ( (MiFlags & 0x4000) != 0 )
        MiAddNonSecuredPagesToDump(a1, v7[2 * i + 2], v7[2 * i + 3]);
      else
        guard_dispatch_icall_no_overrides(a1);
      v7 = MmPhysicalMemoryBlock;
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
        guard_dispatch_icall_no_overrides(a1);
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    MmAddRangeToCrashDump(a1, 0xFFFF800000000000uLL, 0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump(a1, 0LL, 0x7FFFFFFF0000LL);
    __readcr3();
    guard_dispatch_icall_no_overrides(a1);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump(a1);
      MmRemoveSystemCacheFromDump(a1);
    }
  }
  v9 = 0;
  while ( 2 )
  {
    v10 = qword_140E2FD28->SizeOfBitMap - 1;
    v11 = ((__int64)qword_140E2FD28->Buffer & 4) != 0LL ? 0x20 : 0;
    v12 = v9 < qword_140E2FD28->SizeOfBitMap ? v9 : 0;
    v13 = (char *)qword_140E2FD28->Buffer - (((__int64)qword_140E2FD28->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v14 = v11 + v10;
      if ( v10 - v12 == -1 )
        goto LABEL_18;
      v16 = &v13[8 * ((unsigned __int64)(v11 + v12) >> 6)];
      for ( j = ~*(_QWORD *)v16 | ((1LL << ((v11 + v12) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v16 )
      {
        v16 += 8;
        if ( v16 > &v13[8 * ((unsigned __int64)v14 >> 6)] )
          goto LABEL_18;
      }
      _BitScanForward64(&v18, ~j);
      v15 = v18 + ((unsigned int)((v16 - v13) >> 3) << 6);
      if ( v15 > v14 )
      {
LABEL_18:
        v15 = -1;
        goto LABEL_25;
      }
      if ( v15 != -1 )
        break;
LABEL_25:
      if ( !v12 )
        goto LABEL_30;
      SizeOfBitMap = v9 + 1;
      if ( v9 + 1 > qword_140E2FD28->SizeOfBitMap )
        SizeOfBitMap = qword_140E2FD28->SizeOfBitMap;
      v10 = SizeOfBitMap - 1;
      v12 = 0;
    }
    v15 -= v11;
LABEL_30:
    if ( v15 >= v9 && v15 != -1 )
    {
      v9 = v15 + 1;
      v20 = *((_QWORD *)qword_140E2FD48 + v15);
      if ( (*(_DWORD *)(v20 + 4) & 2) != 0 )
      {
        for ( k = *(_QWORD *)(v20 + 7056); k != 0x3FFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x220000000000LL) & 0xFFFFFFFFFFLL )
          guard_dispatch_icall_no_overrides(a1);
      }
      continue;
    }
    break;
  }
  MiRemovePendingBadPagesFromDump(a1);
  if ( qword_140E37278 )
    MiRemoveEnclavePagesFromDump(a1);
}
