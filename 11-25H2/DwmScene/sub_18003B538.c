/*
 * XREFs of sub_18003B538 @ 0x18003B538
 * Callers:
 *     sub_180088B00 @ 0x180088B00 (sub_180088B00.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_180012D60 @ 0x180012D60 (sub_180012D60.c)
 *     sub_18001832C @ 0x18001832C (sub_18001832C.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003B7B8 @ 0x18003B7B8 (sub_18003B7B8.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_18003B538(__int64 a1, __int64 a2)
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
  if ( *sub_180012554(a1, &v8) )
  {
    v5 = sub_180012554(a1, &v10);
    v4 = 1;
    v6 = sub_18003A280(*v5, v15);
  }
  else
  {
    v12[0] = xmmword_1800F7620;
    v12[1] = xmmword_1800F7630;
    v12[2] = xmmword_1800F7640;
    v12[3] = xmmword_1800F7650;
    v6 = v12;
  }
  v13[0] = *v6;
  v13[1] = v6[1];
  v13[2] = v6[2];
  v13[3] = v6[3];
  if ( (v4 & 1) != 0 && v11 )
    sub_18001050C(v11);
  if ( v9 )
    sub_18001050C(v9);
  sub_18001832C(v13, (__int64)v14);
  sub_18003B7B8(&v8, a2, v14);
  v10 = v8;
  LODWORD(v11) = v9;
  return sub_180012D60(a1, &v10);
}
