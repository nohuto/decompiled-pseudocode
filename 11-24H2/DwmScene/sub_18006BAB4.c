/*
 * XREFs of sub_18006BAB4 @ 0x18006BAB4
 * Callers:
 *     sub_18002A7C0 @ 0x18002A7C0 (sub_18002A7C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013CEC @ 0x180013CEC (sub_180013CEC.c)
 *     sub_180013ED4 @ 0x180013ED4 (sub_180013ED4.c)
 *     sub_1800143A4 @ 0x1800143A4 (sub_1800143A4.c)
 *     sub_180015E88 @ 0x180015E88 (sub_180015E88.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_1800285A4 @ 0x1800285A4 (sub_1800285A4.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180039344 @ 0x180039344 (sub_180039344.c)
 *     sub_180039C88 @ 0x180039C88 (sub_180039C88.c)
 *     sub_18003DEB4 @ 0x18003DEB4 (sub_18003DEB4.c)
 *     sub_18003E218 @ 0x18003E218 (sub_18003E218.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_1800498E0 @ 0x1800498E0 (sub_1800498E0.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_1800508B0 @ 0x1800508B0 (sub_1800508B0.c)
 *     sub_180055840 @ 0x180055840 (sub_180055840.c)
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 *     sub_18005BD14 @ 0x18005BD14 (sub_18005BD14.c)
 *     sub_18006A3AC @ 0x18006A3AC (sub_18006A3AC.c)
 *     sub_180082D38 @ 0x180082D38 (sub_180082D38.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18006BAB4(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 result; // rax
  __int128 *v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int128 v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  _DWORD v40[7]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v41; // [rsp+84h] [rbp-7Ch]
  int v42; // [rsp+94h] [rbp-6Ch]
  int v43; // [rsp+98h] [rbp-68h]
  _QWORD v44[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-8h]
  __int64 v51; // [rsp+100h] [rbp+0h] BYREF
  __int64 v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h] BYREF
  __int64 v54; // [rsp+118h] [rbp+18h]
  _BYTE v55[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v56; // [rsp+128h] [rbp+28h]
  __int64 v57; // [rsp+140h] [rbp+40h] BYREF
  __int64 v58; // [rsp+148h] [rbp+48h]
  __int64 v59; // [rsp+150h] [rbp+50h] BYREF
  __int64 v60; // [rsp+160h] [rbp+60h] BYREF
  __int64 v61; // [rsp+170h] [rbp+70h] BYREF
  __int64 v62; // [rsp+178h] [rbp+78h]

  *(_QWORD *)(a1 + 32) = a2;
  v4 = *(_QWORD *)(a2 + 3648);
  v5 = (__int64 *)sub_18003E218(&v36, v4);
  v6 = (__int64 *)(a1 + 288);
  sub_180011110((_QWORD *)(a1 + 288), v5);
  if ( v37 )
    sub_18001060C(v37);
  v33 = &v35;
  v35 = 0LL;
  v7 = *(_QWORD *)(a1 + 296);
  if ( v7 )
  {
    *(_QWORD *)&v35 = (*v6 + 16) & -(__int64)(*v6 != 0);
    *((_QWORD *)&v35 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = (_QWORD *)sub_180011D64(*(_QWORD *)(a1 + 32) + 8LL, &v61);
  v44[0] = (*v8 + 24LL) & -(__int64)(*v8 != 0LL);
  v44[1] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  sub_1800285A4((__int64)v44, (__int64)&v35);
  if ( v62 )
    sub_18001060C(v62);
  v9 = *v6;
  v10 = sub_180012444((__int64)v44, (__int64)&unk_1801C5058);
  std::string::string(&v61, "ImageProcessingCamera");
  v11 = sub_180039C88((__int64)&v61);
  sub_18003DEB4(v9, (__int64)&v36, v11, v10);
  sub_180011B5C((__int64)&v61);
  v12 = sub_18006A3AC((__int64)v36, &v47);
  v13 = (__int64 *)(a1 + 272);
  sub_180011110((_QWORD *)(a1 + 272), v12);
  if ( v48 )
    sub_18001060C(v48);
  sub_180055840(*v13, (__int64)&unk_1801C5018);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v13 + 16LL))(*v13);
  v14 = sub_180015E88(*(__int64 **)(a2 + 3648), &v45);
  v15 = (__int64 *)(a1 + 304);
  sub_180011110((_QWORD *)(a1 + 304), v14);
  if ( v46 )
    sub_18001060C(v46);
  v16 = *v15;
  v17 = std::string::string(&v45, "Image Processing Manager Sampler");
  sub_180027D84(v16, (__int64)v17);
  v40[1] = 0;
  v40[2] = 0;
  v40[3] = 0;
  v40[4] = 0;
  v40[5] = 1;
  v40[6] = 7;
  v42 = 0;
  v43 = 2139095039;
  v40[0] = 2;
  v41 = 0LL;
  sub_1800508B0(*v15, v40, 0LL);
  v18 = *(_QWORD *)(v4 + 512);
  v19 = sub_180017054((__int64)&v45, (__int64)&unk_1801C8F18);
  v20 = sub_18004CE40(v18, &v49, v19);
  v21 = (__int64 *)(a1 + 432);
  sub_180011110((_QWORD *)(a1 + 432), v20);
  if ( v50 )
    sub_18001060C(v50);
  v22 = (__int64 *)sub_18005BD14(*v21, &v51);
  sub_180011110((_QWORD *)(a1 + 416), v22);
  if ( v52 )
    sub_18001060C(v52);
  v23 = sub_18005B2DC(*v21, &v53);
  sub_180011110((_QWORD *)(a1 + 400), v23);
  if ( v54 )
    sub_18001060C(v54);
  v24 = sub_180032500(*(_QWORD *)(a2 + 3648), 1);
  *(_DWORD *)(a1 + 448) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v24 + 72LL))(
                            v24,
                            &unk_1801C69B8,
                            0LL);
  sub_180041A88(*(_QWORD *)(a1 + 400), (__int64)&unk_1801C9218, 1);
  v25 = (__int64 *)sub_180082D38(v55, v4);
  sub_180011110((_QWORD *)(a1 + 320), v25);
  if ( v56 )
    sub_18001060C(v56);
  v26 = *v6;
  v27 = sub_180012444((__int64)v55, (__int64)&unk_1801C5018);
  sub_18003EBDC(v26, (__int64)&v38, v27);
  sub_180013ED4(v38, &v33);
  v28 = (__int64)v33;
  if ( !v33 )
  {
    v29 = sub_180013CEC(v38, &v57);
    sub_180011110(&v33, v29);
    if ( v58 )
      sub_18001060C(v58);
    v28 = (__int64)v33;
  }
  v30 = unknown_libname_81(&v59, (_QWORD *)(a1 + 320));
  sub_1800143A4(v28, v30);
  v31 = unknown_libname_81(&v60, (_QWORD *)(a1 + 368));
  sub_1800498E0(v28, v31);
  *(_BYTE *)(v28 + 72) = 0;
  result = (__int64)sub_180039344((_QWORD *)(a1 + 336), &v33);
  if ( v34 )
    result = sub_18001060C(v34);
  if ( v39 )
    result = sub_18001060C(v39);
  if ( v37 )
    return sub_18001060C(v37);
  return result;
}
