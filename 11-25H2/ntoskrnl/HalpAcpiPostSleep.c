/*
 * XREFs of HalpAcpiPostSleep @ 0x140B5AABC
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     HalpTimerRestorePerformanceCounter @ 0x14028FE40 (HalpTimerRestorePerformanceCounter.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1404203D0 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockAfterSleep @ 0x14042D3D4 (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14043B080 (HalpAcpiPmRegisterAvailable.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD4C8 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerInitializeVpptClockTimer @ 0x1404F4520 (HalpTimerInitializeVpptClockTimer.c)
 *     HalpRestoreNvsArea @ 0x1404F545C (HalpRestoreNvsArea.c)
 *     HalpTimerSwitchStallSource @ 0x1404F6580 (HalpTimerSwitchStallSource.c)
 *     HalpHvNotifyDebugDeviceAvailable @ 0x140548E80 (HalpHvNotifyDebugDeviceAvailable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpResetSBF @ 0x140B3B158 (HalpResetSBF.c)
 *     HalpRestoreDmaControllerState @ 0x140B3C0AC (HalpRestoreDmaControllerState.c)
 *     HalpInterruptReinitialize @ 0x140B5AD18 (HalpInterruptReinitialize.c)
 *     HalpPiix4Detect @ 0x140B5AF1C (HalpPiix4Detect.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140B5B574 (HalpCheckLowMemoryPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B5B6B0 (HalpCheckFixedWakeSources.c)
 */

char __fastcall HalpAcpiPostSleep(unsigned int a1)
{
  __int16 v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int8 v10[4]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v11[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v12; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+3Ch] [rbp-44h] BYREF
  int v14; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  int *v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]

  v13 = 0;
  v14 = 0;
  v12 = 0;
  *(_WORD *)v10 = 0;
  v11[0] = 0;
  if ( (HalpPlatformFlags & 1) != 0 )
  {
    HalpCheckFixedWakeSources();
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0598 >> 1, (__int64)v11, 2u, 0LL);
      v2 = v11[0];
      *(_WORD *)v10 = v11[0];
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0598 >> 1, (__int64)v11, 2u, 0LL);
        v2 = *(_WORD *)v10 | v11[0];
      }
      *(_WORD *)v10 = v2 & 0xFBFF;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0598 >> 1, v10, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0598 >> 1, v10, 2u, 0LL);
    }
  }
  HalpCheckLowMemoryPostSleep(&v13, &v14, &v12);
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockAfterSleep();
  HalpTimerRestorePerformanceCounter(v4, v3);
  HalpTimerSwitchStallSource(0);
  HIBYTE(HalpWakeupState) = 0;
  *(_DWORD *)HalpWakeVector = 0;
  HalpInterruptReinitialize(a1);
  if ( !HalpResumeFromHibernate )
  {
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1);
    if ( HalpHvCpuManager )
      HalpHvNotifyDebugDeviceAvailable();
  }
  if ( v12
    && HalpDiagnosticEventsRegistered
    && EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION) )
  {
    UserData.Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&UserData.Size = 4LL;
    v16 = &v13;
    v17 = 4LL;
    v18 = &v14;
    v19 = 4LL;
    EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION, 0LL, 3u, &UserData);
  }
  if ( (HalpSleepContext & 0x4000) != 0 )
  {
    if ( KdComPortInUse )
      KdInitialize(4LL, 0LL, 0LL, v5);
    HalpRestoreDmaControllerState();
  }
  HalpTimerInitializeVpptClockTimer();
  HalpTimerEnableHypervisorTimer(v7, v6);
  HalpPiix4Detect(0LL);
  if ( !HalpResumeFromHibernate )
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1);
  v8 = PmAcpiDispatchTable;
  LOBYTE(v8) = 1;
  guard_dispatch_icall_no_overrides(v8);
  HalpRestoreNvsArea();
  HalpResetSBF();
  return 1;
}
