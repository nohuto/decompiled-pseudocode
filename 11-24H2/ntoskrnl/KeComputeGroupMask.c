/*
 * XREFs of KeComputeGroupMask @ 0x1404936EC
 * Callers:
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BD154 (KeQueryCpuPartitionAffinity.c)
 *     KiExtendProcessAffinity @ 0x1405C6828 (KiExtendProcessAffinity.c)
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
