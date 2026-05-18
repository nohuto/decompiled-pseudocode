/*
 * XREFs of sub_18006B954 @ 0x18006B954
 * Callers:
 *     sub_18002A660 @ 0x18002A660 (sub_18002A660.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_180013DD4 @ 0x180013DD4 (sub_180013DD4.c)
 *     sub_1800142A4 @ 0x1800142A4 (sub_1800142A4.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_180028444 @ 0x180028444 (sub_180028444.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_180039B28 @ 0x180039B28 (sub_180039B28.c)
 *     sub_18003DD54 @ 0x18003DD54 (sub_18003DD54.c)
 *     sub_18003E0B8 @ 0x18003E0B8 (sub_18003E0B8.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 *     sub_180041928 @ 0x180041928 (sub_180041928.c)
 *     sub_180049780 @ 0x180049780 (sub_180049780.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_1800556E0 @ 0x1800556E0 (sub_1800556E0.c)
 *     sub_18005B17C @ 0x18005B17C (sub_18005B17C.c)
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 *     sub_18006A24C @ 0x18006A24C (sub_18006A24C.c)
 *     sub_180082BD8 @ 0x180082BD8 (sub_180082BD8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18006B954(__int64 a1, __int64 a2)
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
  v5 = (__int64 *)sub_18003E0B8(&v36, v4);
  v6 = (__int64 *)(a1 + 288);
  sub_180011010((_QWORD *)(a1 + 288), v5);
  if ( v37 )
    sub_18001050C(v37);
  v33 = &v35;
  v35 = 0LL;
  v7 = *(_QWORD *)(a1 + 296);
  if ( v7 )
  {
    *(_QWORD *)&v35 = (*v6 + 16) & -(__int64)(*v6 != 0);
    *((_QWORD *)&v35 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = (_QWORD *)sub_180011C64(*(_QWORD *)(a1 + 32) + 8LL, &v61);
  v44[0] = (*v8 + 24LL) & -(__int64)(*v8 != 0LL);
  v44[1] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  sub_180028444((__int64)v44, (__int64)&v35);
  if ( v62 )
    sub_18001050C(v62);
  v9 = *v6;
  v10 = sub_180012344((__int64)v44, (__int64)&unk_1801C4048);
  std::string::string(&v61, "ImageProcessingCamera");
  v11 = sub_180039B28((__int64)&v61);
  sub_18003DD54(v9, (__int64)&v36, v11, v10);
  sub_180011A5C((__int64)&v61);
  v12 = sub_18006A24C((__int64)v36, &v47);
  v13 = (__int64 *)(a1 + 272);
  sub_180011010((_QWORD *)(a1 + 272), v12);
  if ( v48 )
    sub_18001050C(v48);
  sub_1800556E0(*v13, (__int64)&unk_1801C4008);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v13 + 16LL))(*v13);
  v14 = sub_180015D88(*(__int64 **)(a2 + 3648), &v45);
  v15 = (__int64 *)(a1 + 304);
  sub_180011010((_QWORD *)(a1 + 304), v14);
  if ( v46 )
    sub_18001050C(v46);
  v16 = *v15;
  v17 = std::string::string(&v45, "Image Processing Manager Sampler");
  sub_180027C24(v16, (__int64)v17);
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
  sub_180050750(*v15, v40, 0LL);
  v18 = *(_QWORD *)(v4 + 512);
  v19 = sub_180016F54((__int64)&v45, (__int64)&unk_1801C7F08);
  v20 = sub_18004CCE0(v18, &v49, v19);
  v21 = (__int64 *)(a1 + 432);
  sub_180011010((_QWORD *)(a1 + 432), v20);
  if ( v50 )
    sub_18001050C(v50);
  v22 = (__int64 *)sub_18005BBB4(*v21, &v51);
  sub_180011010((_QWORD *)(a1 + 416), v22);
  if ( v52 )
    sub_18001050C(v52);
  v23 = sub_18005B17C(*v21, &v53);
  sub_180011010((_QWORD *)(a1 + 400), v23);
  if ( v54 )
    sub_18001050C(v54);
  v24 = sub_1800323A0(*(_QWORD *)(a2 + 3648), 1);
  *(_DWORD *)(a1 + 448) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v24 + 72LL))(
                            v24,
                            &unk_1801C59A8,
                            0LL);
  sub_180041928(*(_QWORD *)(a1 + 400), (__int64)&unk_1801C8208, 1);
  v25 = (__int64 *)sub_180082BD8(v55, v4);
  sub_180011010((_QWORD *)(a1 + 320), v25);
  if ( v56 )
    sub_18001050C(v56);
  v26 = *v6;
  v27 = sub_180012344((__int64)v55, (__int64)&unk_1801C4008);
  sub_18003EA7C(v26, (__int64)&v38, v27);
  sub_180013DD4(v38, &v33);
  v28 = (__int64)v33;
  if ( !v33 )
  {
    v29 = sub_180013BEC(v38, &v57);
    sub_180011010(&v33, v29);
    if ( v58 )
      sub_18001050C(v58);
    v28 = (__int64)v33;
  }
  v30 = unknown_libname_81(&v59, (_QWORD *)(a1 + 320));
  sub_1800142A4(v28, v30);
  v31 = unknown_libname_81(&v60, (_QWORD *)(a1 + 368));
  sub_180049780(v28, v31);
  *(_BYTE *)(v28 + 72) = 0;
  result = (__int64)sub_1800391E4((_QWORD *)(a1 + 336), &v33);
  if ( v34 )
    result = sub_18001050C(v34);
  if ( v39 )
    result = sub_18001050C(v39);
  if ( v37 )
    return sub_18001050C(v37);
  return result;
}
