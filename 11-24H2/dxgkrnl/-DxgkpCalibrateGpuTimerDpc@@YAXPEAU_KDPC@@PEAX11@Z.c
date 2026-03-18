/*
 * XREFs of ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140013860
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x140013EBC (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DxgkpCalibrateGpuTimerDpc(
        struct _KDPC *Dpc,
        ADAPTER_RENDER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ADAPTER_RENDER::PerformClockCalibration(DeferredContext);
}
