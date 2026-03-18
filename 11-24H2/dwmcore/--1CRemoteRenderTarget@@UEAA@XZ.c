/*
 * XREFs of ??1CRemoteRenderTarget@@UEAA@XZ @ 0x180275360
 * Callers:
 *     ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x180275BF0 (--_GCRemoteRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801E4E90 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 */

void __fastcall CRemoteRenderTarget::~CRemoteRenderTarget(CRemoteRenderTarget *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8

  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((__int64)this + 336);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 26,
    v2,
    v3);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 25,
    v4,
    v5);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 23);
  CRenderTarget::~CRenderTarget(this);
}
