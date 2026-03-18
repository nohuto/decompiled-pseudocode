/*
 * XREFs of ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A885C
 * Callers:
 *     ??_GCLegacyRenderTarget@@MEAAPEAXI@Z @ 0x1801A8810 (--_GCLegacyRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x18027FA08 (--1CLegacyStereoRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801A9FC0 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ??1CFSVPProvider@@QEAA@XZ @ 0x18024B64C (--1CFSVPProvider@@QEAA@XZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x180257F44 (--1COverlayContext@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x180259AC0 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CLegacyRenderTarget::~CLegacyRenderTarget(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v2; // rcx

  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *((_QWORD *)this + 11) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  v2 = (CLegacyRenderTarget *)((char *)this + 160);
  *(_QWORD *)v2 = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CLegacyStereoRenderTarget::`vftable';
  CLegacyRenderTarget::ReleaseSwapChain(v2);
  CFSVPProvider::~CFSVPProvider((CLegacyRenderTarget *)((char *)this + 33808));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 4225);
  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((char *)this + 31152);
  COverlayContext::~COverlayContext((CLegacyRenderTarget *)((char *)this + 216));
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((char *)this + 208);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((char *)this + 184);
  CRenderTarget::~CRenderTarget(this);
}
