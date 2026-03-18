/*
 * XREFs of KeAreApcsDisabled @ 0x14045A090
 * Callers:
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
