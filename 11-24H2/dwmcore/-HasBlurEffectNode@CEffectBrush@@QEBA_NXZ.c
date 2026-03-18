/*
 * XREFs of ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x1800A8C98
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1800A8898 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCV.c)
 *     ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1801B2EF0 (-GetBackdropFlags@CEffectBrush@@UEBA-AW4ContentBackdropFlags@@XZ.c)
 *     ?HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ @ 0x18029A2F0 (-HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::HasBlurEffectNode(CEffectBrush *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 112LL))(v1);
}
