/*
 * XREFs of MiGetExtentTable @ 0x14066FB18
 * Callers:
 *     MiDeleteFileExtentList @ 0x1407E043C (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140E2D548 + 8 * a1;
}
