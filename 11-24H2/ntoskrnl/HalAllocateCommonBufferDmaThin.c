/*
 * XREFs of HalAllocateCommonBufferDmaThin @ 0x140396AD0
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferDmaThinEx @ 0x140396820 (HalAllocateCommonBufferDmaThinEx.c)
 */

__int64 __fastcall HalAllocateCommonBufferDmaThin(__int64 a1, int a2, PHYSICAL_ADDRESS *a3)
{
  return HalAllocateCommonBufferDmaThinEx(a1, 0LL, a2, a3, 1, 0x80000000);
}
