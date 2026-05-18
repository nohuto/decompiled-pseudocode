/*
 * XREFs of sub_180024494 @ 0x180024494
 * Callers:
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 */

__int64 __fastcall sub_180024494(__int64 a1)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_18001B1F8(104LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)a1 = v2;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 16));
  return a1;
}
