/*
 * XREFs of ??1CSwapChainBuffer@@UEAA@XZ @ 0x180208060
 * Callers:
 *     ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x1801C5E4C (--1CDDisplaySwapChainBuffer@@MEAA@XZ.c)
 *     ??_ECLegacySwapChainBuffer@@MEAAPEAXI@Z @ 0x1802D2DE0 (--_ECLegacySwapChainBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEF70 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSwapChainBuffer::~CSwapChainBuffer(FastRegion::CRegion **this)
{
  FastRegion::CRegion::FreeMemory(this + 15);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(this + 14);
  FastRegion::CRegion::FreeMemory(this + 4);
}
