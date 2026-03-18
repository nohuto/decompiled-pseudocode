/*
 * XREFs of MiComputePartitionHugeIoSpaceSize @ 0x14066FB48
 * Callers:
 *     MiCreatePartitionOffsets @ 0x1407EC4FC (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiComputePartitionHugeIoSpaceSize()
{
  return 16 * (unsigned __int16)KeNumberNodes * (unsigned __int64)(unsigned int)dword_140E2DBC0[0];
}
