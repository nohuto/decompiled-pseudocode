/*
 * XREFs of sub_180043C14 @ 0x180043C14
 * Callers:
 *     sub_1800750C0 @ 0x1800750C0 (sub_1800750C0.c)
 *     sub_180076C70 @ 0x180076C70 (sub_180076C70.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043C14(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_18004C220(a1, &v7, 8LL);
  sub_1800791C4(v7, &unk_1801C7D28, 7LL, 256LL);
  sub_180079CCC(v7);
  v3 = unknown_libname_81(v9, &v7);
  result = sub_18005C16C(v4, v3);
  if ( v8 )
    result = sub_18001050C(v8);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    return sub_18001050C(v6);
  return result;
}
