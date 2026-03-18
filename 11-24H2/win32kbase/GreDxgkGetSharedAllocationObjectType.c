/*
 * XREFs of GreDxgkGetSharedAllocationObjectType @ 0x14014E2BC
 * Callers:
 *     ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1401969FC (-EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x140196EB0 (-SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z.c)
 *     ?Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z @ 0x14022558C (-Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkGetSharedAllocationObjectType(__int64 a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (**)(void))(DxgkWin32kInterface + 480))();
}
