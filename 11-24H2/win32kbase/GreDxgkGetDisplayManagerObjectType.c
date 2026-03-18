/*
 * XREFs of GreDxgkGetDisplayManagerObjectType @ 0x1401CD2F8
 * Callers:
 *     ?SetHandleProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x140158820 (-SetHandleProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 *     ?EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402357F8 (-EmitCreate@CDDisplayRenderTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDxgkGetDisplayManagerObjectType(__int64 a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
  return (*(__int64 (**)(void))(DxgkWin32kInterface + 496))();
}
