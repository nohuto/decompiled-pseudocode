/*
 * XREFs of ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18028A410
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C1D18 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x18020F47C (-ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x18022B9A0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x1802C8D60 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateRefreshRate(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE *a3)
{
  int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // r9d

  CDDisplayRenderTarget::ResetSyncLockGroup(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 25);
  updated = CDDisplayRenderTarget::EnsureDXGIOutput(this);
  if ( updated < 0 )
  {
    v6 = 154;
    goto LABEL_6;
  }
  CDDisplayRenderTarget::UpdateMPOCaps((CDirectFlipInfo **)this + 20);
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
  {
    updated = CDDisplaySwapChain::UpdateRefreshRate((CDDisplaySwapChain *)(v5 + 24));
    if ( updated < 0 )
    {
      v6 = 162;
LABEL_6:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v6, 0LL);
      CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
    }
  }
  return 0LL;
}
