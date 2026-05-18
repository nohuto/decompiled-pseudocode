/*
 * XREFs of sub_180084DE0 @ 0x180084DE0
 * Callers:
 *     sub_180085128 @ 0x180085128 (sub_180085128.c)
 * Callees:
 *     sub_180085168 @ 0x180085168 (sub_180085168.c)
 */

__int64 __fastcall sub_180084DE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_180085168(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 16LL;
  return result;
}
