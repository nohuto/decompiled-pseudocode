/*
 * XREFs of sub_18004ABB0 @ 0x18004ABB0
 * Callers:
 *     sub_18004A9EC @ 0x18004A9EC (sub_18004A9EC.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_18004ABB0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_180016F54(a2, *a4);
  result = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  return result;
}
