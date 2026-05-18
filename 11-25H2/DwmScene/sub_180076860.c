/*
 * XREFs of sub_180076860 @ 0x180076860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800175E4 @ 0x1800175E4 (sub_1800175E4.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_180041F14 @ 0x180041F14 (sub_180041F14.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_180076434 @ 0x180076434 (sub_180076434.c)
 *     sub_180079590 @ 0x180079590 (sub_180079590.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 *     sub_18007E24C @ 0x18007E24C (sub_18007E24C.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180076860(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _DWORD *v11; // rsi
  _DWORD *v12; // r14
  __int64 *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r9
  __int64 result; // rax
  __int128 *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  __int128 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  _QWORD v28[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v29[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  _BYTE v33[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v34[64]; // [rsp+100h] [rbp+0h] BYREF

  v23 = &v25;
  v6 = sub_1800407EC(a1 + 8, &v25);
  v7 = sub_180016F54((__int64)v28, (__int64)&unk_1801C83E8);
  v8 = sub_18004C268(a2, &v26, v7, v6);
  sub_180011010((_QWORD *)(a1 + 56), v8);
  if ( v27 )
    sub_18001050C(v27);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = std::string::string(v28, "Font");
  sub_180076434(v9, (__int64)v10);
  sub_1800175E4((void **)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v25 = 0LL;
  v11 = (_DWORD *)*a3;
  v12 = (_DWORD *)a3[1];
  while ( v11 != v12 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = *v11;
    v13 = sub_18005B398(*(_QWORD *)(a1 + 56), &v26, 0LL, 0LL, 1);
    sub_180011010(&v25, v13);
    if ( v27 )
      sub_18001050C(v27);
    v14 = std::string::string(v28, byte_1800F6C80);
    v15 = std::string::string(v29, "Font");
    v16 = v14;
    v17 = v25;
    sub_18007E444(v25, v15, 0LL, v16);
    sub_18007E24C(v17, 8, 2, 0, 1);
    LODWORD(v29[0]) = 0;
    v29[1] = 0x10000040031LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    sub_18007E7DC(v17, v29);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = 0;
    ++v11;
  }
  sub_18004C220(a2, &v23, 2u);
  v18 = sub_180016F54((__int64)v29, (__int64)&unk_1801C8428);
  sub_180041F14((__int64)v33, v18, 5);
  v19 = sub_180016F54((__int64)v28, (__int64)&unk_1801C8408);
  sub_180041F14((__int64)v34, v19, 8);
  sub_180079590(v23, v33, 2LL, 0LL);
  sub_180079CCC(v23);
  v20 = unknown_libname_81(&v26, &v23);
  sub_18005C16C(v21, v20);
  sub_18000B2D4((__int64)v33, 64LL, 2LL, (void (__fastcall *)(__int64))sub_180042330);
  if ( v24 )
    sub_18001050C(v24);
  result = sub_18005B7F4(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v25 + 1) )
    return sub_18001050C(*((__int64 *)&v25 + 1));
  return result;
}
