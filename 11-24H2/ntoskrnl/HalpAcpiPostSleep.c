/*
 * XREFs of HalpAcpiPostSleep @ 0x140B6A5BC
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     HalpTimerRestorePerformanceCounter @ 0x1403D68C8 (HalpTimerRestorePerformanceCounter.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14041D360 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockAfterSleep @ 0x1404254A4 (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x140438240 (HalpAcpiPmRegisterAvailable.c)
 *     HalpTimerEnableHypervisorTimer @ 0x1404CD038 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerInitializeVpptClockTimer @ 0x1404F7090 (HalpTimerInitializeVpptClockTimer.c)
 *     HalpRestoreNvsArea @ 0x1404F783C (HalpRestoreNvsArea.c)
 *     HalpTimerSwitchStallSource @ 0x1404F8D80 (HalpTimerSwitchStallSource.c)
 *     HalpHvNotifyDebugDeviceAvailable @ 0x14054B770 (HalpHvNotifyDebugDeviceAvailable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpResetSBF @ 0x140B4B158 (HalpResetSBF.c)
 *     HalpRestoreDmaControllerState @ 0x140B4C0AC (HalpRestoreDmaControllerState.c)
 *     HalpInterruptReinitialize @ 0x140B6A818 (HalpInterruptReinitialize.c)
 *     HalpPiix4Detect @ 0x140B6AA1C (HalpPiix4Detect.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140B6B074 (HalpCheckLowMemoryPostSleep.c)
 *     HalpCheckFixedWakeSources @ 0x140B6B1B0 (HalpCheckFixedWakeSources.c)
 */

char __fastcall HalpAcpiPostSleep(unsigned int a1)
{
  __int16 v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int8 v20[4]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v21[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v22; // [rsp+38h] [rbp-48h] BYREF
  int v23; // [rsp+3Ch] [rbp-44h] BYREF
  int v24; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  int *v28; // [rsp+68h] [rbp-18h]
  __int64 v29; // [rsp+70h] [rbp-10h]

  v23 = 0;
  v24 = 0;
  v22 = 0;
  *(_WORD *)v20 = 0;
  v21[0] = 0;
  if ( (HalpPlatformFlags & 1) != 0 )
  {
    HalpCheckFixedWakeSources();
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0D38 >> 1, (__int64)v21, 2u, 0LL);
      v2 = v21[0];
      *(_WORD *)v20 = v21[0];
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0D38 >> 1, (__int64)v21, 2u, 0LL);
        v2 = *(_WORD *)v20 | v21[0];
      }
      *(_WORD *)v20 = v2 & 0xFBFF;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0D38 >> 1, v20, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0D38 >> 1, v20, 2u, 0LL);
    }
  }
  HalpCheckLowMemoryPostSleep(&v23, &v24, &v22);
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockAfterSleep();
  HalpTimerRestorePerformanceCounter(v4, v3, v5, v6);
  HalpTimerSwitchStallSource(0);
  HIBYTE(HalpWakeupState) = 0;
  *(_DWORD *)HalpWakeVector = 0;
  HalpInterruptReinitialize(a1);
  if ( !HalpResumeFromHibernate )
  {
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1, v7, v9, v10);
    if ( HalpHvCpuManager )
      HalpHvNotifyDebugDeviceAvailable(v8, v7, v9, v10);
  }
  if ( v22
    && HalpDiagnosticEventsRegistered
    && EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION) )
  {
    UserData.Ptr = (ULONGLONG)&v22;
    *(_QWORD *)&UserData.Size = 4LL;
    v26 = &v23;
    v27 = 4LL;
    v28 = &v24;
    v29 = 4LL;
    EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION, 0LL, 3u, &UserData);
  }
  if ( (HalpSleepContext & 0x4000) != 0 )
  {
    if ( KdComPortInUse )
      KdInitialize(4LL, 0LL, 0LL, v10);
    HalpRestoreDmaControllerState(v8, v7, v9, v10);
  }
  HalpTimerInitializeVpptClockTimer();
  HalpTimerEnableHypervisorTimer(v12, v11, v13, v14);
  HalpPiix4Detect(0LL);
  if ( !HalpResumeFromHibernate )
    guard_dispatch_icall_no_overrides(((a1 >> 8) & 0xF) + 1, v15, v16, v17);
  v18 = PmAcpiDispatchTable;
  LOBYTE(v18) = 1;
  guard_dispatch_icall_no_overrides(v18, v15, v16, v17);
  HalpRestoreNvsArea();
  HalpResetSBF();
  return 1;
}
