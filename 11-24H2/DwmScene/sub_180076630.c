/*
 * XREFs of sub_180076630 @ 0x180076630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_180042490 @ 0x180042490 (sub_180042490.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_180076594 @ 0x180076594 (sub_180076594.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 *     sub_18007E3AC @ 0x18007E3AC (sub_18007E3AC.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_18007E93C @ 0x18007E93C (sub_18007E93C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180076630(__int64 a1, __int64 a2, _QWORD *a3)
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
  v6 = sub_18004094C(a1 + 8, &v31);
  v7 = sub_180017054((__int64)v38, (__int64)&unk_1801C92F8);
  v8 = sub_18004C3C8(a2, &v32, v7, v6);
  sub_180011110((_QWORD *)(a1 + 56), v8);
  if ( v33 )
    sub_18001060C(v33);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = std::string::string(v38, "Symbol");
  sub_180076594(v9, (__int64)v10);
  sub_1800176A4((void **)(*(_QWORD *)(a1 + 56) + 528LL), (__int64)a3);
  v31 = 0LL;
  v11 = (_DWORD *)*a3;
  v12 = (_DWORD *)a3[1];
  while ( v11 != v12 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = *v11;
    v13 = sub_18005B4F8(*(_QWORD *)(a1 + 56), &v32, 0LL, 0LL, 1);
    sub_180011110(&v31, v13);
    if ( v33 )
      sub_18001060C(v33);
    v14 = std::string::string(v38, byte_1800F7C80);
    v15 = std::string::string(v34, "Symbol");
    v16 = v14;
    v17 = v31;
    sub_18007E5A4(v31, v15, 0LL, v16);
    sub_18007E3AC(v17, 8, 2, 0, 1);
    LODWORD(v34[0]) = 0;
    v34[1] = 0x100000C0015LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    sub_18007E93C(v17, v34);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 552LL) = 0;
    ++v11;
  }
  sub_18004C380(a2, &v29, 4u);
  v18 = v29;
  v19 = sub_180017054((__int64)v34, (__int64)&unk_1801C9318);
  sub_180042074((__int64)v38, v19, 7);
  sub_1800797BC(v18, v38, 0LL);
  sub_180042490((__int64)v38);
  v20 = v29;
  v21 = sub_180017054((__int64)v34, (__int64)&unk_1801C9338);
  sub_180042074((__int64)v38, v21, 5);
  sub_1800797BC(v20, v38, 0LL);
  sub_180042490((__int64)v38);
  v22 = v29;
  v23 = sub_180017054((__int64)v34, (__int64)&unk_1801C9358);
  sub_180042074((__int64)v38, v23, 2);
  sub_1800797BC(v22, v38, 0LL);
  sub_180042490((__int64)v38);
  v24 = v29;
  v25 = sub_180017054((__int64)v34, (__int64)&unk_1801C9378);
  sub_180042074((__int64)v38, v25, 2);
  sub_1800797BC(v24, v38, 0LL);
  sub_180042490((__int64)v38);
  sub_180079E2C(v29);
  v26 = unknown_libname_81(&v32, &v29);
  sub_18005C2CC(v27, v26);
  if ( v30 )
    sub_18001060C(v30);
  result = sub_18005B954(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v31 + 1) )
    return sub_18001060C(*((__int64 *)&v31 + 1));
  return result;
}
