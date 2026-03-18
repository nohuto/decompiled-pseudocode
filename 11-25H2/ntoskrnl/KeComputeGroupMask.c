/*
 * XREFs of KeComputeGroupMask @ 0x14049986C
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BBBF8 (KeQueryCpuPartitionAffinity.c)
 *     KiExtendProcessAffinity @ 0x1405C4C24 (KiExtendProcessAffinity.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeComputeGroupMask(unsigned __int16 *a1, signed __int64 *a2)
{
  unsigned __int16 result; // ax

  *(_OWORD *)a2 = 0LL;
  for ( result = 0; result < *a1; ++result )
  {
    if ( *(_QWORD *)&a1[4 * result + 4] )
      _bittestandset64(a2, result);
  }
  return result;
}
