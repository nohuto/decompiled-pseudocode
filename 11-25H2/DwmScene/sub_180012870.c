/*
 * XREFs of sub_180012870 @ 0x180012870
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003B44C @ 0x18003B44C (sub_18003B44C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180012870(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  _BYTE v12[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v4 = (_QWORD *)sub_18001258C(*(_QWORD *)(a1 + 16), &v10);
  sub_18002851C(*v4 + 16LL, v12);
  v5 = 0;
  if ( v11 )
    sub_18001050C(v11);
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v13[0] = *a2;
  v13[1] = v6;
  v13[2] = v7;
  v13[3] = v8;
  if ( !(unsigned __int8)sub_18003B44C(*(_QWORD *)(a1 + 16), v13) )
  {
    v5 = -2147024809;
    sub_18000F0E4(
      retaddr,
      232LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrelightnode.cpp",
      2147942487LL);
  }
  sub_180010F44((__int64)v12);
  return v5;
}
