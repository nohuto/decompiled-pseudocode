/*
 * XREFs of KiSwInterruptPresent @ 0x140BCDBD4
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140505AF8 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BCE44C (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140BCE4F0 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140BCE530 (KiFilterFiberContext.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

__int64 KiSwInterruptPresent()
{
  return *(_QWORD *)&HvlpVsmVtlCallVa == 0LL ? 0xC0000001 : 0;
}
