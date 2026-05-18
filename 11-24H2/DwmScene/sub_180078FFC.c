/*
 * XREFs of sub_180078FFC @ 0x180078FFC
 * Callers:
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_2 @ 0x1800DAA3A (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_2.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 */

__int64 __fastcall sub_180078FFC(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180078718((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
