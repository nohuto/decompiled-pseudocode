/*
 * XREFs of unknown_libname_83 @ 0x180017548
 * Callers:
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_1800C0350 @ 0x1800C0350 (sub_1800C0350.c)
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

// Microsoft VisualC v14 64bit runtime
_OWORD *__fastcall unknown_libname_83(_OWORD *a1, __int64 a2)
{
  if ( a1 != (_OWORD *)a2 )
  {
    sub_180011A5C((__int64)a1);
    *a1 = *(_OWORD *)a2;
    a1[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
  }
  return a1;
}
