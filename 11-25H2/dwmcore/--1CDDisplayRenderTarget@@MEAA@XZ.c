/*
 * XREFs of ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x18027F880
 * Callers:
 *     ??_GCDDisplayRenderTarget@@MEAAPEAXI@Z @ 0x180280200 (--_GCDDisplayRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801A9FC0 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ??1CFSVPProvider@@QEAA@XZ @ 0x18024B64C (--1CFSVPProvider@@QEAA@XZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x180257F44 (--1COverlayContext@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18025B950 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDDisplayRenderTarget::~CDDisplayRenderTarget(CDDisplayRenderTarget *this)
{
  CDDisplayRenderTarget *v2; // rcx

  *(_QWORD *)this = &CDDisplayRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *((_QWORD *)this + 11) = &CDDisplayRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  v2 = (CDDisplayRenderTarget *)((char *)this + 160);
  *(_QWORD *)v2 = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CDDisplayRenderTarget::`vftable';
  CDDisplayRenderTarget::ReleaseSwapChain(v2);
  CFSVPProvider::~CFSVPProvider((CDDisplayRenderTarget *)((char *)this + 33816));
  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((__int64)this + 31160);
  COverlayContext::~COverlayContext((void **)this + 28);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((CResource **)this + 27);
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((CResource **)this + 24);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 23);
  CRenderTarget::~CRenderTarget(this);
}
