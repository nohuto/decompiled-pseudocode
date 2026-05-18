/*
 * XREFs of sub_1800841C0 @ 0x1800841C0
 * Callers:
 *     sub_180084830 @ 0x180084830 (sub_180084830.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800841C0(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  char v7; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  _BYTE v11[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  unknown_libname_81(&v9, (_QWORD *)(a1 + 152));
  if ( v9 )
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 48LL))(v9, v11);
    v4 = *v3;
    v5 = 5;
  }
  else
  {
    v8 = 0LL;
    v3 = (__int64 *)&v7;
    v4 = 0LL;
    v5 = 6;
  }
  *a2 = v4;
  a2[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v8 )
      sub_18001060C(v8);
  }
  if ( (v5 & 1) != 0 && v12 )
    sub_18001060C(v12);
  if ( v10 )
    sub_18001060C(v10);
  return a2;
}
