/*
 * XREFs of sub_18003FD80 @ 0x18003FD80
 * Callers:
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_18003FE3C @ 0x18003FE3C (sub_18003FE3C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180013E0C @ 0x180013E0C (sub_180013E0C.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_180047418 @ 0x180047418 (sub_180047418.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18003FD80(__int64 *a1, __int64 a2, __int64 a3)
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
    sub_180013E0C(v6, &v12);
    if ( v12 )
      sub_180047418(v12, a2, a3);
    v7 = *a1;
    sub_18003BE3C(v7);
    v8 = *(_QWORD **)(v7 + 32);
    v9 = *(_QWORD **)(v7 + 40);
    while ( v8 != v9 )
    {
      unknown_libname_81(&v10, v8);
      sub_18003FD80(&v10, a2, a3);
      if ( v11 )
        sub_18001060C(v11);
      v8 += 2;
    }
    if ( v13 )
      sub_18001060C(v13);
  }
}
