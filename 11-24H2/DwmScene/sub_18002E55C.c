/*
 * XREFs of sub_18002E55C @ 0x18002E55C
 * Callers:
 *     sub_18002DEE8 @ 0x18002DEE8 (sub_18002DEE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002E55C(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  *(_QWORD *)a2 = **a4;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  return sub_18002FA2C();
}
