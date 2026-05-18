/*
 * XREFs of unknown_libname_84 @ 0x18001DFA8
 * Callers:
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 *     sub_1800CEC7C @ 0x1800CEC7C (sub_1800CEC7C.c)
 *     sub_1800CF2A4 @ 0x1800CF2A4 (sub_1800CF2A4.c)
 * Callees:
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 */

// Microsoft VisualC v14 64bit runtime
_OWORD *__fastcall unknown_libname_84(_OWORD *a1, __int64 a2)
{
  if ( a1 != (_OWORD *)a2 )
  {
    sub_180013128((__int64)a1);
    *a1 = *(_OWORD *)a2;
    a1[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  return a1;
}
