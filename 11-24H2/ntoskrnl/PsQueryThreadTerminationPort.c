/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1406FA4F0
 * Callers:
 *     sub_140695E50 @ 0x140695E50 (sub_140695E50.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
