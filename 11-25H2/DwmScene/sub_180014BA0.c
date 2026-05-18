/*
 * XREFs of sub_180014BA0 @ 0x180014BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003F268 @ 0x18003F268 (sub_18003F268.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180014BA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( a2 )
  {
    sub_18001258C(*(_QWORD *)(a1 + 32), &v5);
    v3 = v5;
    sub_18002851C(v5 + 16, v8);
    v4 = unknown_libname_81(&v7, (_QWORD *)(a2 + 32));
    sub_18003F268(v3, v4);
    sub_180010F44((__int64)v8);
    if ( v6 )
      sub_18001050C(v6);
  }
}
