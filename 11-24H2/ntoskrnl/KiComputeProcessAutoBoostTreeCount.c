/*
 * XREFs of KiComputeProcessAutoBoostTreeCount @ 0x1404B1B78
 * Callers:
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 KiComputeProcessAutoBoostTreeCount()
{
  return ((unsigned int)(KeMaximumProcessors - 1) >> 3) + 1;
}
