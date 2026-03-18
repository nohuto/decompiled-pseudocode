/*
 * XREFs of ?IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z @ 0x18027708C
 * Callers:
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180277784 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@QEAA_NXZ @ 0x180277A44 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CursorScaledByHW@@@details@wil@@Q.c)
 */

bool __fastcall COverlayContext::IsCursorScaledByHardware(COverlayContext *this, const struct CD3DDevice *a2)
{
  bool v4; // zf
  __int64 v5; // rcx
  char IsEnabled; // al

  if ( !*((_BYTE *)COverlayContext::GetMonitorTransform(this) + 259) )
    return 0;
  if ( *((_QWORD *)this + 2468) )
    return 1;
  if ( *((_BYTE *)this + 19472) )
  {
    if ( !*((_BYTE *)this + 19473) )
      goto LABEL_10;
    v4 = (*((_BYTE *)this + 19360) & 4) == 0;
LABEL_9:
    if ( v4 )
      goto LABEL_10;
    return 1;
  }
  v5 = *((_QWORD *)this + 1617);
  if ( *((_QWORD *)this + 1618) - v5 == 400 && !*(_DWORD *)(v5 + 380) )
  {
    v4 = (*(_BYTE *)(v5 + 32) & 4) == 0;
    goto LABEL_9;
  }
LABEL_10:
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_CursorScaledByHW>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CursorScaledByHW>::GetImpl'::`2'::impl);
  if ( !*((_BYTE *)this + 19473) )
    return 0;
  if ( IsEnabled )
    return *((_BYTE *)this + 19772) != 0;
  if ( !a2 )
    return 0;
  return *((_DWORD *)a2 + 224) == 4098;
}
