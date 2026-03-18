/*
 * XREFs of CreateCompressedSourceBitmap @ 0x18022F200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CreateCompressedSourceBitmap(
        struct IWICImagingFactory *a1,
        const void *a2,
        unsigned int a3,
        double a4,
        double a5,
        struct IWICBitmap **a6)
{
  return CCompressedSourceBitmap::Create(a1, a2, a3, a4, a5, a6);
}
