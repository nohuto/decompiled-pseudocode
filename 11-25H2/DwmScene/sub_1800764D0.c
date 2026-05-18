/*
 * XREFs of sub_1800764D0 @ 0x1800764D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800175E4 @ 0x1800175E4 (sub_1800175E4.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_180041F14 @ 0x180041F14 (sub_180041F14.c)
 *     sub_180042330 @ 0x180042330 (sub_180042330.c)
 *     sub_18004C220 @ 0x18004C220 (sub_18004C220.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_180076434 @ 0x180076434 (sub_180076434.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 *     sub_18007E24C @ 0x18007E24C (sub_18007E24C.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800764D0(__int64 a1, __int64 a2, _QWORD *a3)
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
  __int128 *v18; // rbx
  __int64 v19; // rax
  __int128 *v20; // rbx
  __int64 v21; // rax
  __int128 *v22; // rbx
  __int64 v23; // rax
  __int128 *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 result; // rax
  __int128 *v29; // [rsp+38h] [rbp-81h] BYREF
  __int64 v30; // [rsp+40h] [rbp-79h]
  __int128 v31; // [rsp+48h] [rbp-71h] BYREF
  __int64 v32; // [rsp+58h] [rbp-61h] BYREF
  __int64 v33; // [rsp+60h] [rbp-59h]
  _QWORD v34[2]; // [rsp+68h] [rbp-51h] BYREF
  __int128 v35; // [rsp+78h] [rbp-41h]
  __int64 v36; // [rsp+88h] [rbp-31h]
  __int64 v37; // [rsp+90h] [rbp-29h]
  _QWORD v38[8]; // [rsp+A0h] [rbp-19h] BYREF

  v29 = &v31;
  v6 = sub_1800407EC(a1 + 8, &v31);
  v7 = sub_180016F54((__int64)v38, (__int64)&unk_1801C82E8);
  v8 = sub_18004C268(a2, &v32, v7, v6);
  sub_180011010((_QWORD *)(a1 + 56), v8);
  if ( v33 )
    sub_18001050C(v33);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = std::string::string(v38, "Symbol");
  sub_180076434(v9, (__int64)v10);
  sub_1800175E4((void **)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v31 = 0LL;
  v11 = (_DWORD *)*a3;
  v12 = (_DWORD *)a3[1];
  while ( v11 != v12 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = *v11;
    v13 = sub_18005B398(*(_QWORD *)(a1 + 56), &v32, 0LL, 0LL, 1);
    sub_180011010(&v31, v13);
    if ( v33 )
      sub_18001050C(v33);
    v14 = std::string::string(v38, byte_1800F6C80);
    v15 = std::string::string(v34, "Symbol");
    v16 = v14;
    v17 = v31;
    sub_18007E444(v31, v15, 0LL, v16);
    sub_18007E24C(v17, 8, 2, 0, 1);
    LODWORD(v34[0]) = 0;
    v34[1] = 0x100000C0015LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    sub_18007E7DC(v17, v34);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = 0;
    ++v11;
  }
  sub_18004C220(a2, &v29, 4u);
  v18 = v29;
  v19 = sub_180016F54((__int64)v34, (__int64)&unk_1801C8308);
  sub_180041F14((__int64)v38, v19, 7);
  sub_18007965C(v18, v38, 0LL);
  sub_180042330((__int64)v38);
  v20 = v29;
  v21 = sub_180016F54((__int64)v34, (__int64)&unk_1801C8328);
  sub_180041F14((__int64)v38, v21, 5);
  sub_18007965C(v20, v38, 0LL);
  sub_180042330((__int64)v38);
  v22 = v29;
  v23 = sub_180016F54((__int64)v34, (__int64)&unk_1801C8348);
  sub_180041F14((__int64)v38, v23, 2);
  sub_18007965C(v22, v38, 0LL);
  sub_180042330((__int64)v38);
  v24 = v29;
  v25 = sub_180016F54((__int64)v34, (__int64)&unk_1801C8368);
  sub_180041F14((__int64)v38, v25, 2);
  sub_18007965C(v24, v38, 0LL);
  sub_180042330((__int64)v38);
  sub_180079CCC(v29);
  v26 = unknown_libname_81(&v32, &v29);
  sub_18005C16C(v27, v26);
  if ( v30 )
    sub_18001050C(v30);
  result = sub_18005B7F4(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v31 + 1) )
    return sub_18001050C(*((__int64 *)&v31 + 1));
  return result;
}
