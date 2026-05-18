/*
 * XREFs of sub_1800D9E88 @ 0x1800D9E88
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 */

__int64 __fastcall sub_1800D9E88(__int64 a1, __int64 a2)
{
  return sub_18000B2D4(
           *(_QWORD *)(a2 + 64) + 80LL,
           16LL,
           6LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
