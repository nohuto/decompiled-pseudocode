/*
 * XREFs of sub_1800383AC @ 0x1800383AC
 * Callers:
 *     sub_180037CDC @ 0x180037CDC (sub_180037CDC.c)
 * Callees:
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 *     unknown_libname_6 @ 0x1800387C0 (unknown_libname_6.c)
 *     sub_180038A44 @ 0x180038A44 (sub_180038A44.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800383AC(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v5; // rbx
  __int64 v9; // rdi
  __int64 *v10; // r14
  __int64 *v11; // r13
  _QWORD *v12; // rbp
  __int64 *v13; // rsi
  __int64 result; // rax
  _QWORD *v15; // rax

  v5 = a4;
  v9 = sub_180038A44(a1, a2, a4);
  v10 = (__int64 *)v5;
  v11 = (__int64 *)(v9 - 16);
  sub_180011110(a1, a2);
  v12 = a1 + 2;
  v13 = a2 + 2;
  while ( a5(v13, v10) )
  {
    sub_180011110(v12, v13);
    v13 += 2;
    if ( v13 == a3 )
    {
      result = unknown_libname_6(v10, v9, v12 + 2);
      while ( v5 != v9 )
      {
        result = sub_180030C00(v5);
        v5 += 16LL;
      }
      return result;
    }
LABEL_6:
    v12 += 2;
  }
  sub_180011110(v12, v10);
  v10 += 2;
  if ( v10 != v11 )
    goto LABEL_6;
  v15 = (_QWORD *)unknown_libname_6(v13, a3, v12 + 2);
  result = (__int64)sub_180011110(v15, v11);
  while ( v5 != v9 )
  {
    result = sub_180030C00(v5);
    v5 += 16LL;
  }
  return result;
}
