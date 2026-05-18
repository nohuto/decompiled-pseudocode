/*
 * XREFs of sub_18003FC20 @ 0x18003FC20
 * Callers:
 *     sub_18003FC20 @ 0x18003FC20 (sub_18003FC20.c)
 *     sub_18003FCDC @ 0x18003FCDC (sub_18003FCDC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003FC20 @ 0x18003FC20 (sub_18003FC20.c)
 *     sub_1800472B8 @ 0x1800472B8 (sub_1800472B8.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18003FC20(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v6 = *a1;
  if ( v6 )
  {
    sub_180013D0C(v6, &v12);
    if ( v12 )
      sub_1800472B8(v12, a2, a3);
    v7 = *a1;
    sub_18003BCDC(v7);
    v8 = *(_QWORD **)(v7 + 32);
    v9 = *(_QWORD **)(v7 + 40);
    while ( v8 != v9 )
    {
      unknown_libname_81(&v10, v8);
      sub_18003FC20(&v10, a2, a3);
      if ( v11 )
        sub_18001050C(v11);
      v8 += 2;
    }
    if ( v13 )
      sub_18001050C(v13);
  }
}
