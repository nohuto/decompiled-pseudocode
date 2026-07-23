/*
 * XREFs of HalpAcpiPostSleep @ 0x140B6BE80
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1403BBF18 (HalpTimerRestorePerformanceCounter.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     HalpAcpiPmRegisterWrite @ 0x14040FFF0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140411C50 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockAfterSleep @ 0x140419354 (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14042AE00 (HalpAcpiPmRegisterAvailable.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404C6408 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerInitializeVpptClockTimer @ 0x1404F4970 (HalpTimerInitializeVpptClockTimer.c)
 *     HalpRestoreNvsArea @ 0x1404F511C (HalpRestoreNvsArea.c)
 *     HalpTimerSwitchStallSource @ 0x1404F6660 (HalpTimerSwitchStallSource.c)
 *     HalpHvNotifyDebugDeviceAvailable @ 0x140549030 (HalpHvNotifyDebugDeviceAvailable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpResetSBF @ 0x140B4D058 (HalpResetSBF.c)
 *     HalpRestoreDmaControllerState @ 0x140B4E0F0 (HalpRestoreDmaControllerState.c)
 *     HalpInterruptReinitialize @ 0x140B6C0DC (HalpInterruptReinitialize.c)
 *     HalpPiix4Detect @ 0x140B6C308 (HalpPiix4Detect.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140B6C960 (HalpCheckLowMemoryPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B6CA9C (HalpCheckFixedWakeSources.c)
 */

char __fastcall HalpAcpiPostSleep(unsigned int a1)
{
  __int16 v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v13[4]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v14[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v15; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+3Ch] [rbp-44h] BYREF
  int v17; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  int *v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v16 = 0;
  v17 = 0;
  v15 = 0;
  *(_WORD *)v13 = 0;
  v14[0] = 0;
  if ( (HalpPlatformFlags & 1) != 0 )
  {
    HalpCheckFixedWakeSources();
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0FD8 >> 1, (__int64)v14, 2u, 0LL);
      v2 = v14[0];
      *(_WORD *)v13 = v14[0];
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0FD8 >> 1, (__int64)v14, 2u, 0LL);
        v2 = *(_WORD *)v13 | v14[0];
      }
      *(_WORD *)v13 = v2 & 0xFBFF;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0FD8 >> 1, v13, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0FD8 >> 1, v13, 2u, 0LL);
    }
  }
  HalpCheckLowMemoryPostSleep(&v16, &v17, &v15);
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockAfterSleep();
  HalpTimerRestorePerformanceCounter(v4, v3);
  HalpTimerSwitchStallSource(0);
  HIBYTE(HalpWakeupState) = 0;
  *(_DWORD *)HalpWakeVector = 0;
  HalpInterruptReinitialize(a1);
  if ( !HalpResumeFromHibernate )
  {
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1, v5);
    if ( HalpHvCpuManager )
      HalpHvNotifyDebugDeviceAvailable(v6, v5);
  }
  if ( v15
    && HalpDiagnosticEventsRegistered
    && EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION) )
  {
    UserData.Ptr = (ULONGLONG)&v15;
    *(_QWORD *)&UserData.Size = 4LL;
    v19 = &v16;
    v20 = 4LL;
    v21 = &v17;
    v22 = 4LL;
    EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION, 0LL, 3u, &UserData);
  }
  if ( (HalpSleepContext & 0x4000) != 0 )
  {
    if ( KdComPortInUse )
      KdInitialize(4LL, 0LL, 0LL, v7);
    HalpRestoreDmaControllerState(v6, v5);
  }
  HalpTimerInitializeVpptClockTimer();
  HalpTimerEnableHypervisorTimer(v9, v8);
  HalpPiix4Detect(0LL);
  if ( !HalpResumeFromHibernate )
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1, v10);
  v11 = PmAcpiDispatchTable;
  LOBYTE(v11) = 1;
  guard_dispatch_icall_no_overrides(v11, v10);
  HalpRestoreNvsArea();
  HalpResetSBF();
  return 1;
}
