/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x180280310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180188F20 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180246390 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180246D9C (--0CMonitorTransform@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x180284C3C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::HandleDDAArrivalOrDeparture(CRemoteRenderTarget *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v10[4]; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v11[272]; // [rsp+50h] [rbp-128h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3
    && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0) != (*((_QWORD *)this + 5) != 0LL) )
  {
    if ( *((_QWORD *)this + 5) )
    {
      wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CCachedVisualImage **)this + 5, v4, v5);
    }
    else
    {
      CMonitorTransform::CMonitorTransform((CMonitorTransform *)v11);
      v10[0] = 0;
      v10[1] = 0;
      CMonitorTransform::Initialize(
        (__int64)v11,
        v10,
        (float *)this + 16,
        1.0,
        (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
        1,
        0LL);
      wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CCachedVisualImage **)this + 5, v6, v7);
      v8 = CDDARenderTarget::Create(
             *((struct IDXGIOutputDWM **)this + 3),
             *((struct CDesktopTree **)this + 6),
             (CRemoteRenderTarget *)((char *)this + 148),
             (const struct CMonitorTransform *)v11,
             (struct CDDARenderTarget **)this + 5);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x10Eu, 0LL);
    }
  }
  return v2;
}
