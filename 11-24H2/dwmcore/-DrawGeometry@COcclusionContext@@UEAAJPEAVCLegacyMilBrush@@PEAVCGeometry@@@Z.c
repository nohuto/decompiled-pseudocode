/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1801E3F70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E4050 (-IsOfType@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@UEBA_NW4MI.c)
 *     ?IsOfType@?$CSolidColorLegacyMilBrushGeneratedT@VCSolidColorLegacyMilBrush@@VCLegacyMilBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E4070 (-IsOfType@-$CSolidColorLegacyMilBrushGeneratedT@VCSolidColorLegacyMilBrush@@VCLegacyMilBrush@@@@.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1801E408C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(
        COcclusionContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int64 (__fastcall *v5)(struct CLegacyMilBrush *, __int64, struct CGeometry *); // rax
  char v6; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h]
  char v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+41h] [rbp-17h]
  __int16 v15; // [rsp+45h] [rbp-13h]
  char v16; // [rsp+47h] [rbp-11h]

  v5 = *(__int64 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 64LL);
  if ( (char *)v5 == (char *)CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::IsOfType )
  {
    v6 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::IsOfType(a2, 84LL, a3);
  }
  else if ( (char *)v5 == (char *)CSolidColorLegacyMilBrushGeneratedT<CSolidColorLegacyMilBrush,CLegacyMilBrush>::IsOfType )
  {
    v6 = CSolidColorLegacyMilBrushGeneratedT<CSolidColorLegacyMilBrush,CLegacyMilBrush>::IsOfType(a2, 84LL);
  }
  else
  {
    v6 = v5(a2, 84LL, a3);
  }
  if ( v6 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v9 = *((_QWORD *)this + 193);
      v11[1] = CachedBrushCVINoRef;
      v11[0] = v9;
      v10 = *((_QWORD *)this + 1);
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v12 = DirectX::g_XMZero;
      v13 = 0;
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 208LL))(v10, v11);
    }
  }
  return 0LL;
}
