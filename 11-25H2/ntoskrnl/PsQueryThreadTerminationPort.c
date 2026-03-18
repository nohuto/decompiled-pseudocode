/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1406F0A50
 * Callers:
 *     sub_140689930 @ 0x140689930 (sub_140689930.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
