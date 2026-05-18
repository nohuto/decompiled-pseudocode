/*
 * XREFs of sub_180082920 @ 0x180082920
 * Callers:
 *     sub_180083220 @ 0x180083220 (sub_180083220.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 * Callees:
 *     sub_1800828D8 @ 0x1800828D8 (sub_1800828D8.c)
 */

__int64 __fastcall sub_180082920(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_1800828D8(*(_QWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 8;
  return result;
}
