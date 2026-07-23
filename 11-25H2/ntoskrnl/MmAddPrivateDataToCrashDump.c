/*
 * XREFs of MmAddPrivateDataToCrashDump @ 0x14066BF24
 * Callers:
 *     IopLiveDumpAddPfnDatabase @ 0x140594800 (IopLiveDumpAddPfnDatabase.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405988A0 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059CBDC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddPartitionDataToCrashDump @ 0x14066B648 (MiAddPartitionDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmAddPrivateDataToCrashDump(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 *v6; // r14
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = MmAddRangeToCrashDump(a1, MmPfnDatabase, 48 * (qword_140E2D9A0 + 1));
    if ( v5 < 0 )
      v2 = v5;
  }
  if ( (a2 & 2) != 0 && (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 = guard_dispatch_icall_no_overrides(a1);
      ++v6;
      if ( v8 < 0 )
        v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  if ( (a2 & 4) != 0 )
  {
    v9 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    v10 = MmAddRangeToCrashDump(a1, v9, PsNtosImageEnd - v9);
    if ( v10 < 0 )
      v2 = v10;
  }
  if ( (a2 & 8) != 0 )
  {
    v11 = MmAddRangeToCrashDump(a1, PsHalImageBase, PsHalImageEnd - (_QWORD)PsHalImageBase);
    if ( v11 < 0 )
      v2 = v11;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v12 = MiAddPartitionDataToCrashDump(a1);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  return v2;
}
