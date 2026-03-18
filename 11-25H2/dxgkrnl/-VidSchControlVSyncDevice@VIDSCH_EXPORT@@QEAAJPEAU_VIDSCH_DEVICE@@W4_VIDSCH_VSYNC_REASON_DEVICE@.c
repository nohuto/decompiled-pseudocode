/*
 * XREFs of ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x140053C4C
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 *     DxgkShutdownBootGraphics @ 0x1402BC5C0 (DxgkShutdownBootGraphics.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14032973C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1403FA950 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchControlVSyncDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5)
{
  unsigned int v5; // r11d

  v5 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)(a1 + 8) + 568LL))(a2, v5, a3, a5);
}
