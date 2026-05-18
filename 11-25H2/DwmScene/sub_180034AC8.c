/*
 * XREFs of sub_180034AC8 @ 0x180034AC8
 * Callers:
 *     sub_180034B90 @ 0x180034B90 (sub_180034B90.c)
 * Callees:
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_180030F18 @ 0x180030F18 (sub_180030F18.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 *     sub_1800346F4 @ 0x1800346F4 (sub_1800346F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180034AC8(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF

  sub_18002869C(a1 + 8, (__int64)v7);
  sub_18002869C(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_180032570(a1); ++i )
  {
    v3 = sub_1800324D4(a1, &v5, i);
    sub_1800346F4(a1, v3);
  }
  *(_DWORD *)(a1 + 1320) = -8388609;
  *(_DWORD *)(a1 + 1324) = 2139095039;
  *(_DWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1336) = 0LL;
  sub_180030F18((__int64 ***)(a1 + 1376));
  sub_180028424((__int64)v6);
  return sub_180028424((__int64)v7);
}
