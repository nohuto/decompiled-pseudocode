/*
 * XREFs of sub_180078120 @ 0x180078120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_180040888 @ 0x180040888 (sub_180040888.c)
 *     sub_180048A28 @ 0x180048A28 (sub_180048A28.c)
 *     sub_180048A4C @ 0x180048A4C (sub_180048A4C.c)
 *     sub_180058F98 @ 0x180058F98 (sub_180058F98.c)
 *     sub_18007C3D4 @ 0x18007C3D4 (sub_18007C3D4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180078120(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-59h] BYREF
  __int64 v7; // [rsp+28h] [rbp-51h]
  int v8; // [rsp+30h] [rbp-49h] BYREF
  __int128 v9; // [rsp+34h] [rbp-45h]
  int v10; // [rsp+44h] [rbp-35h]
  __int128 v11; // [rsp+48h] [rbp-31h]
  int v12; // [rsp+58h] [rbp-21h]
  __int128 v13; // [rsp+5Ch] [rbp-1Dh]
  int v14; // [rsp+6Ch] [rbp-Dh]
  __int64 v15; // [rsp+70h] [rbp-9h] BYREF
  __int64 v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h] BYREF
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __m128 v19[4]; // [rsp+90h] [rbp+17h] BYREF

  sub_180048A28(a2, &v17);
  result = (__int64)sub_180048A4C(a2, &v6, v3);
  if ( v6 )
  {
    v5 = sub_180040888(a2, &v15);
    sub_18003A3E0(*v5, v19);
    if ( v16 )
      sub_18001060C(v16);
    v8 = 1065353216;
    v9 = 0LL;
    v10 = 1065353216;
    v11 = 0LL;
    v12 = 1065353216;
    v13 = 0LL;
    v14 = 1065353216;
    sub_180058F98(v19, (__m128 *)&v8);
    result = sub_18007C3D4(v6);
  }
  if ( v7 )
    result = sub_18001060C(v7);
  if ( v18 )
    return sub_18001060C(v18);
  return result;
}
