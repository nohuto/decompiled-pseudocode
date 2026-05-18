/*
 * XREFs of sub_180032718 @ 0x180032718
 * Callers:
 *     sub_180031794 @ 0x180031794 (sub_180031794.c)
 *     sub_18005B778 @ 0x18005B778 (sub_18005B778.c)
 *     sub_1800813F8 @ 0x1800813F8 (sub_1800813F8.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 */

_QWORD *__fastcall sub_180032718(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *i; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_1800287FC(a1 + 112, (__int64)v8);
  for ( i = *(_QWORD **)(a1 + 88); i != *(_QWORD **)(a1 + 96); i += 2 )
  {
    if ( *(_DWORD *)(*i + 244LL) == a3 )
    {
      unknown_libname_81(a2, i);
      goto LABEL_7;
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_7:
  sub_180028584((__int64)v8);
  return a2;
}
