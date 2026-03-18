/*
 * XREFs of ??1CDeviceTextureTarget@@UEAA@XZ @ 0x1801EC45C
 * Callers:
 *     ??_ECDeviceTextureTarget@@UEAAPEAXI@Z @ 0x1801EC420 (--_ECDeviceTextureTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CDeviceTextureTarget::~CDeviceTextureTarget(CDeviceTextureTarget *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 34);
  CD2DBitmap::~CD2DBitmap(this);
}
