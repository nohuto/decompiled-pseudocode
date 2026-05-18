/*
 * XREFs of sub_1800117C0 @ 0x1800117C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 */

__int64 *__fastcall sub_1800117C0(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 1648);
  sub_1800114D0(a2);
  return a2;
}
