/*
 * XREFs of VslFreeSecureHibernateResources @ 0x14070D3F4
 * Callers:
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B98D8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 0x26u, 0, (__int64)v1);
  return KeAllocateKernelHiberSwapShadowStacks(0);
}
