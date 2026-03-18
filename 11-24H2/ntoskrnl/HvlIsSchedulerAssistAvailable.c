/*
 * XREFs of HvlIsSchedulerAssistAvailable @ 0x140585C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlIsSchedulerAssistAvailable()
{
  return (HvlpFlags & 0x8000) != 0;
}
