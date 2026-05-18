/*
 * XREFs of sub_1800125C0 @ 0x1800125C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800125C0(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (_QWORD *)sub_18001258C(*(_QWORD *)(a1 + 16), &v9);
  sub_18002851C(*v4 + 16LL, v11);
  if ( v10 )
    sub_18001050C(v10);
  sub_18003A280(*(_QWORD *)(a1 + 16), v12);
  v5 = v12[1];
  v6 = v12[2];
  v7 = v12[3];
  *a2 = v12[0];
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  sub_180010F44((__int64)v11);
  return 0LL;
}
