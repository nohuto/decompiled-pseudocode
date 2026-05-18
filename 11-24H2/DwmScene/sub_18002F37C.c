/*
 * XREFs of sub_18002F37C @ 0x18002F37C
 * Callers:
 *     sub_18002E4C0 @ 0x18002E4C0 (sub_18002E4C0.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F37C(__int64 a1, __int64 a2)
{
  sub_180017054(a1, a2);
  sub_180017054(a1 + 32, a2 + 32);
  return a1;
}
