/*
 * XREFs of sub_1800827C0 @ 0x1800827C0
 * Callers:
 *     sub_1800830C0 @ 0x1800830C0 (sub_1800830C0.c)
 *     sub_1800925E0 @ 0x1800925E0 (sub_1800925E0.c)
 * Callees:
 *     sub_180082778 @ 0x180082778 (sub_180082778.c)
 */

__int64 __fastcall sub_1800827C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_180082778(*(_QWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 8;
  return result;
}
