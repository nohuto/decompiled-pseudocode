/*
 * XREFs of MiCreatePfnDatabase @ 0x140C4EE90
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiCreatePartitionOffsets @ 0x1407EC4FC (MiCreatePartitionOffsets.c)
 *     MiInitializePartition @ 0x1407EC758 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140C4D820 (MiInitializeNumaGraph.c)
 *     MiCreateSparsePfnDatabase @ 0x140C51308 (MiCreateSparsePfnDatabase.c)
 *     MiInitializePartitions @ 0x140C53B18 (MiInitializePartitions.c)
 *     MiQueryHardwareCacheInformation @ 0x140C5A134 (MiQueryHardwareCacheInformation.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned __int64 v4; // rbx

  MiQueryHardwareCacheInformation();
  qword_140E2DBC4 = 0x10000000100LL;
  dword_140E2DBCC = 256;
  v2 = 256;
  if ( dword_140E2DBC0[0] <= 0x100u )
  {
    v2 = dword_140E2DBC0[0];
    if ( dword_140E2DBC0[0] < 0x20u )
      v2 = 32;
  }
  dword_140E2DBC0[0] = v2;
  v3 = qword_140E2DBE0 + 1;
  if ( qword_140E35B00 == qword_140E2DBE0 + 1 )
    v3 = qword_140E2DBE0 + 2049;
  qword_140E2DAF8 = 48 * v3;
  qword_140E2DAD0 = 384LL * (unsigned __int16)KeNumberNodes + 48 * v3;
  qword_140E35D18 = (qword_140E2DAD0 + 4LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v4 = (qword_140E35D18 + 360LL * (unsigned __int16)KeNumberNodes + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  qword_140E2FF98 = v4;
  qword_140E2FFA0 = MiCreatePartitionOffsets(0LL, 0LL);
  MxPfnAllocation = (v4 + qword_140E2FFA0 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFDE0000000000uLL;
  qword_140E2DAF8 -= 0x220000000000LL;
  qword_140E2DAD0 -= 0x220000000000LL;
  qword_140E35D18 -= 0x220000000000LL;
  qword_140E2FF98 -= 0x220000000000LL;
  MiCreatePartitionOffsets(&MiSystemPartition, qword_140E2FF98);
  MiCreateSparsePfnDatabase(a1);
  MiInitializePartitions(0LL);
  MiInitializePartition(&MiSystemPartition, 0);
  return MiInitializeNumaGraph(a1);
}
