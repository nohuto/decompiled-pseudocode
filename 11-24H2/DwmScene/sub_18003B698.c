/*
 * XREFs of sub_18003B698 @ 0x18003B698
 * Callers:
 *     sub_180088C60 @ 0x180088C60 (sub_180088C60.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_180012E60 @ 0x180012E60 (sub_180012E60.c)
 *     sub_1800183EC @ 0x1800183EC (sub_1800183EC.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003B918 @ 0x18003B918 (sub_18003B918.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18003B698(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 *v5; // rax
  __int128 *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h]
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h]
  _OWORD v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v13[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v14[64]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v15[4]; // [rsp+108h] [rbp+0h] BYREF

  v4 = 0;
  if ( *sub_180012654(a1, &v8) )
  {
    v5 = sub_180012654(a1, &v10);
    v4 = 1;
    v6 = sub_18003A3E0(*v5, v15);
  }
  else
  {
    v12[0] = xmmword_1800F8620;
    v12[1] = xmmword_1800F8630;
    v12[2] = xmmword_1800F8640;
    v12[3] = xmmword_1800F8650;
    v6 = v12;
  }
  v13[0] = *v6;
  v13[1] = v6[1];
  v13[2] = v6[2];
  v13[3] = v6[3];
  if ( (v4 & 1) != 0 && v11 )
    sub_18001060C(v11);
  if ( v9 )
    sub_18001060C(v9);
  sub_1800183EC(v13, (__int64)v14);
  sub_18003B918(&v8, a2, v14);
  v10 = v8;
  LODWORD(v11) = v9;
  return sub_180012E60(a1, &v10);
}
