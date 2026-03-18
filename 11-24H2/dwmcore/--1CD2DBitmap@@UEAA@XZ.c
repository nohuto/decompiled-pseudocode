/*
 * XREFs of ??1CD2DBitmap@@UEAA@XZ @ 0x1801A50EC
 * Callers:
 *     ??_GCD2DBitmap@@UEAAPEAXI@Z @ 0x1801A50B0 (--_GCD2DBitmap@@UEAAPEAXI@Z.c)
 *     ??1CDeviceTextureTarget@@UEAA@XZ @ 0x1801EC45C (--1CDeviceTextureTarget@@UEAA@XZ.c)
 *     ??1CSecondaryD2DBitmap@@UEAA@XZ @ 0x18020A4CC (--1CSecondaryD2DBitmap@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A51D8 (--1-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>((char *)this + 120);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 13);
  CD2DResource::~CD2DResource(this);
}
