/*
 * XREFs of KeGetClockOwner @ 0x1404F78E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeGetClockOwner()
{
  return (unsigned int)KiClockTimerOwner;
}
