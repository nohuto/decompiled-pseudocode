/*
 * XREFs of _ACPIInternalErrorEx @ 0x14001C1A0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIDispatchIrp @ 0x14001ADE0 (ACPIDispatchIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x14001DF70 (ACPIDispatchForwardIrp.c)
 *     ACPIIoctlEvaluateUsb4Osc @ 0x140062290 (ACPIIoctlEvaluateUsb4Osc.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalErrorEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA3u, 2uLL, (unsigned int)BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
