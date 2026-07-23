/*
 * XREFs of MiComputePartitionHugeIoSpaceSize @ 0x140670D18
 * Callers:
 *     MiCreatePartitionOffsets @ 0x1407ECACC (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiComputePartitionHugeIoSpaceSize()
{
  return 16 * (unsigned __int16)KeNumberNodes * (unsigned __int64)(unsigned int)dword_140E2DD00[0];
}
