/*
 * XREFs of sub_1800472B8 @ 0x1800472B8
 * Callers:
 *     sub_18003FC20 @ 0x18003FC20 (sub_18003FC20.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003E3BC @ 0x18003E3BC (sub_18003E3BC.c)
 *     sub_18003F7E4 @ 0x18003F7E4 (sub_18003F7E4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800472B8(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int128 v6; // [rsp+28h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-9h]
  __int128 v8; // [rsp+40h] [rbp-1h] BYREF
  __int64 v9; // [rsp+50h] [rbp+Fh]
  __int128 v10; // [rsp+58h] [rbp+17h] BYREF
  __int128 v11; // [rsp+78h] [rbp+37h]
  __int128 v12; // [rsp+88h] [rbp+47h]

  sub_180011B04(a1 + 56, &v6);
  sub_18003A280(v6, &v10);
  if ( *((_QWORD *)&v6 + 1) )
    sub_18001050C(*((__int64 *)&v6 + 1));
  v6 = xmmword_18018C5D0;
  v7 = 0x3F8000003F800000LL;
  sub_18003F7E4((unsigned __int64 *)(a1 + 88), (__int64)&v6, *(double *)&v11, *(double *)&v12);
  if ( *a3 )
  {
    v8 = xmmword_18018C5D0;
    v9 = 0x3F8000003F800000LL;
    sub_18003E3BC((__int64)&v8, a2, (unsigned __int64 *)&v6);
    *(_OWORD *)a2 = v8;
    a2[2] = v9;
  }
  else
  {
    *(_OWORD *)a2 = v6;
    a2[2] = v7;
    *a3 = 1;
  }
}
