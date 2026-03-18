/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@WCA@EAAJPEAI0@Z @ 0x1802557C0
 * Callers:
 *     ?GetSize@CWICBitmapWrapper@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180198F60 (-GetSize@CWICBitmapWrapper@@UEBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(__int64 a1, LONG *a2, LONG *a3)
{
  return CCompressedSourceBitmap::GetSize((struct _RTL_CRITICAL_SECTION *)(a1 - 32), a2, a3);
}
