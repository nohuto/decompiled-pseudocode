/*
 * XREFs of HalpAcpiPreSleep @ 0x140B6DE6C
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 * Callees:
 *     HalpTimerSavePerformanceCounter @ 0x1403BBA50 (HalpTimerSavePerformanceCounter.c)
 *     HalpAcpiPmRegisterWrite @ 0x14040FFF0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140411C50 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockBeforeSleep @ 0x1404193C8 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14042AE00 (HalpAcpiPmRegisterAvailable.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404D1BEC (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpPreserveNvsArea @ 0x1404F50A4 (HalpPreserveNvsArea.c)
 *     KeSynchronizeTimeToQpc @ 0x1404F6210 (KeSynchronizeTimeToQpc.c)
 *     HalpTimerSwitchStallSource @ 0x1404F6660 (HalpTimerSwitchStallSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpSaveDmaControllerState @ 0x140B4E150 (HalpSaveDmaControllerState.c)
 */

__int64 __fastcall HalpAcpiPreSleep(int a1)
{
  __int16 v1; // bx
  unsigned __int64 SavedPerformanceCounter; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int16 v6; // bx
  __int16 v7; // bx
  __int16 v8; // [rsp+50h] [rbp+20h] BYREF
  __int16 v9; // [rsp+58h] [rbp+28h] BYREF

  v1 = a1;
  HalpSleepContext = a1;
  v8 = 0;
  v9 = 0;
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
    HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0FD8 >> 1, (__int64)&v9, 2u, 0LL);
    v6 = v9;
    v8 = v9;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0FD8 >> 1, (__int64)&v9, 2u, 0LL);
      v6 = v9 | v8;
      v8 |= v9;
    }
    if ( (dword_140FC0FF0 & 0x40) == 0 )
    {
      if ( HIBYTE(HalpWakeupState) )
        v7 = v6 | 0x400;
      else
        v7 = v6 & 0xFBFF;
      v8 = v7;
    }
    HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0FD8 >> 1, (unsigned __int8 *)&v8, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0FD8 >> 1, (unsigned __int8 *)&v8, 2u, 0LL);
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v9, 2u, 0LL);
    v8 = v9;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v9, 2u, 0LL);
      v8 |= v9;
    }
    HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v8, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v8, 2u, 0LL);
  }
  if ( (_BYTE)HalpWakeupState )
    guard_dispatch_icall_no_overrides(v4, v3);
  else
    guard_dispatch_icall_no_overrides(0LL, v3);
  result = HalpPreserveNvsArea();
  SystemPowerPhase = 2;
  return result;
}
