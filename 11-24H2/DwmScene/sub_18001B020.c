/*
 * XREFs of sub_18001B020 @ 0x18001B020
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003E97C @ 0x18003E97C (sub_18003E97C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001B020(__int64 a1, float *a2, float *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  float *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  _BYTE v14[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  sub_18002867C(*(_QWORD *)(a1 + 16) + 16LL, v14);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_180012444((__int64)v15, (__int64)&unk_1801C4FB8);
  v8 = (float *)sub_18003E97C(v6, v7);
  v9 = v8[2] - v8[5];
  v10 = v8[1] - v8[4];
  *a2 = *v8 - v8[3];
  a2[1] = v10;
  a2[2] = v9;
  v11 = v8[5] + v8[2];
  v12 = v8[4] + v8[1];
  *a3 = *v8 + v8[3];
  a3[1] = v12;
  a3[2] = v11;
  return sub_180011044((__int64)v14);
}
