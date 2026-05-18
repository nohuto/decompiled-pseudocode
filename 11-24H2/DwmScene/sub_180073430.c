/*
 * XREFs of sub_180073430 @ 0x180073430
 * Callers:
 *     sub_180073304 @ 0x180073304 (sub_180073304.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_180073430(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  result = sub_180017054(a2, *a4);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return result;
}
