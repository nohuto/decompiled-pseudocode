/*
 * XREFs of KeIsAttachedProcess @ 0x14042F3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
