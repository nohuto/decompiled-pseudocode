/*
 * XREFs of sub_18005BF40 @ 0x18005BF40
 * Callers:
 *     sub_18004D088 @ 0x18004D088 (sub_18004D088.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_18003CE84 @ 0x18003CE84 (sub_18003CE84.c)
 *     sub_180041974 @ 0x180041974 (sub_180041974.c)
 *     sub_180059E00 @ 0x180059E00 (sub_180059E00.c)
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_18005A58C @ 0x18005A58C (sub_18005A58C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005BF40(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 **v8; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 v11; // rax
  void *v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF

  v2 = a1 + 32;
  v3 = a1 + 52;
  while ( v2 != v3 )
  {
    v14 = 0LL;
    sub_180011110(v2, (__int64 *)&v14);
    if ( *((_QWORD *)&v14 + 1) )
      sub_18001060C(*((__int64 *)&v14 + 1));
    v2 += 2;
  }
  for ( i = a1 + 12; i != a1 + 32; i += 2 )
  {
    v14 = 0LL;
    sub_180011110(i, (__int64 *)&v14);
    if ( *((_QWORD *)&v14 + 1) )
      sub_18001060C(*((__int64 *)&v14 + 1));
  }
  v5 = *(__int64 **)a1[52];
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = v5[7];
    sub_18003CE84((__int64)(v5 + 7), (__int64)(v5 + 7), *(__int64 **)(v6 + 8));
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
    *(_QWORD *)(v6 + 16) = v6;
    v5[8] = 0LL;
    sub_18005A58C(v7, v5[5]);
    *(_QWORD *)v5[5] = v5[5];
    *(_QWORD *)(v5[5] + 8) = v5[5];
    v5[6] = 0LL;
    v8 = (__int64 **)v5[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( j = (__int64 *)v5[1]; !*((_BYTE *)j + 25) && v5 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v5 = j;
      v5 = j;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( k = *v8; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v5 = k;
    }
  }
  *(_QWORD *)&v14 = a1 + 59;
  BYTE8(v14) = 1;
  sub_1800281EC((__int64)(a1 + 59));
  sub_180059E00((__int64 *)v13, a1 + 60);
  sub_180028584((__int64)&v14);
  v11 = *(_QWORD *)v13[0];
  v15 = *(_QWORD *)v13[0];
  while ( !*(_BYTE *)(v11 + 25) )
  {
    sub_180011C04(v11 + 32, &v14);
    if ( (_QWORD)v14 )
      sub_180041974((_QWORD *)v14);
    if ( *((_QWORD *)&v14 + 1) )
      sub_18001060C(*((__int64 *)&v14 + 1));
    sub_18001C420(&v15);
    v11 = v15;
  }
  v14 = 0LL;
  sub_180011110(a1 + 55, (__int64 *)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_18001060C(*((__int64 *)&v14 + 1));
  return sub_18005A490(v13, (__int64)v13);
}
