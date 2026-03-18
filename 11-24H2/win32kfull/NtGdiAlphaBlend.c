/*
 * XREFs of NtGdiAlphaBlend @ 0x14018B4B0
 * Callers:
 *     <none>
 * Callees:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return GreAlphaBlend(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
