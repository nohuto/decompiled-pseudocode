/*
 * XREFs of sub_180049970 @ 0x180049970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001197C @ 0x18001197C (sub_18001197C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180041928 @ 0x180041928 (sub_180041928.c)
 *     sub_1800487D4 @ 0x1800487D4 (sub_1800487D4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180049970(_QWORD *a1)
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

  result = sub_1800487D4((__int64)a1, (__int64)&v10);
  if ( v10 )
  {
    result = sub_180011B04((__int64)(a1 + 7), &v13);
    v3 = (__int64 *)a1[13];
    v4 = v3 + 9;
    if ( v3[9] )
    {
      v5 = a1[18];
      if ( v5 && (result = sub_18001197C(v5)) != 0 )
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
        sub_180041928(*v3, (__int64)&unk_1801C7E88, 1);
        v8 = unknown_libname_81(&v12, v4);
        result = v9(v6, v8);
      }
      if ( v7 )
        result = sub_18001050C(v7);
    }
    if ( v14 )
      result = sub_18001050C(v14);
  }
  if ( v11 )
    return sub_18001050C(v11);
  return result;
}
