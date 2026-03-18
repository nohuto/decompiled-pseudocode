/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x140019E0C
 * Callers:
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1400020C0 (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x140018EEC (DeviceSlot_D0EntryCleanupState.c)
 *     Command_D0Entry @ 0x140019D14 (Command_D0Entry.c)
 *     DeviceSlot_D0Entry @ 0x140019D70 (DeviceSlot_D0Entry.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x14002F4DC (ControllerPreInterruptsDisableAcpiCallout.c)
 *     Controller_EvtDeviceFileClose @ 0x140031250 (Controller_EvtDeviceFileClose.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140037740 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x14003F760 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1400433E0 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Device_QueryCapabilities @ 0x1400439E8 (Device_QueryCapabilities.c)
 *     Interrupter_CreateInterrupter @ 0x14007BA04 (Interrupter_CreateInterrupter.c)
 *     Register_PrepareHardware @ 0x14007DABC (Register_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
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
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 8LL, va1, 4LL, 0LL, v13, v14);
}
