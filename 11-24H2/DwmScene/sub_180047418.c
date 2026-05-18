/*
 * XREFs of sub_180047418 @ 0x180047418
 * Callers:
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003E51C @ 0x18003E51C (sub_18003E51C.c)
 *     sub_18003F944 @ 0x18003F944 (sub_18003F944.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180047418(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int128 v6; // [rsp+28h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-9h]
  __int128 v8; // [rsp+40h] [rbp-1h] BYREF
  __int64 v9; // [rsp+50h] [rbp+Fh]
  __int128 v10; // [rsp+58h] [rbp+17h] BYREF
  __int128 v11; // [rsp+78h] [rbp+37h]
  __int128 v12; // [rsp+88h] [rbp+47h]

  sub_180011C04(a1 + 56, &v6);
  sub_18003A3E0(v6, &v10);
  if ( *((_QWORD *)&v6 + 1) )
    sub_18001060C(*((__int64 *)&v6 + 1));
  v6 = xmmword_18018D5C0;
  v7 = 0x3F8000003F800000LL;
  sub_18003F944((unsigned __int64 *)(a1 + 88), (__int64)&v6, *(double *)&v11, *(double *)&v12);
  if ( *a3 )
  {
    v8 = xmmword_18018D5C0;
    v9 = 0x3F8000003F800000LL;
    sub_18003E51C((__int64)&v8, a2, (unsigned __int64 *)&v6);
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
