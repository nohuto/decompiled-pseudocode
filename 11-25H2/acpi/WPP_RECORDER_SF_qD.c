/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x140023190
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x14001648C (OSNotifyCreateOperationRegion.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x140021FA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x140022970 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x140022BF0 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIReleaseGlobalLock @ 0x140022EA0 (ACPIReleaseGlobalLock.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1400311FC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x140049FB0 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004B7B0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004E238 (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiSetupNativeMethodContext @ 0x140054B44 (AcpiSetupNativeMethodContext.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x1400646D0 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x140064BA8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     ACPIRootDeviceDiscoverDeviceCompletion @ 0x140067670 (ACPIRootDeviceDiscoverDeviceCompletion.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x14009D2B8 (AcpiExternalTranslateBiosToNtResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400A1F20 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPILoadTableCheckSum @ 0x1400C8FFC (ACPILoadTableCheckSum.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qD(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 8LL, va1);
}
