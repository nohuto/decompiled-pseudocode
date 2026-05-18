/*
 * XREFs of sub_1800785F0 @ 0x1800785F0
 * Callers:
 *     sub_180078B0C @ 0x180078B0C (sub_180078B0C.c)
 * Callees:
 *     sub_180078B4C @ 0x180078B4C (sub_180078B4C.c)
 */

__int64 __fastcall sub_1800785F0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_180078B4C(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 4LL;
  return result;
}
