/*
 * XREFs of sub_180069EA8 @ 0x180069EA8
 * Callers:
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000CD2C @ 0x18000CD2C (sub_18000CD2C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     unknown_libname_83 @ 0x180017608 (unknown_libname_83.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180069EA8(__int64 a1)
{
  signed int v2; // edi
  _BYTE *v3; // r14
  _OWORD *v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE v10[32]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-48h] BYREF

  sub_18000CD2C(a1, 40LL, 64LL, sub_180069E80);
  v2 = 0;
  v3 = (_BYTE *)a1;
  v4 = (_OWORD *)(a1 + 8);
  v5 = 31LL;
  do
  {
    v6 = sub_1800275D0(v11, v2);
    v7 = sub_18001B678((__int64)v10, (__int64)"System", v6);
    unknown_libname_83(v4, v7);
    sub_180011B5C((__int64)v10);
    sub_180011B5C((__int64)v11);
    *v3 = 1;
    ++v2;
    v4 = (_OWORD *)((char *)v4 + 40);
    v3 += 40;
  }
  while ( v2 <= 31 );
  sub_180013918(a1 + 8, "System0_Enable", 0xEuLL);
  sub_180013918(a1 + 48, "System1_Visible", 0xFuLL);
  sub_180013918(a1 + 88, "System2_VisibleTree", 0x13uLL);
  sub_180013918(a1 + 128, "System3_Renderable", 0x12uLL);
  sub_180013918(a1 + 168, "System4_Debug", 0xDuLL);
  sub_180013918(a1 + 208, "System5_Loading", 0xFuLL);
  sub_180013918(a1 + 328, "System8_Transparent", 0x13uLL);
  sub_180013918(a1 + 368, "System9_OpaqueMask", 0x12uLL);
  sub_180013918(a1 + 648, "System16_ShadowCaster", 0x15uLL);
  v8 = (_BYTE *)(a1 + 1280);
  do
  {
    *v8 = 0;
    v8 += 40;
    --v5;
  }
  while ( v5 );
  return a1;
}
