/*
 * XREFs of VslFreeSecureHibernateResources @ 0x14070F864
 * Callers:
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405BC2A8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 38LL, 0, (__int64)v1);
  return KeAllocateKernelHiberSwapShadowStacks(0);
}
