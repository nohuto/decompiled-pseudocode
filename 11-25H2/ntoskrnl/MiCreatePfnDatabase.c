/*
 * XREFs of MiCreatePfnDatabase @ 0x140C3DC60
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiCreatePartitionOffsets @ 0x1407DC65C (MiCreatePartitionOffsets.c)
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140C3C51C (MiInitializeNumaGraph.c)
 *     MiCreateSparsePfnDatabase @ 0x140C400D8 (MiCreateSparsePfnDatabase.c)
 *     MiInitializePartitions @ 0x140C428E8 (MiInitializePartitions.c)
 *     MiQueryHardwareCacheInformation @ 0x140C48E04 (MiQueryHardwareCacheInformation.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  unsigned __int64 v4; // rbx

  MiQueryHardwareCacheInformation();
  qword_140E2D984 = 0x10000000100LL;
  dword_140E2D98C = 256;
  v2 = 256;
  if ( dword_140E2D980[0] <= 0x100u )
  {
    v2 = dword_140E2D980[0];
    if ( dword_140E2D980[0] < 0x20u )
      v2 = 32;
  }
  dword_140E2D980[0] = v2;
  v3 = qword_140E2D9A0 + 1;
  if ( qword_140E358C0 == qword_140E2D9A0 + 1 )
    v3 = qword_140E2D9A0 + 2049;
  qword_140E2D8B8 = 48 * v3;
  qword_140E2D890 = 384LL * (unsigned __int16)KeNumberNodes + 48 * v3;
  qword_140E35AD8 = (qword_140E2D890 + 4LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v4 = (qword_140E35AD8 + 360LL * (unsigned __int16)KeNumberNodes + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  qword_140E2FD58 = v4;
  qword_140E2FD60 = MiCreatePartitionOffsets(0LL, 0LL);
  MxPfnAllocation = (v4 + qword_140E2FD60 + 4095) >> 12;
  MmPfnDatabase = 0xFFFFDE0000000000uLL;
  qword_140E2D8B8 -= 0x220000000000LL;
  qword_140E2D890 -= 0x220000000000LL;
  qword_140E35AD8 -= 0x220000000000LL;
  qword_140E2FD58 -= 0x220000000000LL;
  MiCreatePartitionOffsets(&MiSystemPartition, qword_140E2FD58);
  MiCreateSparsePfnDatabase(a1);
  MiInitializePartitions(0LL);
  MiInitializePartition(&MiSystemPartition, 0);
  return MiInitializeNumaGraph(a1);
}
