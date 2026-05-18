/*
 * XREFs of sub_1800D9D33 @ 0x1800D9D33
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 */

__int64 __fastcall sub_1800D9D33(__int64 a1, __int64 a2)
{
  return sub_18000B6A4(
           *(_QWORD *)(a2 + 56) + 128LL,
           16LL,
           4LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
