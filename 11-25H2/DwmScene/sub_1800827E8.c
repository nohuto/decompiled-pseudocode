/*
 * XREFs of sub_1800827E8 @ 0x1800827E8
 * Callers:
 *     sub_1800830C0 @ 0x1800830C0 (sub_1800830C0.c)
 * Callees:
 *     sub_180082788 @ 0x180082788 (sub_180082788.c)
 */

__int64 __fastcall sub_1800827E8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_180082788(*(_QWORD *)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 12;
  return result;
}
