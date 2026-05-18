/*
 * XREFs of sub_1800732D0 @ 0x1800732D0
 * Callers:
 *     sub_1800731A4 @ 0x1800731A4 (sub_1800731A4.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_1800732D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  result = sub_180016F54(a2, *a4);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return result;
}
