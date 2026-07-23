/*
 * XREFs of KeQueryActiveNodeCount @ 0x1405B7F94
 * Callers:
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x1405D437C (PpmHeteroHgsCpuSupportedForContainment.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 */

__int64 KeQueryActiveNodeCount()
{
  unsigned __int16 v0; // di
  unsigned __int16 i; // bx
  __int64 v2; // rcx

  v0 = 0;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v2 = KeNodeBlock[i];
    if ( v2 && !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)(v2 + 16)) )
      ++v0;
  }
  return v0;
}
