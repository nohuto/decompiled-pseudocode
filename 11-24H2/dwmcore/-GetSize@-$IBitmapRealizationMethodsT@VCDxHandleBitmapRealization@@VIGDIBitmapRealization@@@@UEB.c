/*
 * XREFs of ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801D5DF0
 * Callers:
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97C0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBA.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 296);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 72) + 88LL))(v2 + 72);
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
  }
  return a2;
}
