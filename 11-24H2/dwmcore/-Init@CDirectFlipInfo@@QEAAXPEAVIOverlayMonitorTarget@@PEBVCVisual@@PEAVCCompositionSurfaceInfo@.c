/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801A4054
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801A41C0 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VCRegion@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@YA?AV?$shared_ptr@VCRegion@@@0@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18027CA90 (--$make_shared@VCRegion@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::Init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 *v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 16), a4);
  *(_DWORD *)(a1 + 52) = a5;
  *(_DWORD *)(a1 + 48) = 1;
  std::shared_ptr<CRegion>::reset(a1 + 32);
  if ( *(int *)(a1 + 52) >= 3 && !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(a6) )
  {
    v10 = (__int64 *)std::make_shared<CRegion,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> const &>(
                       v11,
                       v9);
    std::shared_ptr<CRegion>::operator=((_QWORD *)(a1 + 32), v10);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  *(_DWORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 64LL))(a4);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
