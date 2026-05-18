/*
 * XREFs of sub_1800419E8 @ 0x1800419E8
 * Callers:
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_18006C138 @ 0x18006C138 (sub_18006C138.c)
 *     sub_18008B290 @ 0x18008B290 (sub_18008B290.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_180040908 @ 0x180040908 (sub_180040908.c)
 *     sub_180040ECC @ 0x180040ECC (sub_180040ECC.c)
 *     sub_18005BC94 @ 0x18005BC94 (sub_18005BC94.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 */

char __fastcall sub_1800419E8(__int64 a1, int a2, int a3, int a4)
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

  v8 = (_QWORD *)sub_1800254DC(a1, &v15);
  v9 = *(_QWORD *)(*(_QWORD *)sub_18005BC94(*v8, v13) + 18688LL);
  if ( v14 )
    sub_18001050C(v14);
  if ( v16 )
    sub_18001050C(v16);
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
  if ( !v10 || (result = sub_180040ECC(*(_QWORD *)(v10 + 112), (__int64)v19)) == 0 )
  {
    v12 = sub_180040908(v9, &v17);
    sub_180011010((_QWORD *)(a1 + 168), v12);
    if ( v18 )
      sub_18001050C(v18);
    return sub_18007EEC0(*(_QWORD *)(a1 + 168), v19, 0LL);
  }
  return result;
}
