/*
 * XREFs of ??1CStereoRenderTargetBitmap@@UEAA@XZ @ 0x1802E3A9C
 * Callers:
 *     ??_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1802E3AD0 (--_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CStereoRenderTargetBitmap::~CStereoRenderTargetBitmap(CStereoRenderTargetBitmap *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 18);
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
}
