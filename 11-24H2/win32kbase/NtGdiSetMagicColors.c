/*
 * XREFs of NtGdiSetMagicColors @ 0x1401C3A40
 * Callers:
 *     <none>
 * Callees:
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 */

__int64 __fastcall NtGdiSetMagicColors(HDC a1, struct tagPALETTEENTRY a2, unsigned int a3)
{
  return GreSetMagicColors(a1, a2, a3);
}
