/*
 * XREFs of sub_1800906F0 @ 0x1800906F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003A508 @ 0x18003A508 (sub_18003A508.c)
 *     sub_180040888 @ 0x180040888 (sub_180040888.c)
 *     sub_180048A28 @ 0x180048A28 (sub_180048A28.c)
 *     sub_180048A4C @ 0x180048A4C (sub_180048A4C.c)
 *     sub_180058F98 @ 0x180058F98 (sub_180058F98.c)
 *     sub_18007C3D4 @ 0x18007C3D4 (sub_18007C3D4.c)
 *     sub_18007C4E0 @ 0x18007C4E0 (sub_18007C4E0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800906F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D8h]
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h]
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  int v13; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+5Ch] [rbp-ACh]
  int v15; // [rsp+6Ch] [rbp-9Ch]
  __int128 v16; // [rsp+70h] [rbp-98h]
  int v17; // [rsp+80h] [rbp-88h]
  __int128 v18; // [rsp+84h] [rbp-84h]
  int v19; // [rsp+94h] [rbp-74h]
  __m128 v20[4]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v21[7]; // [rsp+D8h] [rbp-30h] BYREF

  sub_180048A28(a2, &v11);
  result = (__int64)sub_180048A4C(a2, &v7, v3);
  if ( v7 )
  {
    v5 = sub_180040888(a2, &v9);
    sub_18003A3E0(*v5, v20);
    if ( v10 )
      sub_18001060C(v10);
    v6 = sub_180040888(a2, &v9);
    sub_18003A508(*v6, (__int64)v21);
    if ( v10 )
      sub_18001060C(v10);
    v13 = 1065353216;
    v14 = 0LL;
    v15 = 1065353216;
    v16 = 0LL;
    v17 = 1065353216;
    v18 = 0LL;
    v19 = 1065353216;
    sub_180058F98(v20, (__m128 *)&v13);
    sub_18007C3D4(v7, (__int64)&unk_1801C7FF8, &v13);
    sub_18007C3D4(v7, (__int64)&unk_1801C8018, v21);
    sub_18007C4E0(v7, (__int64)&unk_1801C8038);
    sub_18007C4E0(v7, (__int64)&unk_1801C8058);
    result = sub_18007C4E0(v7, (__int64)&unk_1801C8078);
  }
  if ( v8 )
    result = sub_18001060C(v8);
  if ( v12 )
    return sub_18001060C(v12);
  return result;
}
