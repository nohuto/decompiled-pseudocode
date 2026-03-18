/*
 * XREFs of ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x14005B480
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1402194F8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x14021A1EC (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 */

void __fastcall VirtualTouchpadProcessor::RemoveRimDevice(
        VirtualTouchpadProcessor *this,
        struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)a2 + 49);
  RIMLockExclusive(v2 + 104);
  RIMIDERemoveInjectionDevice((__int64)a2);
  RIMUnlockExclusive(v2 + 104);
  ObfDereferenceObject(a2);
}
