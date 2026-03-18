/*
 * XREFs of ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180247F2C
 * Callers:
 *     ?ProcessUpdateSDRToHDRMultiplier@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATESDRTOHDRMULTIPLIER@@@Z @ 0x180278010 (-ProcessUpdateSDRToHDRMultiplier@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_D.c)
 *     ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z @ 0x18027F494 (-ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGE.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180247FB4 (-ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z.c)
 *     ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x18027EC08 (-SetSDRBoost@CDDARenderTarget@@QEAAXM@Z.c)
 *     ?SetSDRBoost@CDDisplaySwapChain@@UEAAXM@Z @ 0x18027FC70 (-SetSDRBoost@CDDisplaySwapChain@@UEAAXM@Z.c)
 */

void __fastcall CDDisplayRenderTarget::SetSDRBoost(CDDisplayRenderTarget *this, float a2)
{
  float v3; // xmm0_4
  CDDARenderTarget *v4; // rcx
  __int64 v5; // rcx

  v3 = ValidateSDRBoost(CCommonRegistryData::m_flSDRBoostOverride, (CDDisplayRenderTarget *)((char *)this + 128));
  if ( *((float *)this + 8280) != v3 )
  {
    v4 = (CDDARenderTarget *)*((_QWORD *)this + 27);
    *((float *)this + 8280) = v3;
    if ( v4 )
      CDDARenderTarget::SetSDRBoost(v4, v3);
    v5 = *((_QWORD *)this + 26);
    if ( v5 )
      CDDisplaySwapChain::SetSDRBoost((CDDisplaySwapChain *)(v5 + 24), *((float *)this + 8280));
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30776);
  }
}
