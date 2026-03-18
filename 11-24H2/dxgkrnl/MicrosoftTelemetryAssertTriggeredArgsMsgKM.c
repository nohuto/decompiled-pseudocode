/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140063ED4
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402C0D9C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     DpiFdoSetAdapterPowerState @ 0x1404032B8 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14005C988 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1, "dxgkrnl.sys", a2, a3, a4);
}
