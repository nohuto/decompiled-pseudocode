/*
 * XREFs of sub_180049AD0 @ 0x180049AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011A7C @ 0x180011A7C (sub_180011A7C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_180048934 @ 0x180048934 (sub_180048934.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180049AD0(_QWORD *a1)
{
  char result; // al
  __int64 *v3; // r9
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD *); // r8
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]

  result = sub_180048934((__int64)a1, (__int64)&v10);
  if ( v10 )
  {
    result = sub_180011C04((__int64)(a1 + 7), &v13);
    v3 = (__int64 *)a1[13];
    v4 = v3 + 9;
    if ( v3[9] )
    {
      v5 = a1[18];
      if ( v5 && (result = sub_180011A7C(v5)) != 0 )
      {
        v6 = a1[17];
        v7 = a1[18];
      }
      else
      {
        v7 = 0LL;
        v6 = 0LL;
      }
      if ( v6 )
      {
        sub_180041A88(*v3, (__int64)&unk_1801C8E98, 1);
        v8 = unknown_libname_81(&v12, v4);
        result = v9(v6, v8);
      }
      if ( v7 )
        result = sub_18001060C(v7);
    }
    if ( v14 )
      result = sub_18001060C(v14);
  }
  if ( v11 )
    return sub_18001060C(v11);
  return result;
}
