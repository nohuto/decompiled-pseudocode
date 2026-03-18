/*
 * XREFs of ??1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ @ 0x1802DA494
 * Callers:
 *     ??_GCSecondaryCrossAdapterIndirectBitmap@@UEAAPEAXI@Z @ 0x1802DA4C0 (--_GCSecondaryCrossAdapterIndirectBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSecondaryCrossAdapterIndirectBitmap::~CSecondaryCrossAdapterIndirectBitmap(
        CSecondaryCrossAdapterIndirectBitmap *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 41);
  CSecondaryD2DBitmap::~CSecondaryD2DBitmap((FastRegion::CRegion **)this);
}
