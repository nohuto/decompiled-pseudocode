/*
 * XREFs of VslpSecureKernelPeriodicTick @ 0x140266530
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslpSecureKernelPeriodicTick()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 209LL, 0, (__int64)v1);
  return (unsigned int)_InterlockedExchange(&VslpSecureKernelPeriodicTickWorkItemActive, 0);
}
