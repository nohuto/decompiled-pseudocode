/*
 * XREFs of sub_180055748 @ 0x180055748
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 *     sub_18008CBE8 @ 0x18008CBE8 (sub_18008CBE8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18005429C @ 0x18005429C (sub_18005429C.c)
 *     sub_1800543DC @ 0x1800543DC (sub_1800543DC.c)
 *     sub_180058AA8 @ 0x180058AA8 (sub_180058AA8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180055748(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
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
  sub_18001244C((__int64 *)&v17, a4);
  if ( a1[14] == a1[15] )
  {
    sub_1800543DC(a1 + 13, a1[14], (__int64)v13);
  }
  else
  {
    sub_18005429C();
    a1[14] += 48LL;
  }
  v7 = -1431655765 * ((a1[14] - a1[13]) >> 4) - 1;
  v8 = sub_180016F54((__int64)v12, (__int64)&unk_1801C72A8);
  v11[0] = COERCE_UNSIGNED_INT((float)(int)v7);
  v11[1] = 0LL;
  sub_180058AA8(a1, v8, v11, v7);
  if ( *((_QWORD *)&v17 + 1) )
    sub_18001050C(*((__int64 *)&v17 + 1));
  v9 = a4[1];
  if ( v9 )
    sub_18001050C(v9);
  return v7;
}
