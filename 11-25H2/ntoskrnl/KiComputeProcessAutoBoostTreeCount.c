/*
 * XREFs of KiComputeProcessAutoBoostTreeCount @ 0x1404B38AC
 * Callers:
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 KiComputeProcessAutoBoostTreeCount()
{
  return ((unsigned int)(KeMaximumProcessors - 1) >> 3) + 1;
}
