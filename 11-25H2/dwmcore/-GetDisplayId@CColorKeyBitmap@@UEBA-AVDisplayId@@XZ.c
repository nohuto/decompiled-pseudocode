/*
 * XREFs of ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ @ 0x18020ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDisplayId@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA?AVDisplayId@@XZ @ 0x1802DFEE0 (-GetDisplayId@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::GetDisplayId(__int64 a1, __int64 a2)
{
  void (*v3)(void); // rax

  v3 = *(void (**)(void))(**(_QWORD **)(a1 + 24) + 48LL);
  if ( (char *)v3 == (char *)IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetDisplayId )
    IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetDisplayId();
  else
    v3();
  return a2;
}
