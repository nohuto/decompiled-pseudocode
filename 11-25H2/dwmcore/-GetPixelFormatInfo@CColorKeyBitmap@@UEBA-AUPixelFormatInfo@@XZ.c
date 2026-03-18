/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180208E60
 * Callers:
 *     ?GetPixelFormatInfo@CColorKeyBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180208E20 (-GetPixelFormatInfo@CColorKeyBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CColorKeyBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  if ( *a2 == 88 )
    *a2 = 87;
  a2[1] = 1;
  return a2;
}
