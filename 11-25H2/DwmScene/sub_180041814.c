/*
 * XREFs of sub_180041814 @ 0x180041814
 * Callers:
 *     sub_180040DC4 @ 0x180040DC4 (sub_180040DC4.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_1800282FC @ 0x1800282FC (sub_1800282FC.c)
 *     sub_18005C3F4 @ 0x18005C3F4 (sub_18005C3F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180041814(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp+8h]

  v8 = 0LL;
  result = (__int64)sub_180011010(a1 + 15, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    result = sub_18001050C(*((__int64 *)&v8 + 1));
  v3 = a1 + 17;
  v4 = a1[17];
  if ( v4 )
  {
    v5 = a1 + 27;
    v10 = sub_180015174(&v8, v5);
    sub_1800282FC((__int64)v9, v4 + 472);
    sub_18005C3F4(v4 + 480, v10);
    sub_180010F44((__int64)v9);
    v6 = (volatile signed __int32 *)v10[1];
    if ( v6 )
      sub_180010544(v6);
    v8 = 0LL;
    result = (__int64)sub_180011010(v3, (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      result = sub_18001050C(*((__int64 *)&v8 + 1));
    *v5 = 0LL;
    v7 = (volatile signed __int32 *)v5[1];
    v5[1] = 0LL;
    if ( v7 )
      return sub_180010544(v7);
  }
  return result;
}
