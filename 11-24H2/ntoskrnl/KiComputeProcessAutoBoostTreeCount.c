/*
 * XREFs of KiComputeProcessAutoBoostTreeCount @ 0x1404AC408
 * Callers:
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 KiComputeProcessAutoBoostTreeCount()
{
  return ((unsigned int)(KeMaximumProcessors - 1) >> 3) + 1;
}
