/*
 * XREFs of MiCreatePfnDatabase @ 0x140C51020
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiCreatePartitionOffsets @ 0x1407ECACC (MiCreatePartitionOffsets.c)
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140C4F9BC (MiInitializeNumaGraph.c)
 *     MiCreateSparsePfnDatabase @ 0x140C53498 (MiCreateSparsePfnDatabase.c)
 *     MiInitializePartitions @ 0x140C55CA8 (MiInitializePartitions.c)
 *     MiQueryHardwareCacheInformation @ 0x140C5C2C4 (MiQueryHardwareCacheInformation.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned __int64 v4; // rbx

  MiQueryHardwareCacheInformation();
  qword_140E2DD04 = 0x10000000100LL;
  dword_140E2DD0C = 256;
  v2 = 256;
  if ( dword_140E2DD00[0] <= 0x100u )
  {
    v2 = dword_140E2DD00[0];
    if ( dword_140E2DD00[0] < 0x20u )
      v2 = 32;
  }
  dword_140E2DD00[0] = v2;
  v3 = qword_140E2DD20 + 1;
  if ( qword_140E35C40 == qword_140E2DD20 + 1 )
    v3 = qword_140E2DD20 + 2049;
  qword_140E2DC38 = 48 * v3;
  qword_140E2DC10 = 384LL * (unsigned __int16)KeNumberNodes + 48 * v3;
  qword_140E35E58 = (qword_140E2DC10 + 4LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v4 = (qword_140E35E58 + 360LL * (unsigned __int16)KeNumberNodes + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  qword_140E300D8 = v4;
  qword_140E300E0 = MiCreatePartitionOffsets(0LL, 0LL);
  MxPfnAllocation = (v4 + qword_140E300E0 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFDE0000000000uLL;
  qword_140E2DC38 -= 0x220000000000LL;
  qword_140E2DC10 -= 0x220000000000LL;
  qword_140E35E58 -= 0x220000000000LL;
  qword_140E300D8 -= 0x220000000000LL;
  MiCreatePartitionOffsets(&MiSystemPartition, qword_140E300D8);
  MiCreateSparsePfnDatabase(a1);
  MiInitializePartitions(0LL);
  MiInitializePartition(&MiSystemPartition, 0);
  return MiInitializeNumaGraph(a1);
}
