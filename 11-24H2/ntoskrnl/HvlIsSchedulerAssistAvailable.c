/*
 * XREFs of HvlIsSchedulerAssistAvailable @ 0x140582FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlIsSchedulerAssistAvailable()
{
  return (HvlpFlags & 0x8000) != 0;
}
