/*
 * XREFs of sub_180014CA0 @ 0x180014CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003F3C8 @ 0x18003F3C8 (sub_18003F3C8.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180014CA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( a2 )
  {
    sub_18001268C(*(_QWORD *)(a1 + 32), &v5);
    v3 = v5;
    sub_18002867C(v5 + 16, v8);
    v4 = unknown_libname_81(&v7, (_QWORD *)(a2 + 32));
    sub_18003F3C8(v3, v4);
    sub_180011044((__int64)v8);
    if ( v6 )
      sub_18001060C(v6);
  }
}
