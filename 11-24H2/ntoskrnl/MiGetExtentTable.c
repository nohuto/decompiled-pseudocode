/*
 * XREFs of MiGetExtentTable @ 0x14067B2D8
 * Callers:
 *     MiDeleteFileExtentList @ 0x1407F02DC (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140E2D788 + 8 * a1;
}
