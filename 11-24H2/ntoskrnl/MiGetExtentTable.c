/*
 * XREFs of MiGetExtentTable @ 0x14067C4B8
 * Callers:
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140E2D8C8 + 8 * a1;
}
