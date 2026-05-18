/*
 * XREFs of sub_18004AB88 @ 0x18004AB88
 * Callers:
 *     sub_18004A8F8 @ 0x18004A8F8 (sub_18004A8F8.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_18004AB88(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  result = sub_180016F54(a2, *a4);
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}
