/*
 * XREFs of sub_180041F24 @ 0x180041F24
 * Callers:
 *     sub_180041FE4 @ 0x180041FE4 (sub_180041FE4.c)
 * Callees:
 *     sub_180041F48 @ 0x180041F48 (sub_180041F48.c)
 */

__int64 __fastcall sub_180041F24(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_180041F48(a1, *(_QWORD *)(a1 + 8), a2);
  *(_QWORD *)(v3 + 8) += 4LL;
  return result;
}
