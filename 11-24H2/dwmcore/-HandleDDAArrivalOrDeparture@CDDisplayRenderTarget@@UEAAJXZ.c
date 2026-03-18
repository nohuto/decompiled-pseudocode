/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x18027F3C0
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180188F20 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x180284C3C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::HandleDDAArrivalOrDeparture(CDDisplayRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  CCachedVisualImage **v7; // rcx
  int v8; // eax

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 && *((_BYTE *)this + 33361) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v6 = *((_QWORD *)this + 7);
    if ( (v4 != 0) == (v6 != 0) )
    {
      if ( v6 )
        CTargetDirtyBase<8>::SetFullDirty(v6 + 480);
    }
    else
    {
      v7 = (CCachedVisualImage **)((char *)this + 56);
      if ( v6 )
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v7, v6, v5);
      }
      else
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v7, 0LL, v5);
        v8 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 5),
               *((struct CDesktopTree **)this + 4),
               (CDDisplayRenderTarget *)((char *)this + 32944),
               (CDDisplayRenderTarget *)((char *)this + 30352),
               (struct CDDARenderTarget **)this + 7);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x330u, 0LL);
      }
    }
  }
  return v2;
}
