/*
 * XREFs of sub_18008A278 @ 0x18008A278
 * Callers:
 *     sub_18008B0AC @ 0x18008B0AC (sub_18008B0AC.c)
 * Callees:
 *     sub_18008ABE0 @ 0x18008ABE0 (sub_18008ABE0.c)
 */

__int64 __fastcall sub_18008A278(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax

  sub_18008ABE0(a1, *(_QWORD *)(a1 + 8), a2, a3);
  result = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 8) = result + 16;
  return result;
}
