/*
 * XREFs of ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x18027FA30
 * Callers:
 *     ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x1802805D0 (--_ECRemoteAppRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8E90 (--1-$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801A9FC0 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18028C21C (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CRemoteAppRenderTarget::~CRemoteAppRenderTarget(CRemoteAppRenderTarget *this)
{
  *(_QWORD *)this = &CRemoteAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 20) = &CRemoteAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CRemoteAppRenderTarget::`vftable'{for `IVailRenderTarget'};
  CRemoteAppRenderTarget::ReleaseSwapChain(this);
  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((__int64)this + 280);
  wil::com_ptr_t<CCompSwapChain,wil::err_returncode_policy>::~com_ptr_t<CCompSwapChain,wil::err_returncode_policy>((__int64 *)this + 22);
  CRenderTarget::~CRenderTarget(this);
}
