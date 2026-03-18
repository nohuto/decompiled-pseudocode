/*
 * XREFs of _ACPIInternalError @ 0x14004C514
 * Callers:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x14001F8C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x14001FC20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x140025F9C (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 *     ACPIBuildDeviceDpc @ 0x14002A280 (ACPIBuildDeviceDpc.c)
 *     ACPIBuildProcessGenericList @ 0x14002AA90 (ACPIBuildProcessGenericList.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003EE60 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetWorkerForBuffer @ 0x140046220 (ACPIGetWorkerForBuffer.c)
 *     ACPIRootIrpSetPower @ 0x140047C90 (ACPIRootIrpSetPower.c)
 *     ACPITableLoad @ 0x14004A4E0 (ACPITableLoad.c)
 *     ACPITableLoadCallBack @ 0x140051AD0 (ACPITableLoadCallBack.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005CE50 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIGetConvertToClassCode @ 0x140060AC8 (ACPIGetConvertToClassCode.c)
 *     LinkNodepRunSrsWorker @ 0x140070260 (LinkNodepRunSrsWorker.c)
 *     AcpiArblibScoreRequirement @ 0x14009B2D0 (AcpiArblibScoreRequirement.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInitializeWorker @ 0x1400C7E20 (ACPIInitializeWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA3u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
