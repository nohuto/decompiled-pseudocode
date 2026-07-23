/*
 * XREFs of VslpSecureKernelPeriodicTick @ 0x1403A9970
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslpSecureKernelPeriodicTick()
{
  __int64 v0; // rcx
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v2, 0, 0x68uLL);
  LOBYTE(v0) = 2;
  VslpEnterIumSecureMode(v0, 209LL, 0LL, v2);
  return (unsigned int)_InterlockedExchange(&VslpSecureKernelPeriodicTickWorkItemActive, 0);
}
