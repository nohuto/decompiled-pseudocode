/*
 * XREFs of sub_180077900 @ 0x180077900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800175E4 @ 0x1800175E4 (sub_1800175E4.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     sub_18005AF9C @ 0x18005AF9C (sub_18005AF9C.c)
 *     sub_18005B360 @ 0x18005B360 (sub_18005B360.c)
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 *     sub_180076434 @ 0x180076434 (sub_180076434.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 *     sub_18007E24C @ 0x18007E24C (sub_18007E24C.c)
 *     sub_18007E344 @ 0x18007E344 (sub_18007E344.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180077900(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  char v12; // r13
  char v13; // al
  _DWORD *v14; // rsi
  _DWORD *v15; // r12
  char v16; // r14
  __int64 v17; // r15
  __int64 *v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __m128i v24; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int128 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  void *v33[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-38h]
  _BYTE v40[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v41[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v42[32]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v43[32]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v44; // [rsp+160h] [rbp+60h] BYREF

  v4 = a2;
  v32 = a2;
  v5 = a1;
  v31 = a1;
  v24.m128i_i64[0] = (__int64)&v34;
  v6 = sub_1800407EC(a1 + 8, &v34);
  v7 = sub_180016F54((__int64)&v38, (__int64)&unk_1801C8488);
  v8 = sub_18004C268(v4, &v36, v7, v6);
  v9 = (__int64 *)(v5 + 56);
  sub_180011010((_QWORD *)(v5 + 56), v8);
  if ( v37 )
    sub_18001050C(v37);
  v10 = *v9;
  v11 = std::string::string(&v38, "BackgroundUnlit");
  sub_180076434(v10, (__int64)v11);
  sub_1800175E4((void **)(*v9 + 528), (__int64)a3);
  sub_18005AF9C(*v9, (__int64)&unk_1801C84A8);
  sub_18005AF9C(*v9, (__int64)&unk_1801C84C8);
  sub_18005AF9C(*v9, (__int64)&unk_1801C84E8);
  sub_18005AF9C(*v9, (__int64)&unk_1801C8508);
  v12 = sub_18005AF9C(*v9, (__int64)&unk_1801C8528);
  sub_180016F54((__int64)v40, (__int64)&unk_1801C84A8);
  sub_180016F54((__int64)v41, (__int64)&unk_1801C84C8);
  sub_180016F54((__int64)v42, (__int64)&unk_1801C84E8);
  sub_180016F54((__int64)v43, (__int64)&unk_1801C8508);
  v24.m128i_i64[0] = (__int64)v40;
  v24.m128i_i64[1] = (__int64)&v44;
  sub_18005E620((__int64 *)v33, &v24);
  sub_18000B2D4((__int64)v40, 32LL, 4LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v24.m128i_i64, v33);
  v24.m128i_i64[0] = sub_18004C644(v4, (void **)&v24);
  v13 = sub_18005AF9C(*v9, (__int64)&unk_1801C8548);
  v14 = (_DWORD *)*a3;
  v15 = (_DWORD *)a3[1];
  if ( v14 != v15 )
  {
    v16 = v13;
    v17 = v24.m128i_i64[0];
    do
    {
      *(_DWORD *)(*v9 + 552) = *v14;
      v25 = 0LL;
      v18 = (__int64 *)sub_18005B360(*v9, (__int64)&v36, v12);
      sub_180011010(&v25, v18);
      if ( v37 )
        sub_18001050C(v37);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v19 = v25;
      sub_18007E7DC(v25, &v26);
      sub_18007E24C(v19, 0, 1, 3, 1);
      v20 = std::string::string(&v26, byte_1800F6C80);
      sub_18007E344(v19, 5LL, v20);
      v21 = sub_18005B398(*v9, &v34, v17, 0LL, 1);
      sub_180011010(&v25, v21);
      if ( v35 )
        sub_18001050C(v35);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      sub_18007E7DC(v25, &v26);
      sub_18007E24C(v25, 0, 1, 1, 1);
      v22 = (__int64 *)sub_18005B360(*v9, (__int64)&v38, v16);
      sub_180011010(&v25, v22);
      if ( v39 )
        sub_18001050C(v39);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      sub_18007E7DC(v25, &v26);
      sub_18007E24C(v25, 1, 1, 1, 1);
      *(_DWORD *)(*v9 + 552) = 0;
      if ( *((_QWORD *)&v25 + 1) )
        sub_18001050C(*((__int64 *)&v25 + 1));
      ++v14;
    }
    while ( v14 != v15 );
    v5 = v31;
    v4 = v32;
  }
  sub_180076F14(v5, v4);
  sub_18005B7F4(*v9);
  return sub_18004A4F4(v33, (__int64)v33);
}
