/*
 * XREFs of XilCommonBuffer_AcquireBufferFromPhysicalAddress @ 0x14003F740
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x140082980 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003EF5C (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 */

_QWORD *__fastcall XilCommonBuffer_AcquireBufferFromPhysicalAddress(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  return CommonBuffer_AcquireCommonBufferFromPhysicalAddress(a1, a2, a3, a4, a5);
}
