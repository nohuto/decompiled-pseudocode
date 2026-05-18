/*
 * XREFs of sub_180078E9C @ 0x180078E9C
 * Callers:
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_2 @ 0x1800DA8DA (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_2.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 */

__int64 __fastcall sub_180078E9C(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800785B8((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
