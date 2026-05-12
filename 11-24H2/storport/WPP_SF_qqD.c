/*
 * XREFs of WPP_SF_qqD @ 0x140055624
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 *     RaUnitPowerIrp @ 0x14000606C (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1400063C0 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x14000675C (RaidUnitSetSystemPowerIrp.c)
 *     RaDriverPowerIrp @ 0x140006C80 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x140006D90 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1400073D4 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1400075B0 (RaidAdapterPowerDownDevice.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x140008728 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1400099D8 (RaidAdapterSetSystemPowerIrp.c)
 *     RaDriverIoIrp @ 0x14000A140 (RaDriverIoIrp.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000F240 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaAdapterStartPowerIo @ 0x1400104F4 (RaAdapterStartPowerIo.c)
 *     RaDriverPnpIrp @ 0x140015600 (RaDriverPnpIrp.c)
 *     RaidAdapterPnpIrp @ 0x140015724 (RaidAdapterPnpIrp.c)
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaDriverDeviceControlIrp @ 0x14002B290 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x140033D70 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x140033EB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1400342E0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x140034720 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1400348E0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x140034AD0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaDriverFlushIrp @ 0x14006B260 (RaDriverFlushIrp.c)
 *     RaDriverShutdownIrp @ 0x14006B9D0 (RaDriverShutdownIrp.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x140077A10 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1400790A0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaUnitRemoveDeviceIrp @ 0x140095E34 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1400A1600 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitStartBypassIo @ 0x1400A23A0 (StorUnitStartBypassIo.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140181F80 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaDriverCreateIrp @ 0x1401B4FA0 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1401B50B0 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1401B9D10 (RaDriverSystemControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
