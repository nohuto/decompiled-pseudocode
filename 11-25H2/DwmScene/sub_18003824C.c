/*
 * XREFs of sub_18003824C @ 0x18003824C
 * Callers:
 *     sub_180037B7C @ 0x180037B7C (sub_180037B7C.c)
 * Callees:
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 *     unknown_libname_6 @ 0x180038660 (unknown_libname_6.c)
 *     sub_1800388E4 @ 0x1800388E4 (sub_1800388E4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003824C(
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
  v9 = sub_1800388E4(a1, a2, a4);
  v10 = (__int64 *)v5;
  v11 = (__int64 *)(v9 - 16);
  sub_180011010(a1, a2);
  v12 = a1 + 2;
  v13 = a2 + 2;
  while ( a5(v13, v10) )
  {
    sub_180011010(v12, v13);
    v13 += 2;
    if ( v13 == a3 )
    {
      result = unknown_libname_6(v10, v9, v12 + 2);
      while ( v5 != v9 )
      {
        result = sub_180030AA0(v5);
        v5 += 16LL;
      }
      return result;
    }
LABEL_6:
    v12 += 2;
  }
  sub_180011010(v12, v10);
  v10 += 2;
  if ( v10 != v11 )
    goto LABEL_6;
  v15 = (_QWORD *)unknown_libname_6(v13, a3, v12 + 2);
  result = (__int64)sub_180011010(v15, v11);
  while ( v5 != v9 )
  {
    result = sub_180030AA0(v5);
    v5 += 16LL;
  }
  return result;
}
