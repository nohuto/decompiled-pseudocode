/*
 * XREFs of sub_18003A3E0 @ 0x18003A3E0
 * Callers:
 *     sub_1800126C0 @ 0x1800126C0 (sub_1800126C0.c)
 *     sub_180014AF0 @ 0x180014AF0 (sub_180014AF0.c)
 *     sub_18003A064 @ 0x18003A064 (sub_18003A064.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003A508 @ 0x18003A508 (sub_18003A508.c)
 *     sub_18003B698 @ 0x18003B698 (sub_18003B698.c)
 *     sub_18003BA18 @ 0x18003BA18 (sub_18003BA18.c)
 *     sub_18003BA84 @ 0x18003BA84 (sub_18003BA84.c)
 *     sub_180047418 @ 0x180047418 (sub_180047418.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_18005954C @ 0x18005954C (sub_18005954C.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 *     sub_1800906F0 @ 0x1800906F0 (sub_1800906F0.c)
 *     sub_1800993A8 @ 0x1800993A8 (sub_1800993A8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012654 @ 0x180012654 (sub_180012654.c)
 *     sub_180017828 @ 0x180017828 (sub_180017828.c)
 *     sub_180039FF4 @ 0x180039FF4 (sub_180039FF4.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003A578 @ 0x18003A578 (sub_18003A578.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_18003A3E0(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // rbp
  _OWORD *v5; // rbx
  __int128 *v6; // rax
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v12; // [rsp+20h] [rbp-118h] BYREF
  __int64 v13; // [rsp+28h] [rbp-110h]
  _BYTE v14[64]; // [rsp+30h] [rbp-108h] BYREF
  _OWORD v15[4]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v16[64]; // [rsp+B0h] [rbp-88h] BYREF
  _OWORD v17[4]; // [rsp+F0h] [rbp-48h] BYREF

  sub_18003BE3C(a1);
  v4 = sub_18003A578(a1);
  if ( v4 > *(_QWORD *)(a1 + 360) )
  {
    sub_180012654(a1, &v12);
    if ( v12 )
    {
      v5 = (_OWORD *)sub_18003A3E0(v12, v14);
      v6 = sub_180039FF4(a1, v15);
      v7 = sub_180017828((__int64)v16, v6, v5);
    }
    else
    {
      v7 = sub_180039FF4(a1, v17);
    }
    v8 = v7[3];
    v9 = v7[2];
    v10 = v7[1];
    *(_OWORD *)(a1 + 288) = *v7;
    *(_OWORD *)(a1 + 304) = v10;
    *(_OWORD *)(a1 + 320) = v9;
    *(_OWORD *)(a1 + 336) = v8;
    *(_QWORD *)(a1 + 360) = v4;
    if ( v13 )
      sub_18001060C(v13);
  }
  *a2 = *(_OWORD *)(a1 + 288);
  a2[1] = *(_OWORD *)(a1 + 304);
  a2[2] = *(_OWORD *)(a1 + 320);
  a2[3] = *(_OWORD *)(a1 + 336);
  return a2;
}
