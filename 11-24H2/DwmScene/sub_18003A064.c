/*
 * XREFs of sub_18003A064 @ 0x18003A064
 * Callers:
 *     sub_18003A648 @ 0x18003A648 (sub_18003A648.c)
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_18008AF00 @ 0x18008AF00 (sub_18008AF00.c)
 *     sub_18008B0AC @ 0x18008B0AC (sub_18008B0AC.c)
 *     sub_1800993A8 @ 0x1800993A8 (sub_1800993A8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003B918 @ 0x18003B918 (sub_18003B918.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003A064(__int64 a1, __int64 a2)
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
  sub_18003BE3C(a1);
  if ( *sub_180012654(a1, &v10) )
  {
    v5 = sub_180012654(a1, &v8);
    v4 = 1;
    v6 = (_OWORD *)sub_18003A3E0(*v5, v14);
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
  if ( (v4 & 1) != 0 && v9 )
    sub_18001060C(v9);
  if ( v11 )
    sub_18001060C(v11);
  sub_18003B918(a2, a1 + 144, v13);
  return a2;
}
