/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x14002A120
 * Callers:
 *     OSNotifyCreateDevice @ 0x1400165E0 (OSNotifyCreateDevice.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x140021FA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x140027DFC (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDeviceCompletePhase3Off @ 0x140029F00 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x14002A040 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x140049FB0 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     OSNotifyCreateThermalZone @ 0x140052368 (OSNotifyCreateThermalZone.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x14005CBD0 (ACPIDeviceCompletePhase3Reset.c)
 *     OSNotifyCreatePowerResource @ 0x140063C74 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x140063D1C (OSNotifyCreateProcessor.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1400AFEF4 (ACPIInternalSendSynchronousIrp.c)
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qL(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
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
