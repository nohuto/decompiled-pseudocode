/*
 * XREFs of KeAreApcsDisabled @ 0x14045AC60
 * Callers:
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
