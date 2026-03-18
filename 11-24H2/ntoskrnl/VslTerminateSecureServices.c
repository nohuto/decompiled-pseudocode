/*
 * XREFs of VslTerminateSecureServices @ 0x14058E92C
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x140544B14 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140544D7C (HalpShutdown.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 *     HvlEnterSleepState @ 0x140586B10 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     Feature_3133466939__private_IsEnabledDeviceUsageNoInline @ 0x14058CAC0 (Feature_3133466939__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslTerminateSecureServices()
{
  __int64 result; // rax
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  result = Feature_3133466939__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    return VslpEnterIumSecureMode(2u, 277LL, 0, (__int64)v1);
  return result;
}
