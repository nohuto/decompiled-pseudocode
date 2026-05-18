/*
 * XREFs of sub_180078750 @ 0x180078750
 * Callers:
 *     sub_180078C6C @ 0x180078C6C (sub_180078C6C.c)
 * Callees:
 *     sub_180078CAC @ 0x180078CAC (sub_180078CAC.c)
 */

__int64 __fastcall sub_180078750(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_180078CAC(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 4LL;
  return result;
}
