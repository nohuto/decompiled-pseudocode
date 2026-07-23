/*
 * XREFs of MmGetDumpRange @ 0x140678D28
 * Callers:
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059D2EC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiRemovePendingBadPagesFromDump @ 0x1406754AC (MiRemovePendingBadPagesFromDump.c)
 *     MiAddNonSecuredPagesToDump @ 0x14067809C (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x140678474 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140679018 (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x140681CD4 (MiRemoveEnclavePagesFromDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MmGetDumpRange(__int64 a1, int a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned int i; // edi
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned int v12; // edx
  int v13; // r10d
  unsigned int v14; // r9d
  char *v15; // rdi
  unsigned int v16; // r11d
  unsigned int v17; // edx
  char *v18; // rdx
  __int64 j; // r8
  unsigned __int64 v20; // rax
  unsigned int SizeOfBitMap; // edx
  __int64 v22; // rdi
  __int64 k; // rdi

  if ( a2 )
  {
    v8 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v10 = v8[2 * i + 2];
      if ( (MiFlags & 0x4000) != 0 )
        MiAddNonSecuredPagesToDump(a1, v10, v8[2 * i + 3]);
      else
        guard_dispatch_icall_no_overrides(a1, v10);
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
        guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5++ + 8) + 184LL) + 40LL) >> 12);
        --v6;
      }
      while ( v6 );
    }
    MmAddRangeToCrashDump(a1, 0xFFFF800000000000uLL, 0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump(a1, 0LL, 0x7FFFFFFF0000LL);
    v7 = __readcr3();
    guard_dispatch_icall_no_overrides(a1, v7 / 4096);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump(a1);
      MmRemoveSystemCacheFromDump(a1);
    }
  }
  v11 = 0;
  while ( 2 )
  {
    v12 = qword_140E300A8->SizeOfBitMap - 1;
    v13 = ((__int64)qword_140E300A8->Buffer & 4) != 0LL ? 0x20 : 0;
    v14 = v11 < qword_140E300A8->SizeOfBitMap ? v11 : 0;
    v15 = (char *)qword_140E300A8->Buffer - (((__int64)qword_140E300A8->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v16 = v13 + v12;
      if ( v12 - v14 == -1 )
        goto LABEL_18;
      v18 = &v15[8 * ((unsigned __int64)(v13 + v14) >> 6)];
      for ( j = ~*(_QWORD *)v18 | ((1LL << ((v13 + v14) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v18 )
      {
        v18 += 8;
        if ( v18 > &v15[8 * ((unsigned __int64)v16 >> 6)] )
          goto LABEL_18;
      }
      _BitScanForward64(&v20, ~j);
      v17 = v20 + ((unsigned int)((v18 - v15) >> 3) << 6);
      if ( v17 > v16 )
      {
LABEL_18:
        v17 = -1;
        goto LABEL_25;
      }
      if ( v17 != -1 )
        break;
LABEL_25:
      if ( !v14 )
        goto LABEL_30;
      SizeOfBitMap = v11 + 1;
      if ( v11 + 1 > qword_140E300A8->SizeOfBitMap )
        SizeOfBitMap = qword_140E300A8->SizeOfBitMap;
      v12 = SizeOfBitMap - 1;
      v14 = 0;
    }
    v17 -= v13;
LABEL_30:
    if ( v17 >= v11 && v17 != -1 )
    {
      v11 = v17 + 1;
      v22 = *((_QWORD *)qword_140E300C8 + v17);
      if ( (*(_DWORD *)(v22 + 4) & 2) != 0 )
      {
        for ( k = *(_QWORD *)(v22 + 7056); k != 0x3FFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x220000000000LL) & 0xFFFFFFFFFFLL )
          guard_dispatch_icall_no_overrides(a1, k);
      }
      continue;
    }
    break;
  }
  MiRemovePendingBadPagesFromDump(a1);
  if ( qword_140E375F8 )
    MiRemoveEnclavePagesFromDump(a1);
}
