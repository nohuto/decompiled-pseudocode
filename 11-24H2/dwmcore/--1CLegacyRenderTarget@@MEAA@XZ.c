/*
 * XREFs of ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801E4CCC
 * Callers:
 *     ??_GCLegacyRenderTarget@@MEAAPEAXI@Z @ 0x1801E4C80 (--_GCLegacyRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x1802752B8 (--1CLegacyStereoRenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801E4E90 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18024CB74 (--1COverlayContext@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18024E5F0 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ??1CFSVPProvider@@QEAA@XZ @ 0x1802751B0 (--1CFSVPProvider@@QEAA@XZ.c)
 */

void __fastcall CLegacyRenderTarget::~CLegacyRenderTarget(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8

  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *((_QWORD *)this + 11) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  v2 = (CLegacyRenderTarget *)((char *)this + 160);
  *(_QWORD *)v2 = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CLegacyStereoRenderTarget::`vftable';
  CLegacyRenderTarget::ReleaseSwapChain(v2);
  CFSVPProvider::~CFSVPProvider((CLegacyRenderTarget *)((char *)this + 33424));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 4177);
  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((char *)this + 30768);
  COverlayContext::~COverlayContext((CLegacyRenderTarget *)((char *)this + 216));
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 26,
    v3,
    v4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 23,
    v5,
    v6);
  CRenderTarget::~CRenderTarget(this);
}
