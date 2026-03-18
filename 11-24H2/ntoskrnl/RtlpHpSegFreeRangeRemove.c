/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x1402BEFC0
 * Callers:
 *     RtlpHpSegLargeRangeAllocate @ 0x1402C2C60 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  __int64 result; // rax

  RtlRbRemoveNode((unsigned __int64 *)(a1 + 96), (unsigned __int64 *)a2);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(__int16 *)(a1 + 22);
  _InterlockedAdd64((volatile signed __int64 *)(result + a1 + 16), -v5);
  return result;
}
