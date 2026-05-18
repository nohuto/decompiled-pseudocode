/*
 * XREFs of sub_180039F04 @ 0x180039F04
 * Callers:
 *     sub_18003A4E8 @ 0x18003A4E8 (sub_18003A4E8.c)
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_180063A84 @ 0x180063A84 (sub_180063A84.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_18008ADA0 @ 0x18008ADA0 (sub_18008ADA0.c)
 *     sub_18008AF4C @ 0x18008AF4C (sub_18008AF4C.c)
 *     sub_180099248 @ 0x180099248 (sub_180099248.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003B7B8 @ 0x18003B7B8 (sub_18003B7B8.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180039F04(__int64 a1, __int64 a2)
{
  char v4; // si
  _QWORD *v5; // rax
  _OWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-89h] BYREF
  __int64 v9; // [rsp+30h] [rbp-81h]
  __int64 v10; // [rsp+38h] [rbp-79h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h]
  _OWORD v12[4]; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v13[4]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v14[64]; // [rsp+C8h] [rbp+17h] BYREF

  v4 = 0;
  sub_18003BCDC(a1);
  if ( *sub_180012554(a1, &v10) )
  {
    v5 = sub_180012554(a1, &v8);
    v4 = 1;
    v6 = (_OWORD *)sub_18003A280(*v5, v14);
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
  if ( (v4 & 1) != 0 && v9 )
    sub_18001050C(v9);
  if ( v11 )
    sub_18001050C(v11);
  sub_18003B7B8(a2, a1 + 144, v13);
  return a2;
}
