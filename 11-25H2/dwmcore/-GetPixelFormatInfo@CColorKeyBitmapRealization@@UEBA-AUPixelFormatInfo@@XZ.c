/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180208E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@CColorKeyBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180208E60 (-GetPixelFormatInfo@CColorKeyBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  void (*v3)(void); // rax

  v3 = *(void (**)(void))(**(_QWORD **)(a1 + 16) + 24LL);
  if ( (char *)v3 == (char *)CColorKeyBitmap::GetPixelFormatInfo )
    CColorKeyBitmap::GetPixelFormatInfo();
  else
    v3();
  return a2;
}
