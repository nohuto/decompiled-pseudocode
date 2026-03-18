/*
 * XREFs of PsGetCurrentProcess @ 0x14041E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
