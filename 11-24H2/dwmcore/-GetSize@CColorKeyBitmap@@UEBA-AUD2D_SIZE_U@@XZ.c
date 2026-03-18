/*
 * XREFs of ?GetSize@CColorKeyBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180200D10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6CC0 (-GetSize@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CColorKeyBitmap::GetSize(CColorKeyBitmap *this, __int64 a2)
{
  void (*v3)(void); // rax

  v3 = *(void (**)(void))(**((_QWORD **)this + 3) + 32LL);
  if ( (char *)v3 == (char *)IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetSize )
    IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetSize();
  else
    v3();
  return (struct D2D_SIZE_U)a2;
}
