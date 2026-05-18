/*
 * XREFs of sub_18004AB5C @ 0x18004AB5C
 * Callers:
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_18004AB5C(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_180016F54(a2, *a4);
  result = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return result;
}
