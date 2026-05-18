/*
 * XREFs of sub_180090830 @ 0x180090830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18007E874 @ 0x18007E874 (sub_18007E874.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_180090830(__int64 a1, __int64 a2, float a3, float a4, float a5, int a6)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rdi
  int v9; // [rsp+20h] [rbp-48h]
  _QWORD *v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *(_QWORD **)(a1 + 128);
  for ( i = *(_QWORD **)(a1 + 136); v7 != i; v7 += 2 )
  {
    unknown_libname_81(&v10, v7);
    result = (_UNKNOWN **)sub_18007E874(v10, a3, a4, a5, v9, a6);
    if ( v11 )
      result = (_UNKNOWN **)sub_18001050C(v11);
  }
  return result;
}
