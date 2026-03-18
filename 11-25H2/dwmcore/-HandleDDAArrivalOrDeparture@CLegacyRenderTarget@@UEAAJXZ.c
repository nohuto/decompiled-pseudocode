/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x18020F620
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x18028F6F0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18020F6F0 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1802901DC (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::HandleDDAArrivalOrDeparture(CLegacyRenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  char *v7; // rcx
  int v8; // eax

  v2 = 0;
  v3 = *((_QWORD *)this + 4);
  if ( v3 && *((_BYTE *)this + 33738) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = *((_QWORD *)this + 6);
    if ( (v4 != 0) == (v5 != 0) )
    {
      if ( v5 )
        CTargetDirtyBase<8>::SetFullDirty(v5 + 480);
    }
    else
    {
      v7 = (char *)this + 48;
      if ( v5 )
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v7);
      }
      else
      {
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset(v7);
        v8 = CDDARenderTarget::Create(
               *((struct IDXGIOutputDWM **)this + 4),
               *((struct CDesktopTree **)this + 3),
               (CLegacyRenderTarget *)((char *)this + 33328),
               (CLegacyRenderTarget *)((char *)this + 30728),
               (struct CDDARenderTarget **)this + 6);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x32Cu, 0LL);
      }
    }
  }
  return v2;
}
