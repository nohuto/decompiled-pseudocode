/*
 * XREFs of sub_1800384C0 @ 0x1800384C0
 * Callers:
 *     sub_180037CDC @ 0x180037CDC (sub_180037CDC.c)
 * Callees:
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 *     sub_180038770 @ 0x180038770 (sub_180038770.c)
 *     sub_180038A44 @ 0x180038A44 (sub_180038A44.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800384C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v5; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r13
  __int64 *v11; // rbp
  __int64 *v12; // rsi
  __int64 result; // rax

  v5 = a4;
  v9 = sub_180038A44(a2, a3, a4);
  v10 = (_QWORD *)(a3 - 16);
  sub_180011110(v10, (__int64 *)(a2 - 16));
  v11 = (__int64 *)(v9 - 16);
  v12 = (__int64 *)(a2 - 32);
  do
  {
    while ( 1 )
    {
      v10 -= 2;
      if ( !a5(v11, v12) )
        break;
      sub_180011110(v10, v12);
      if ( a1 == v12 )
      {
        sub_180011110(v10 - 2, v11);
        result = sub_180038770(v5, v11, v10 - 2);
        while ( v5 != (__int64 *)v9 )
        {
          result = sub_180030C00((__int64)v5);
          v5 += 2;
        }
        return result;
      }
      v12 -= 2;
    }
    sub_180011110(v10, v11);
    v11 -= 2;
  }
  while ( v5 != v11 );
  sub_180011110(v10 - 2, v12);
  sub_180038770(a1, v12, v10 - 2);
  result = (__int64)sub_180011110(a1, v5);
  while ( v5 != (__int64 *)v9 )
  {
    result = sub_180030C00((__int64)v5);
    v5 += 2;
  }
  return result;
}
