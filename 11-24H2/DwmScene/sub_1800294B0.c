/*
 * XREFs of sub_1800294B0 @ 0x1800294B0
 * Callers:
 *     sub_180028D48 @ 0x180028D48 (sub_180028D48.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_1800294B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_180017054(a2, a3);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a3 + 48);
  return result;
}
