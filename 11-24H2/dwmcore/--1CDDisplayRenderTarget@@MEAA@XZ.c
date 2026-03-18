/*
 * XREFs of ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x1802750D4
 * Callers:
 *     ??_GCDDisplayRenderTarget@@MEAAPEAXI@Z @ 0x1802757D0 (--_GCDDisplayRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180188F50 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801E4E90 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18024CB74 (--1COverlayContext@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180250300 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CFSVPProvider@@QEAA@XZ @ 0x1802751B0 (--1CFSVPProvider@@QEAA@XZ.c)
 */

void __fastcall CDDisplayRenderTarget::~CDDisplayRenderTarget(CDDisplayRenderTarget *this)
{
  CDDisplayRenderTarget *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8

  *(_QWORD *)this = &CDDisplayRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *((_QWORD *)this + 11) = &CDDisplayRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  v2 = (CDDisplayRenderTarget *)((char *)this + 160);
  *(_QWORD *)v2 = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CDDisplayRenderTarget::`vftable';
  CDDisplayRenderTarget::ReleaseSwapChain(v2);
  CFSVPProvider::~CFSVPProvider((CDDisplayRenderTarget *)((char *)this + 33432));
  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((__int64)this + 30776);
  COverlayContext::~COverlayContext((void **)this + 28);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 27,
    v3,
    v4);
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>(
    (__int64 *)this + 26,
    v5,
    v6);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 24,
    v7,
    v8);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 23);
  CRenderTarget::~CRenderTarget(this);
}
