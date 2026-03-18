/*
 * XREFs of ?release@?$unique_ptr@$$BY0A@U?$aligned_storage_for@PEAVCVisual@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@PEAVCVisual@@@detail@@@std@@@std@@QEAAPEAU?$aligned_storage_for@PEAVCVisual@@@detail@@XZ @ 0x180224478
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_ptr<detail::aligned_storage_for<CVisual *> [0],std::default_delete<detail::aligned_storage_for<CVisual *> [0]>>::release(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  return result;
}
