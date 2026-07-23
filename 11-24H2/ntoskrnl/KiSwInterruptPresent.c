/*
 * XREFs of KiSwInterruptPresent @ 0x140BE0BD4
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140505B38 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BE144C (KeCheckedKernelInitialize.c)
 *     KeFreeInitializationCode @ 0x140BE14F0 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140BE1530 (KiFilterFiberContext.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

__int64 KiSwInterruptPresent()
{
  return *(_QWORD *)&HvlpVsmVtlCallVa == 0LL ? 0xC0000001 : 0;
}
