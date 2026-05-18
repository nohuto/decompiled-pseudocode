/*
 * XREFs of sub_18006AE18 @ 0x18006AE18
 * Callers:
 *     sub_18006C4CC @ 0x18006C4CC (sub_18006C4CC.c)
 * Callees:
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_180044F14 @ 0x180044F14 (sub_180044F14.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 */

__int64 **__fastcall sub_18006AE18(__int64 **a1, _QWORD *a2, _QWORD *a3, __int64 *a4, __int64 *a5)
{
  _QWORD *i; // r14
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 **result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v9 = _RTtypeid(*i);
    if ( sub_180044F14(*a5, v9) )
    {
      v10 = (_QWORD *)a4[1];
      if ( v10 == (_QWORD *)a4[2] )
      {
        sub_18006A4B8(a4, a4[1], i);
      }
      else
      {
        j_unknown_libname_81(v10, i);
        a4[1] += 16LL;
      }
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
