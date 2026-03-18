/*
 * XREFs of ?ReleaseComputeScribbleData@CSwapChainBuffer@@UEAAXXZ @ 0x180235190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainBuffer::ReleaseComputeScribbleData(CDrawListCache **this)
{
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(this + 14);
}
