/*
 * XREFs of sub_180041B48 @ 0x180041B48
 * Callers:
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_18006C298 @ 0x18006C298 (sub_18006C298.c)
 *     sub_18008B3F0 @ 0x18008B3F0 (sub_18008B3F0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_18002563C @ 0x18002563C (sub_18002563C.c)
 *     sub_180040A68 @ 0x180040A68 (sub_180040A68.c)
 *     sub_18004102C @ 0x18004102C (sub_18004102C.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 */

char __fastcall sub_180041B48(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  char result; // al
  __int64 *v12; // rax
  _BYTE v13[8]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v14; // [rsp+30h] [rbp-31h]
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h]
  __int64 v17; // [rsp+48h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-11h]
  _DWORD v19[6]; // [rsp+58h] [rbp-9h] BYREF
  char v20; // [rsp+70h] [rbp+Fh]
  __int128 v21; // [rsp+74h] [rbp+13h]
  __int128 v22; // [rsp+84h] [rbp+23h]
  char v23; // [rsp+94h] [rbp+33h]
  bool v24; // [rsp+95h] [rbp+34h]
  char v25; // [rsp+96h] [rbp+35h]
  __int16 v26; // [rsp+97h] [rbp+36h]
  int v27; // [rsp+9Ch] [rbp+3Bh]

  v8 = (_QWORD *)sub_18002563C(a1, &v15);
  v9 = *(_QWORD *)(*(_QWORD *)sub_18005BDF4(*v8, v13) + 18688LL);
  if ( v14 )
    sub_18001060C(v14);
  if ( v16 )
    sub_18001060C(v16);
  v19[0] = 0;
  v19[3] = 0;
  v19[4] = 0;
  v19[5] = 0;
  v10 = *(_QWORD *)(a1 + 168);
  v20 = 0;
  v24 = a3 == 1;
  v23 = 1;
  v26 = 256;
  v27 = 3;
  v25 = 0;
  v19[2] = a2;
  v19[1] = a4;
  v21 = 0LL;
  v22 = 0LL;
  if ( !v10 || (result = sub_18004102C(*(_QWORD *)(v10 + 112), (__int64)v19)) == 0 )
  {
    v12 = sub_180040A68(v9, &v17);
    sub_180011110((_QWORD *)(a1 + 168), v12);
    if ( v18 )
      sub_18001060C(v18);
    return sub_18007F020(*(_QWORD *)(a1 + 168), v19, 0LL);
  }
  return result;
}
