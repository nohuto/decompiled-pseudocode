/*
 * XREFs of sub_180024334 @ 0x180024334
 * Callers:
 *     sub_180023F84 @ 0x180023F84 (sub_180023F84.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 */

__int64 __fastcall sub_180024334(__int64 a1)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_18001B098(104LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *(_QWORD *)a1 = v2;
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 16));
  return a1;
}
