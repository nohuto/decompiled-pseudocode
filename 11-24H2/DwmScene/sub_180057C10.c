/*
 * XREFs of sub_180057C10 @ 0x180057C10
 * Callers:
 *     sub_180084830 @ 0x180084830 (sub_180084830.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_180030128 @ 0x180030128 (sub_180030128.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     sub_1800376C0 @ 0x1800376C0 (sub_1800376C0.c)
 *     sub_180037718 @ 0x180037718 (sub_180037718.c)
 *     sub_18003F5AC @ 0x18003F5AC (sub_18003F5AC.c)
 *     sub_18004A654 @ 0x18004A654 (sub_18004A654.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18004CED8 @ 0x18004CED8 (sub_18004CED8.c)
 *     sub_1800573CC @ 0x1800573CC (sub_1800573CC.c)
 *     sub_180057494 @ 0x180057494 (sub_180057494.c)
 *     sub_180058644 @ 0x180058644 (sub_180058644.c)
 *     sub_180058DAC @ 0x180058DAC (sub_180058DAC.c)
 *     sub_18005BB20 @ 0x18005BB20 (sub_18005BB20.c)
 *     sub_18006A094 @ 0x18006A094 (sub_18006A094.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_180096D6C @ 0x180096D6C (sub_180096D6C.c)
 *     sub_180096E1C @ 0x180096E1C (sub_180096E1C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall sub_180057C10(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // rsi
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // r14
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+40h] [rbp-C0h]
  __int128 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  unsigned __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v55; // [rsp+D0h] [rbp-30h]
  __int128 v56; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  void *v59[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v60; // [rsp+110h] [rbp+10h] BYREF
  char v61[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h] BYREF
  __int64 v64; // [rsp+140h] [rbp+40h] BYREF
  __int64 v65; // [rsp+150h] [rbp+50h] BYREF
  char v66[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v67; // [rsp+168h] [rbp+68h]
  __int128 v68; // [rsp+170h] [rbp+70h] BYREF
  __int64 v69; // [rsp+180h] [rbp+80h] BYREF
  __int64 v70; // [rsp+188h] [rbp+88h]
  __int64 v71[3]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v72; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v75[16]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v76[3]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v77[32]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v78[32]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v79; // [rsp+230h] [rbp+130h] BYREF
  __int64 v80; // [rsp+238h] [rbp+138h]
  __int64 v81[4]; // [rsp+250h] [rbp+150h] BYREF

  v4 = a2;
  v53 = a2;
  if ( *(_BYTE *)(a1 + 72) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2) )
  {
    sub_18002894C(*v4 + 24, v6);
    unknown_libname_81(&v45, a3);
    if ( !v45 )
    {
      v7 = sub_180025240(*v4, &v72, 0);
      sub_180011110(&v45, v7);
      if ( v73 )
        sub_18001060C(v73);
    }
    sub_180057494(a1, &v43, (__int64)v4);
    v8 = *v4;
    v42 = v8;
    sub_18002894C(v8 + 24, v9);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 184LL))(v45);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 200LL))(v45, &v54);
    v11 = sub_180015274(&v74, v10);
    sub_180037718(v12, v11);
    v13 = sub_180015274(&v63, &v54);
    sub_1800376C0(v14, v13);
    v15 = sub_180015274(&v64, v10);
    sub_180037718(v16, v15);
    v17 = sub_180015274(&v65, &v54);
    sub_1800376C0(v18, v17);
    if ( v55 )
      sub_180010644(v55);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 104LL))(*v4, &v43);
    sub_180058DAC(a1, &v52);
    sub_18001B610(v81, a1 + 24, (__int64)" scene");
    sub_180096D6C(v75, &v43, v81);
    v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 200LL))(v45, v66);
    sub_18002F414(v76, v19);
    if ( v67 )
      sub_180010644(v67);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, v4, a3);
    sub_180011C04(a1 + 56, &v68);
    v60 = v68;
    v20 = (__int64 *)sub_18001268C(v68, &v69);
    v47 = *v20;
    v57 = v47;
    v21 = v20[1];
    v58 = v21;
    *v20 = 0LL;
    v20[1] = 0LL;
    if ( v70 )
      sub_18001060C(v70);
    v22 = *(_QWORD *)(sub_180078578(a1) + 512);
    sub_18004CED8(v22, (__int64 *)v59);
    v23 = *(_QWORD *)v59[0];
    v48 = *(_QWORD *)v59[0];
    while ( !*(_BYTE *)(v23 + 25) )
    {
      v24 = sub_180017054((__int64)v77, v23 + 32);
      sub_18004CE40(v22, &v41, v24);
      v25 = v41;
      v26 = (_QWORD *)sub_18005BB20(v41, &v79);
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64 *))(*(_QWORD *)*v26 + 32LL))(*v26, &v52, &v45);
      if ( v80 )
        sub_18001060C(v80);
      if ( ((*(_DWORD *)(a1 + 316) - 2) & 0xFFFFFFFD) != 0 )
      {
        v27 = (_QWORD *)sub_18005BB20(v25, v71);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v27 + 96LL))(*v27, *v4);
        v28 = v71[1];
      }
      else
      {
        v29 = (_QWORD *)sub_18005BB20(v25, v61);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v29 + 96LL))(*v29, *v4);
        v28 = v62;
      }
      if ( v28 )
        sub_18001060C(v28);
      if ( *((_QWORD *)&v41 + 1) )
        sub_18001060C(*((__int64 *)&v41 + 1));
      sub_18001C420(&v48);
      v23 = v48;
    }
    v30 = *(int *)(a1 + 168);
    v51 = v30;
    if ( *(_DWORD *)(a1 + 176) == -1 )
    {
      v49 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4) - 1;
      v30 = v51;
    }
    else
    {
      v49 = *(int *)(a1 + 176);
    }
    v31 = 0LL;
    v50 = 0LL;
    v32 = *(_QWORD *)(a1 + 104);
    if ( 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v32) >> 4) )
    {
      v33 = 0LL;
      do
      {
        if ( *(_BYTE *)(v33 + v32)
          && (v31 != v30 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v4 + 96LL))(*v4, 9LL)) )
        {
          sub_1800573CC(a1, v31);
          v34 = *(_QWORD *)(a1 + 416);
          if ( v34 != *(_QWORD *)(a1 + 424) )
          {
            v35 = *(_QWORD *)(a1 + 424);
            v36 = v47;
            do
            {
              *(_OWORD *)(a1 + 520) = *(_OWORD *)(a1 + 488);
              *(_OWORD *)(a1 + 504) = *(_OWORD *)(a1 + 472);
              sub_18006A094(a1 + 504, *(_QWORD *)(v33 + v32 + 8), 0LL);
              sub_18006A094(v37, *(_QWORD *)(v33 + v32 + 16), 1LL);
              v40 = *(_QWORD *)(v33 + v32 + 24);
              v56 = 0LL;
              if ( *((_QWORD *)&v52 + 1) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL));
                v36 = v57;
              }
              v56 = v52;
              v38 = sub_180012444((__int64)v78, v34);
              sub_18003F5AC(v36, v38, (__int64)&v43, (__int64 *)&v56, (_QWORD *)(v33 + v32 + 32), v40);
              if ( *((_QWORD *)&v56 + 1) )
                sub_18001060C(*((__int64 *)&v56 + 1));
              v34 += 32LL;
            }
            while ( v34 != v35 );
            v47 = v36;
            v4 = v53;
            v31 = v50;
          }
          if ( (*(_BYTE *)(a1 + 440) & 1) != 0 && v49 == v31 )
            sub_180058644(a1, &v43);
        }
        v50 = ++v31;
        v33 += 48LL;
        v32 = *(_QWORD *)(a1 + 104);
        v30 = v51;
      }
      while ( v31 < 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v32) >> 4) );
      v21 = v58;
      v8 = v42;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
    sub_18004A654(v59, (__int64)v59);
    if ( v21 )
      sub_18001060C(v21);
    if ( *((_QWORD *)&v60 + 1) )
      sub_18001060C(*((__int64 *)&v60 + 1));
    sub_180030128((__int64)v76);
    sub_180096E1C(v75);
    sub_180011B5C((__int64)v81);
    if ( (*(_DWORD *)(a1 + 440) & 0x10000) != 0 )
    {
      std::string::string(&v79, "Symbols");
      sub_180096D6C(v61, &v43, &v79);
      v39 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v45 + 200LL))(v45, &v60);
      sub_18002F414(v71, v39);
      if ( *((_QWORD *)&v60 + 1) )
        sub_180010644(*((volatile signed __int32 **)&v60 + 1));
      sub_180032C28();
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 112LL))(*v4, &v43);
    v41 = 0LL;
    sub_180037718(v43, (__int64 *)&v41);
    v41 = 0LL;
    sub_1800376C0(v43, (__int64 *)&v41);
    v41 = 0LL;
    sub_180037718(*(_QWORD *)(v8 + 272), (__int64 *)&v41);
    v41 = 0LL;
    sub_1800376C0(*(_QWORD *)(v8 + 272), (__int64 *)&v41);
    if ( *((_QWORD *)&v52 + 1) )
      sub_18001060C(*((__int64 *)&v52 + 1));
    if ( v44 )
      sub_18001060C(v44);
    if ( v46 )
      sub_18001060C(v46);
  }
}
