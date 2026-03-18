/*
 * XREFs of ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1801FB17C
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010B4B0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x18010BDF8 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801FB14C (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedVisualImage::CCachedTarget::~CCachedTarget(CCachedVisualImage::CCachedTarget *this)
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 80LL))(
    *((_QWORD *)this + 1),
    (*(_QWORD *)this + 88LL) & -(__int64)(*(_QWORD *)this != 0LL));
  (*(void (__fastcall **)(_QWORD, CCachedVisualImage::CCachedTarget *))(**(_QWORD **)this + 248LL))(
    *(_QWORD *)this,
    this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}
