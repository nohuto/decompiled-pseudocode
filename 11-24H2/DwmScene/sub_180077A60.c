/*
 * XREFs of sub_180077A60 @ 0x180077A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800176A4 @ 0x1800176A4 (sub_1800176A4.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_18004A654 @ 0x18004A654 (sub_18004A654.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_18005B0FC @ 0x18005B0FC (sub_18005B0FC.c)
 *     sub_18005B4C0 @ 0x18005B4C0 (sub_18005B4C0.c)
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_18005B954 @ 0x18005B954 (sub_18005B954.c)
 *     sub_18005E780 @ 0x18005E780 (sub_18005E780.c)
 *     sub_180076594 @ 0x180076594 (sub_180076594.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 *     sub_18007E3AC @ 0x18007E3AC (sub_18007E3AC.c)
 *     sub_18007E4A4 @ 0x18007E4A4 (sub_18007E4A4.c)
 *     sub_18007E93C @ 0x18007E93C (sub_18007E93C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180077A60(__int64 a1, __int64 a2, _QWORD *a3)
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
  v6 = sub_18004094C(a1 + 8, &v34);
  v7 = sub_180017054((__int64)&v38, (__int64)&unk_1801C9498);
  v8 = sub_18004C3C8(v4, &v36, v7, v6);
  v9 = (__int64 *)(v5 + 56);
  sub_180011110((_QWORD *)(v5 + 56), v8);
  if ( v37 )
    sub_18001060C(v37);
  v10 = *v9;
  v11 = std::string::string(&v38, "BackgroundUnlit");
  sub_180076594(v10, (__int64)v11);
  sub_1800176A4((void **)(*v9 + 528), (__int64)a3);
  sub_18005B0FC(*v9, (__int64)&unk_1801C94B8);
  sub_18005B0FC(*v9, (__int64)&unk_1801C94D8);
  sub_18005B0FC(*v9, (__int64)&unk_1801C94F8);
  sub_18005B0FC(*v9, (__int64)&unk_1801C9518);
  v12 = sub_18005B0FC(*v9, (__int64)&unk_1801C9538);
  sub_180017054((__int64)v40, (__int64)&unk_1801C94B8);
  sub_180017054((__int64)v41, (__int64)&unk_1801C94D8);
  sub_180017054((__int64)v42, (__int64)&unk_1801C94F8);
  sub_180017054((__int64)v43, (__int64)&unk_1801C9518);
  v24.m128i_i64[0] = (__int64)v40;
  v24.m128i_i64[1] = (__int64)&v44;
  sub_18005E780((__int64 *)v33, &v24);
  sub_18000B6A4((__int64)v40, 32LL, 4LL, (void (__fastcall *)(__int64))sub_180011020);
  sub_180059D50(v24.m128i_i64, v33);
  v24.m128i_i64[0] = sub_18004C7A4(v4, (void **)&v24);
  v13 = sub_18005B0FC(*v9, (__int64)&unk_1801C9558);
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
      v18 = (__int64 *)sub_18005B4C0(*v9, (__int64)&v36, v12);
      sub_180011110(&v25, v18);
      if ( v37 )
        sub_18001060C(v37);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v19 = v25;
      sub_18007E93C(v25, &v26);
      sub_18007E3AC(v19, 0, 1, 3, 1);
      v20 = std::string::string(&v26, byte_1800F7C80);
      sub_18007E4A4(v19, 5LL, v20);
      v21 = sub_18005B4F8(*v9, &v34, v17, 0LL, 1);
      sub_180011110(&v25, v21);
      if ( v35 )
        sub_18001060C(v35);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      sub_18007E93C(v25, &v26);
      sub_18007E3AC(v25, 0, 1, 1, 1);
      v22 = (__int64 *)sub_18005B4C0(*v9, (__int64)&v38, v16);
      sub_180011110(&v25, v22);
      if ( v39 )
        sub_18001060C(v39);
      LODWORD(v26) = 0;
      v27 = 1LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      sub_18007E93C(v25, &v26);
      sub_18007E3AC(v25, 1, 1, 1, 1);
      *(_DWORD *)(*v9 + 552) = 0;
      if ( *((_QWORD *)&v25 + 1) )
        sub_18001060C(*((__int64 *)&v25 + 1));
      ++v14;
    }
    while ( v14 != v15 );
    v5 = v31;
    v4 = v32;
  }
  sub_180077074(v5, v4);
  sub_18005B954(*v9);
  return sub_18004A654(v33, (__int64)v33);
}
