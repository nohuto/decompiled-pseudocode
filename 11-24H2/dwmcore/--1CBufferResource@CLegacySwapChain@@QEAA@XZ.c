/*
 * XREFs of ??1CBufferResource@CLegacySwapChain@@QEAA@XZ @ 0x1801B6D58
 * Callers:
 *     ??$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwapChain@@0@Z @ 0x1801B6AFC (--$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwap.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A51D8 (--1-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CLegacySwapChain::CBufferResource::~CBufferResource(CGlobalDrawingContext **this)
{
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>(this + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this);
}
