/*
 * XREFs of ??1CSuperWetInkScribble@@UEAA@XZ @ 0x1802079E0
 * Callers:
 *     ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x1802079A0 (--_GCSuperWetInkScribble@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEF70 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSuperWetInkScribble::~CSuperWetInkScribble(CSuperWetInkScribble *this)
{
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((CDrawListCache **)this + 7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
