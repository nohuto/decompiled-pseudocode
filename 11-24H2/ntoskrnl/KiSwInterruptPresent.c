/*
 * XREFs of KiSwInterruptPresent @ 0x140BDEBD4
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140508278 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BDF44C (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140BDF4F0 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140BDF530 (KiFilterFiberContext.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

__int64 KiSwInterruptPresent()
{
  return *(_QWORD *)&HvlpVsmVtlCallVa == 0LL ? 0xC0000001 : 0;
}
