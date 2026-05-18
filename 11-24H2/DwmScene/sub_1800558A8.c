/*
 * XREFs of sub_1800558A8 @ 0x1800558A8
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 *     sub_18008CD48 @ 0x18008CD48 (sub_18008CD48.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800543FC @ 0x1800543FC (sub_1800543FC.c)
 *     sub_18005453C @ 0x18005453C (sub_18005453C.c)
 *     sub_180058C08 @ 0x180058C08 (sub_180058C08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800558A8(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-1h] BYREF
  char v13[8]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 v16; // [rsp+80h] [rbp+37h]
  __int128 v17; // [rsp+88h] [rbp+3Fh] BYREF

  v17 = 0LL;
  v13[0] = 1;
  v14 = a2;
  v15 = a3;
  v16 = a5;
  sub_18001254C((__int64 *)&v17, a4);
  if ( a1[14] == a1[15] )
  {
    sub_18005453C(a1 + 13, a1[14], (__int64)v13);
  }
  else
  {
    sub_1800543FC();
    a1[14] += 48LL;
  }
  v7 = -1431655765 * ((a1[14] - a1[13]) >> 4) - 1;
  v8 = sub_180017054((__int64)v12, (__int64)&unk_1801C82B8);
  v11[0] = COERCE_UNSIGNED_INT((float)(int)v7);
  v11[1] = 0LL;
  sub_180058C08(a1, v8, v11, v7);
  if ( *((_QWORD *)&v17 + 1) )
    sub_18001060C(*((__int64 *)&v17 + 1));
  v9 = a4[1];
  if ( v9 )
    sub_18001060C(v9);
  return v7;
}
