/*
 * XREFs of HalpAcpiPreSleep @ 0x140B6C5C8
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 * Callees:
 *     HalpTimerSavePerformanceCounter @ 0x1403D6404 (HalpTimerSavePerformanceCounter.c)
 *     HalpAcpiPmRegisterWrite @ 0x14041C1F0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x14041D360 (HalpAcpiPmRegisterRead.c)
 *     HalpSetClockBeforeSleep @ 0x140425518 (HalpSetClockBeforeSleep.c)
 *     HalpAcpiPmRegisterAvailable @ 0x140438240 (HalpAcpiPmRegisterAvailable.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404D879C (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpPreserveNvsArea @ 0x1404F77C4 (HalpPreserveNvsArea.c)
 *     KeSynchronizeTimeToQpc @ 0x1404F8930 (KeSynchronizeTimeToQpc.c)
 *     HalpTimerSwitchStallSource @ 0x1404F8D80 (HalpTimerSwitchStallSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpSaveDmaControllerState @ 0x140B4C110 (HalpSaveDmaControllerState.c)
 */

__int64 __fastcall HalpAcpiPreSleep(int a1)
{
  __int16 v1; // bx
  unsigned __int64 SavedPerformanceCounter; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int16 v8; // bx
  __int16 v9; // bx
  __int16 v10; // [rsp+50h] [rbp+20h] BYREF
  __int16 v11; // [rsp+58h] [rbp+28h] BYREF

  v1 = a1;
  HalpSleepContext = a1;
  v10 = 0;
  v11 = 0;
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
    HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140FC0D38 >> 1, (__int64)&v11, 2u, 0LL);
    v8 = v11;
    v10 = v11;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140FC0D38 >> 1, (__int64)&v11, 2u, 0LL);
      v8 = v11 | v10;
      v10 |= v11;
    }
    if ( (dword_140FC0D50 & 0x40) == 0 )
    {
      if ( HIBYTE(HalpWakeupState) )
        v9 = v8 | 0x400;
      else
        v9 = v8 & 0xFBFF;
      v10 = v9;
    }
    HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140FC0D38 >> 1, (unsigned __int8 *)&v10, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140FC0D38 >> 1, (unsigned __int8 *)&v10, 2u, 0LL);
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v11, 2u, 0LL);
    v10 = v11;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v11, 2u, 0LL);
      v10 |= v11;
    }
    HalpAcpiPmRegisterWrite(0, 0, (unsigned __int8 *)&v10, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, 0, (unsigned __int8 *)&v10, 2u, 0LL);
  }
  if ( (_BYTE)HalpWakeupState )
    guard_dispatch_icall_no_overrides(v4, v3, v5, v6);
  else
    guard_dispatch_icall_no_overrides(0LL, v3, v5, v6);
  result = HalpPreserveNvsArea();
  SystemPowerPhase = 2;
  return result;
}
