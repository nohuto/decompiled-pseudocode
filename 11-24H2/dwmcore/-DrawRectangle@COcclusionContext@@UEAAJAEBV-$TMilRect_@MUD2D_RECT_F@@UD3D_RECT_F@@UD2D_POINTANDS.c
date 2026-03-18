/*
 * XREFs of ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z @ 0x1801E3E00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ @ 0x1801E3F30 (-IsConstantOpaque@CSolidColorLegacyMilBrush@@UEBA_NXZ.c)
 *     ?IsOfType@?$CSolidColorLegacyMilBrushGeneratedT@VCSolidColorLegacyMilBrush@@VCLegacyMilBrush@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E4070 (-IsOfType@-$CSolidColorLegacyMilBrushGeneratedT@VCSolidColorLegacyMilBrush@@VCLegacyMilBrush@@@@.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1801E408C (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18027AD9C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::DrawRectangle(__int64 a1, __int64 a2, CSolidColorLegacyMilBrush *a3)
{
  bool v3; // zf
  __int128 v5; // xmm6
  bool (__fastcall *v8)(CSolidColorLegacyMilBrush *__hidden); // rax
  __int64 (__fastcall *v10)(CSolidColorLegacyMilBrush *, __int64); // rax
  char v11; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-48h]
  char v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+51h] [rbp-37h]
  __int16 v21; // [rsp+55h] [rbp-33h]
  char v22; // [rsp+57h] [rbp-31h]

  v3 = *(_DWORD *)(a1 + 1712) == 0;
  v5 = DirectX::g_XMZero;
  v16 = DirectX::g_XMZero;
  if ( v3 && a3 )
  {
    v8 = *(bool (__fastcall **)(CSolidColorLegacyMilBrush *__hidden))(*(_QWORD *)a3 + 184LL);
    if ( v8 == CSolidColorLegacyMilBrush::IsConstantOpaque ? CSolidColorLegacyMilBrush::IsConstantOpaque(a3) : v8(a3) )
    {
      COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0LL, &v16);
      v5 = v16;
    }
  }
  v10 = *(__int64 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)a3 + 64LL);
  if ( (char *)v10 == (char *)CSolidColorLegacyMilBrushGeneratedT<CSolidColorLegacyMilBrush,CLegacyMilBrush>::IsOfType )
    v11 = CSolidColorLegacyMilBrushGeneratedT<CSolidColorLegacyMilBrush,CLegacyMilBrush>::IsOfType(a3, 84LL);
  else
    v11 = v10(a3, 84LL);
  if ( v11 )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a3);
    if ( CachedBrushCVINoRef )
    {
      v14 = *(_QWORD *)(a1 + 1544);
      v17[1] = CachedBrushCVINoRef;
      v17[0] = v14;
      v15 = *(_QWORD *)(a1 + 8);
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v18 = v5;
      v19 = 1;
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 208LL))(v15, v17);
    }
  }
  return 0LL;
}
