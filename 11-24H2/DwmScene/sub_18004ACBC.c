/*
 * XREFs of sub_18004ACBC @ 0x18004ACBC
 * Callers:
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_18004ACBC(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_180017054(a2, *a4);
  result = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return result;
}
