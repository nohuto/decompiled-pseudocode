/*
 * XREFs of VslTerminateSecureServices @ 0x14058B95C
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 *     HalpPowerWriteResetCommand @ 0x1405423D4 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x14054263C (HalpShutdown.c)
 *     HvlEnterSleepState @ 0x140583E90 (HvlEnterSleepState.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslTerminateSecureServices()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x115u, 0, (__int64)v1);
}
