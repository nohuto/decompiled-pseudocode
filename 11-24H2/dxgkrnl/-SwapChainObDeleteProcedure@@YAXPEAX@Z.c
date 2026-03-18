/*
 * XREFs of ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1403F12A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x140079320 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 */

void __fastcall SwapChainObDeleteProcedure(DXGSWAPCHAIN **a1)
{
  DXGSWAPCHAIN *v2; // rcx
  __int64 v3; // r8

  v2 = *a1;
  if ( v2 )
  {
    DXGSWAPCHAIN::`scalar deleting destructor'(v2);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventIndirectSwapChainDestroy,
        v3,
        *a1);
    *a1 = 0LL;
  }
}
