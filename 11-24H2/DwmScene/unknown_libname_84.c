/*
 * XREFs of unknown_libname_84 @ 0x18001E108
 * Callers:
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 *     sub_1800CEDDC @ 0x1800CEDDC (sub_1800CEDDC.c)
 *     sub_1800CF404 @ 0x1800CF404 (sub_1800CF404.c)
 * Callees:
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 */

// Microsoft VisualC v14 64bit runtime
_OWORD *__fastcall unknown_libname_84(_OWORD *a1, __int64 a2)
{
  if ( a1 != (_OWORD *)a2 )
  {
    sub_180013228((__int64)a1);
    *a1 = *(_OWORD *)a2;
    a1[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  return a1;
}
