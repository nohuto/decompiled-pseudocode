/*
 * XREFs of ??1CDDARenderTarget@@UEAA@XZ @ 0x1801E4DA8
 * Callers:
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x180284BF0 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801E4E90 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801E5020 (-InternalRelease@-$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CDDARenderTarget::~CDDARenderTarget(CDDARenderTarget *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  CTargetDirtyBase<8>::~CTargetDirtyBase<8>((char *)this + 480);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    (CCachedVisualImage **)this + 23,
    v2,
    v3);
  if ( *((_QWORD *)this + 22) )
    CMILRefCountBaseT<ISwapChain,CMilObjectDeleter>::InternalRelease();
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 21);
  CRenderTarget::~CRenderTarget(this);
}
