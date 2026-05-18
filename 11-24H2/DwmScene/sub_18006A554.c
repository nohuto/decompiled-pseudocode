/*
 * XREFs of sub_18006A554 @ 0x18006A554
 * Callers:
 *     sub_18006B830 @ 0x18006B830 (sub_18006B830.c)
 * Callees:
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18006A618 @ 0x18006A618 (sub_18006A618.c)
 *     sub_18006AE84 @ 0x18006AE84 (sub_18006AE84.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006A554(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _QWORD *v5; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(_QWORD **)(a2 + 8);
  for ( i = *(_QWORD **)a2; i != v3; i += 2 )
  {
    if ( *(_BYTE *)(*i + 136LL) && !*(_DWORD *)(*i + 176LL) )
    {
      v5 = (_QWORD *)a1[1];
      if ( v5 == (_QWORD *)a1[2] )
      {
        sub_18006A618(a1, a1[1], i);
      }
      else
      {
        j_unknown_libname_81(v5, i);
        a1[1] += 16LL;
      }
    }
  }
  sub_18006AE84(*a1, a1[1], (__int64)(a1[1] - *a1) >> 4, sub_18008D310, 1);
  return a1;
}
