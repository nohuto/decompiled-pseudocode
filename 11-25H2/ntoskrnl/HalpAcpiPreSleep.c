/*
 * XREFs of HalpAcpiPreSleep @ 0x140B5D4E8
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 * Callees:
 *     HalpTimerSavePerformanceCounter @ 0x140290158 (HalpTimerSavePerformanceCounter.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041ED40 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x1404203D0 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockBeforeSleep @ 0x14042D448 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14043B080 (HalpAcpiPmRegisterAvailable.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404D971C (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpPreserveNvsArea @ 0x1404F53E4 (HalpPreserveNvsArea.c)
 *     KeSynchronizeTimeToQpc @ 0x1404F6100 (KeSynchronizeTimeToQpc.c)
 *     HalpTimerSwitchStallSource @ 0x1404F6580 (HalpTimerSwitchStallSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpSaveDmaControllerState @ 0x140B3C110 (HalpSaveDmaControllerState.c)
 */

__int64 __fastcall HalpAcpiPreSleep(int a1)
{
  __int16 v1; // bx
  unsigned __int64 SavedPerformanceCounter; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  __int16 v5; // bx
  __int16 v6; // bx
  __int16 v7; // [rsp+50h] [rbp+20h] BYREF
  __int16 v8; // [rsp+58h] [rbp+28h] BYREF

  v1 = a1;
  HalpSleepContext = a1;
  v7 = 0;
  v8 = 0;
  HalpTimerSwitchStallSource(1);
  HalpTimerSavePerformanceCounter();
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockBeforeSleep();
  SavedPerformanceCounter = HalpTimerGetSavedPerformanceCounter();
  KeSynchronizeTimeToQpc((LARGE_INTEGER)SavedPerformanceCounter);
  HalpHiberInProgress = 1;
  if ( (v1 & 0x4000) != 0 )
    HalpSaveDmaControllerState();
  if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
  {
    HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0598 >> 1, (__int64)&v8, 2u, 0LL);
    v5 = v8;
    v7 = v8;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0598 >> 1, (__int64)&v8, 2u, 0LL);
      v5 = v8 | v7;
      v7 |= v8;
    }
    if ( (dword_140FC05B0 & 0x40) == 0 )
    {
      if ( HIBYTE(HalpWakeupState) )
        v6 = v5 | 0x400;
      else
        v6 = v5 & 0xFBFF;
      v7 = v6;
    }
    HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0598 >> 1, (unsigned __int8 *)&v7, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0598 >> 1, (unsigned __int8 *)&v7, 2u, 0LL);
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v8, 2u, 0LL);
    v7 = v8;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v8, 2u, 0LL);
      v7 |= v8;
    }
    HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v7, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v7, 2u, 0LL);
  }
  if ( (_BYTE)HalpWakeupState )
    guard_dispatch_icall_no_overrides(v3);
  else
    guard_dispatch_icall_no_overrides(0LL);
  result = HalpPreserveNvsArea();
  SystemPowerPhase = 2;
  return result;
}
