/*
 * XREFs of HalAllocateCommonBufferV3 @ 0x14054BF50
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferExV3 @ 0x14054BEC0 (HalAllocateCommonBufferExV3.c)
 */

__int64 __fastcall HalAllocateCommonBufferV3(__int64 a1, int a2, __int64 a3)
{
  return HalAllocateCommonBufferExV3(a1, 0, a2, a3, 1, 0x80000000);
}
