/*
 * XREFs of sub_1800325B8 @ 0x1800325B8
 * Callers:
 *     sub_180031634 @ 0x180031634 (sub_180031634.c)
 *     sub_18005B618 @ 0x18005B618 (sub_18005B618.c)
 *     sub_180081298 @ 0x180081298 (sub_180081298.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 */

_QWORD *__fastcall sub_1800325B8(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *i; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_18002869C(a1 + 112, (__int64)v8);
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
  sub_180028424((__int64)v8);
  return a2;
}
