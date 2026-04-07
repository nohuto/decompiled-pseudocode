/*
 * XREFs of ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800C9E00
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800C9D18 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800CA4F0 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180009BD0 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18004FEDC (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800AD57C (--$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetPro.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800CC79C (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::Initialize(CBaseObject **this)
{
  CMagnifierRenderTargetProxy **v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  CMatrixTransformProxy *v7; // rcx
  int v8; // eax
  int v9; // eax
  struct _MilMatrix3x2D v11; // [rsp+30h] [rbp-48h] BYREF

  v1 = this + 3;
  v3 = CCompositor::CreateProxy<CMagnifierRenderTargetProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         this + 3);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(CMagnifierRenderTargetProxy *, _QWORD))(*(_QWORD *)*v1 + 8LL))(
           *v1,
           *((_QWORD *)this[2] + 2));
    v4 = v5;
    if ( v5 >= 0 )
    {
      if ( this[4]
        || (v6 = CCompositor::CreateProxy<CMatrixTransformProxy>(
                   *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                   this + 4),
            v4 = v6,
            v6 >= 0) )
      {
        v7 = this[4];
        *(_OWORD *)&v11.S_11 = _xmm;
        *(_OWORD *)&v11.DX = 0LL;
        *(_OWORD *)&v11.S_21 = _xmm;
        v8 = CMatrixTransformProxy::Update(v7, &v11);
        v4 = v8;
        if ( v8 >= 0 )
        {
          v9 = CMagnifierRenderTargetProxy::SetTransform(*v1, this[4]);
          v4 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x8Du);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8Bu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x80u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x7Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x7Au);
  }
  return v4;
}
