/*
 * XREFs of ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180289B20
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C2C90 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C3598 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateRefreshRate(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE *a3)
{
  CSyncLockGroup *v4; // rcx
  unsigned __int64 v5; // rbx
  int v6; // eax

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  v4 = (CSyncLockGroup *)*((_QWORD *)this + 4236);
  v5 = (unsigned __int64)this + 160;
  if ( v4 )
  {
    CSyncLockGroup::RemoveRenderTarget(
      v4,
      (struct IMonitorTarget *)(v5 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_QWORD *)this + 4236) = 0LL;
  }
  v6 = CLegacyRenderTarget::EnsureDXGIOutput(this);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x9Bu, 0LL);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 232LL))((char *)this + 160);
  }
  else
  {
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 160));
  }
  return 0LL;
}
