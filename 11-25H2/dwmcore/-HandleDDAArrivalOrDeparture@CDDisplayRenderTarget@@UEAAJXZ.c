/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x18028A1E0
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18020F6F0 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1802901DC (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::HandleDDAArrivalOrDeparture(CDDisplayRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  CResource **v6; // rcx
  int v7; // eax

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 && *((_BYTE *)this + 33745) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = *((_QWORD *)this + 7);
    if ( (v4 != 0) == (v5 != 0) )
    {
      if ( v5 )
        CTargetDirtyBase<8>::SetFullDirty(v5 + 480);
    }
    else
    {
      v6 = (CResource **)((char *)this + 56);
      if ( v5 )
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v6);
      }
      else
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v6);
        v7 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 5),
               *((struct CDesktopTree **)this + 4),
               (CDDisplayRenderTarget *)((char *)this + 33328),
               (CDDisplayRenderTarget *)((char *)this + 30736),
               (struct CDDARenderTarget **)this + 7);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x393u, 0LL);
      }
    }
  }
  return v2;
}
