/*
 * XREFs of sub_1800769C0 @ 0x1800769C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_180076594 @ 0x180076594 (sub_180076594.c)
 *     sub_1800796F0 @ 0x1800796F0 (sub_1800796F0.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 *     sub_18007E3AC @ 0x18007E3AC (sub_18007E3AC.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_18007E93C @ 0x18007E93C (sub_18007E93C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800769C0(__int64 a1, __int64 a2, _QWORD *a3)
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
  v6 = sub_18004094C(a1 + 8, &v25);
  v7 = sub_180017054((__int64)v28, (__int64)&unk_1801C93F8);
  v8 = sub_18004C3C8(a2, &v26, v7, v6);
  sub_180011110((_QWORD *)(a1 + 56), v8);
  if ( v27 )
    sub_18001060C(v27);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = std::string::string(v28, "Font");
  sub_180076594(v9, (__int64)v10);
  sub_1800176A4((void **)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v25 = 0LL;
  v11 = (_DWORD *)*a3;
  v12 = (_DWORD *)a3[1];
  while ( v11 != v12 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = *v11;
    v13 = sub_18005B4F8(*(_QWORD *)(a1 + 56), &v26, 0LL, 0LL, 1);
    sub_180011110(&v25, v13);
    if ( v27 )
      sub_18001060C(v27);
    v14 = std::string::string(v28, byte_1800F7C80);
    v15 = std::string::string(v29, "Font");
    v16 = v14;
    v17 = v25;
    sub_18007E5A4(v25, v15, 0LL, v16);
    sub_18007E3AC(v17, 8, 2, 0, 1);
    LODWORD(v29[0]) = 0;
    v29[1] = 0x10000040031LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    sub_18007E93C(v17, v29);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = 0;
    ++v11;
  }
  sub_18004C380(a2, &v23, 2u);
  v18 = sub_180017054((__int64)v29, (__int64)&unk_1801C9438);
  sub_180042074((__int64)v33, v18, 5);
  v19 = sub_180017054((__int64)v28, (__int64)&unk_1801C9418);
  sub_180042074((__int64)v34, v19, 8);
  sub_1800796F0(v23, v33, 2LL, 0LL);
  sub_180079E2C(v23);
  v20 = unknown_libname_81(&v26, &v23);
  sub_18005C2CC(v21, v20);
  sub_18000B6A4((__int64)v33, 64LL, 2LL, (void (__fastcall *)(__int64))sub_180042490);
  if ( v24 )
    sub_18001060C(v24);
  result = sub_18005B954(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v25 + 1) )
    return sub_18001060C(*((__int64 *)&v25 + 1));
  return result;
}
