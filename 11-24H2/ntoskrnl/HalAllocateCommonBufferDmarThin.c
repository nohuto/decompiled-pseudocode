/*
 * XREFs of HalAllocateCommonBufferDmarThin @ 0x14040F2C0
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferDmarThinEx @ 0x14040F2F0 (HalAllocateCommonBufferDmarThinEx.c)
 */

__int64 __fastcall HalAllocateCommonBufferDmarThin(int a1, int a2, int a3)
{
  return HalAllocateCommonBufferDmarThinEx(a1, 0, a2, a3, 1, 0x80000000);
}
