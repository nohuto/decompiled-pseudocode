/*
 * XREFs of ?CopyPixels@CBitmap@@WCA@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180255A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::CopyPixels(
        __int64 a1,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  return CBitmap::CopyPixels((struct _RTL_CRITICAL_SECTION *)(a1 - 32), a2, a3, a4, a5);
}
