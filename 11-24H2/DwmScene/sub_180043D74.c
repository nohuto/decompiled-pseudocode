/*
 * XREFs of sub_180043D74 @ 0x180043D74
 * Callers:
 *     sub_180075220 @ 0x180075220 (sub_180075220.c)
 *     sub_180076DD0 @ 0x180076DD0 (sub_180076DD0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043D74(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_18004C380(a1, &v7, 8LL);
  sub_180079324(v7, &unk_1801C8D38, 7LL, 256LL);
  sub_180079E2C(v7);
  v3 = unknown_libname_81(v9, &v7);
  result = sub_18005C2CC(v4, v3);
  if ( v8 )
    result = sub_18001060C(v8);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    return sub_18001060C(v6);
  return result;
}
