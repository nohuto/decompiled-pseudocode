/*
 * XREFs of ??1CResampleLayer@@UEAA@XZ @ 0x18021408C
 * Callers:
 *     ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x180214050 (--_GCResampleLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CResampleLayer::~CResampleLayer(CResampleLayer *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 16);
  CExternalLayer::~CExternalLayer(this);
}
