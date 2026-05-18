/*
 * XREFs of sub_1800126C0 @ 0x1800126C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800126C0(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (_QWORD *)sub_18001268C(*(_QWORD *)(a1 + 16), &v9);
  sub_18002867C(*v4 + 16LL, v11);
  if ( v10 )
    sub_18001060C(v10);
  sub_18003A3E0(*(_QWORD *)(a1 + 16), v12);
  v5 = v12[1];
  v6 = v12[2];
  v7 = v12[3];
  *a2 = v12[0];
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  sub_180011044((__int64)v11);
  return 0LL;
}
