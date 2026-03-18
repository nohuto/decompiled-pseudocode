/*
 * XREFs of ??1CSwapChainBuffer@@UEAA@XZ @ 0x1801FB9F0
 * Callers:
 *     ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x18006935C (--1CDDisplaySwapChainBuffer@@MEAA@XZ.c)
 *     ??_ECLegacySwapChainBuffer@@MEAAPEAXI@Z @ 0x1802C9B60 (--_ECLegacySwapChainBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180048A58 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CSwapChainBuffer::~CSwapChainBuffer(FastRegion::CRegion **this)
{
  FastRegion::CRegion::FreeMemory(this + 15);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(this + 14);
  FastRegion::CRegion::FreeMemory(this + 4);
}
