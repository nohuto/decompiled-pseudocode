/*
 * XREFs of ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180049010
 * Callers:
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180048FC4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?SetOpacity@CImage@@UEAAXN@Z @ 0x1800C5970 (-SetOpacity@CImage@@UEAAXN@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180049160 (-CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x18004916C (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800491B4 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::SendSetOpacity(CVisualProxy **this, double a2)
{
  int v3; // eax
  unsigned int v4; // r8d
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  CBaseObject *v8; // rcx
  int v10; // eax
  CBaseObject *v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 >= 1.0 )
  {
    v10 = CVisualProxy::SetEffect(this[2], 0LL);
    v5 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x308u, 0LL);
  }
  else
  {
    v11 = 0LL;
    v3 = CCompositor::CreateEffectGroupProxy(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), &v11);
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x2FEu, 0LL);
      v8 = v11;
      if ( !v11 )
        return v5;
      goto LABEL_7;
    }
    v6 = CEffectGroupProxy::Update(v11, a2, v4, 0LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x301u, 0LL);
    }
    else
    {
      v7 = CVisualProxy::SetEffect(this[2], v11);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x304u, 0LL);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
        return v5;
      }
    }
    if ( v11 )
    {
      v8 = v11;
LABEL_7:
      CBaseObject::Release(v8);
    }
  }
  return v5;
}
