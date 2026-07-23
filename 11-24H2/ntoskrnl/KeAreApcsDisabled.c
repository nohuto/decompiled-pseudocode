/*
 * XREFs of KeAreApcsDisabled @ 0x14044F4E0
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
