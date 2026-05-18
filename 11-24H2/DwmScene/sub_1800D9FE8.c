/*
 * XREFs of sub_1800D9FE8 @ 0x1800D9FE8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 */

__int64 __fastcall sub_1800D9FE8(__int64 a1, __int64 a2)
{
  return sub_18000B6A4(
           *(_QWORD *)(a2 + 64) + 80LL,
           16LL,
           6LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
