/*
 * XREFs of sub_18003A280 @ 0x18003A280
 * Callers:
 *     sub_1800125C0 @ 0x1800125C0 (sub_1800125C0.c)
 *     sub_1800149F0 @ 0x1800149F0 (sub_1800149F0.c)
 *     sub_180039F04 @ 0x180039F04 (sub_180039F04.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003A3A8 @ 0x18003A3A8 (sub_18003A3A8.c)
 *     sub_18003B538 @ 0x18003B538 (sub_18003B538.c)
 *     sub_18003B8B8 @ 0x18003B8B8 (sub_18003B8B8.c)
 *     sub_18003B924 @ 0x18003B924 (sub_18003B924.c)
 *     sub_1800472B8 @ 0x1800472B8 (sub_1800472B8.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_1800593EC @ 0x1800593EC (sub_1800593EC.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180077FC0 @ 0x180077FC0 (sub_180077FC0.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 *     sub_180090590 @ 0x180090590 (sub_180090590.c)
 *     sub_180099248 @ 0x180099248 (sub_180099248.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_180017768 @ 0x180017768 (sub_180017768.c)
 *     sub_180039E94 @ 0x180039E94 (sub_180039E94.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003A418 @ 0x18003A418 (sub_18003A418.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_18003A280(__int64 a1, _OWORD *a2)
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

  sub_18003BCDC(a1);
  v4 = sub_18003A418(a1);
  if ( v4 > *(_QWORD *)(a1 + 360) )
  {
    sub_180012554(a1, &v12);
    if ( v12 )
    {
      v5 = (_OWORD *)sub_18003A280(v12, v14);
      v6 = sub_180039E94(a1, v15);
      v7 = sub_180017768((__int64)v16, v6, v5);
    }
    else
    {
      v7 = sub_180039E94(a1, v17);
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
      sub_18001050C(v13);
  }
  *a2 = *(_OWORD *)(a1 + 288);
  a2[1] = *(_OWORD *)(a1 + 304);
  a2[2] = *(_OWORD *)(a1 + 320);
  a2[3] = *(_OWORD *)(a1 + 336);
  return a2;
}
