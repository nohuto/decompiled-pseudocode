/*
 * XREFs of sub_180041974 @ 0x180041974
 * Callers:
 *     sub_180040F24 @ 0x180040F24 (sub_180040F24.c)
 *     sub_18005BF40 @ 0x18005BF40 (sub_18005BF40.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_18002845C @ 0x18002845C (sub_18002845C.c)
 *     sub_18005C554 @ 0x18005C554 (sub_18005C554.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180041974(_QWORD *a1)
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
  result = (__int64)sub_180011110(a1 + 15, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    result = sub_18001060C(*((__int64 *)&v8 + 1));
  v3 = a1 + 17;
  v4 = a1[17];
  if ( v4 )
  {
    v5 = a1 + 27;
    v10 = sub_180015274(&v8, v5);
    sub_18002845C((__int64)v9, v4 + 472);
    sub_18005C554(v4 + 480, v10);
    sub_180011044((__int64)v9);
    v6 = (volatile signed __int32 *)v10[1];
    if ( v6 )
      sub_180010644(v6);
    v8 = 0LL;
    result = (__int64)sub_180011110(v3, (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
      result = sub_18001060C(*((__int64 *)&v8 + 1));
    *v5 = 0LL;
    v7 = (volatile signed __int32 *)v5[1];
    v5[1] = 0LL;
    if ( v7 )
      return sub_180010644(v7);
  }
  return result;
}
