/*
 * XREFs of sub_180057AB0 @ 0x180057AB0
 * Callers:
 *     sub_1800846D0 @ 0x1800846D0 (sub_1800846D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18002FFC8 @ 0x18002FFC8 (sub_18002FFC8.c)
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     sub_180037560 @ 0x180037560 (sub_180037560.c)
 *     sub_1800375B8 @ 0x1800375B8 (sub_1800375B8.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004CCE0 @ 0x18004CCE0 (sub_18004CCE0.c)
 *     sub_18004CD78 @ 0x18004CD78 (sub_18004CD78.c)
 *     sub_18005726C @ 0x18005726C (sub_18005726C.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     sub_180058C4C @ 0x180058C4C (sub_180058C4C.c)
 *     sub_18005B9C0 @ 0x18005B9C0 (sub_18005B9C0.c)
 *     sub_180069F34 @ 0x180069F34 (sub_180069F34.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall sub_180057AB0(__int64 a1, __int64 *a2, _QWORD *a3)
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
    sub_1800287EC(*v4 + 24, v6);
    unknown_libname_81(&v45, a3);
    if ( !v45 )
    {
      v7 = sub_1800250E0(*v4, &v72, 0);
      sub_180011010(&v45, v7);
      if ( v73 )
        sub_18001050C(v73);
    }
    sub_180057334(a1, &v43, (__int64)v4);
    v8 = *v4;
    v42 = v8;
    sub_1800287EC(v8 + 24, v9);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 184LL))(v45);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 200LL))(v45, &v54);
    v11 = sub_180015174(&v74, v10);
    sub_1800375B8(v12, v11);
    v13 = sub_180015174(&v63, &v54);
    sub_180037560(v14, v13);
    v15 = sub_180015174(&v64, v10);
    sub_1800375B8(v16, v15);
    v17 = sub_180015174(&v65, &v54);
    sub_180037560(v18, v17);
    if ( v55 )
      sub_180010544(v55);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 104LL))(*v4, &v43);
    sub_180058C4C(a1, &v52);
    sub_18001B4B0(v81, a1 + 24, (__int64)" scene");
    sub_180096C0C(v75, &v43, v81);
    v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v45 + 200LL))(v45, v66);
    sub_18002F2B4(v76, v19);
    if ( v67 )
      sub_180010544(v67);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, v4, a3);
    sub_180011B04(a1 + 56, &v68);
    v60 = v68;
    v20 = (__int64 *)sub_18001258C(v68, &v69);
    v47 = *v20;
    v57 = v47;
    v21 = v20[1];
    v58 = v21;
    *v20 = 0LL;
    v20[1] = 0LL;
    if ( v70 )
      sub_18001050C(v70);
    v22 = *(_QWORD *)(sub_180078418(a1) + 512);
    sub_18004CD78(v22, (__int64 *)v59);
    v23 = *(_QWORD *)v59[0];
    v48 = *(_QWORD *)v59[0];
    while ( !*(_BYTE *)(v23 + 25) )
    {
      v24 = sub_180016F54((__int64)v77, v23 + 32);
      sub_18004CCE0(v22, &v41, v24);
      v25 = v41;
      v26 = (_QWORD *)sub_18005B9C0(v41, &v79);
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64 *))(*(_QWORD *)*v26 + 32LL))(*v26, &v52, &v45);
      if ( v80 )
        sub_18001050C(v80);
      if ( ((*(_DWORD *)(a1 + 316) - 2) & 0xFFFFFFFD) != 0 )
      {
        v27 = (_QWORD *)sub_18005B9C0(v25, v71);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v27 + 96LL))(*v27, *v4);
        v28 = v71[1];
      }
      else
      {
        v29 = (_QWORD *)sub_18005B9C0(v25, v61);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v29 + 96LL))(*v29, *v4);
        v28 = v62;
      }
      if ( v28 )
        sub_18001050C(v28);
      if ( *((_QWORD *)&v41 + 1) )
        sub_18001050C(*((__int64 *)&v41 + 1));
      sub_18001C2C0(&v48);
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
          sub_18005726C(a1, v31);
          v34 = *(_QWORD *)(a1 + 416);
          if ( v34 != *(_QWORD *)(a1 + 424) )
          {
            v35 = *(_QWORD *)(a1 + 424);
            v36 = v47;
            do
            {
              *(_OWORD *)(a1 + 520) = *(_OWORD *)(a1 + 488);
              *(_OWORD *)(a1 + 504) = *(_OWORD *)(a1 + 472);
              sub_180069F34(a1 + 504, *(_QWORD *)(v33 + v32 + 8), 0LL);
              sub_180069F34(v37, *(_QWORD *)(v33 + v32 + 16), 1LL);
              v40 = *(_QWORD *)(v33 + v32 + 24);
              v56 = 0LL;
              if ( *((_QWORD *)&v52 + 1) )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL));
                v36 = v57;
              }
              v56 = v52;
              v38 = sub_180012344((__int64)v78, v34);
              sub_18003F44C(v36, v38, (__int64)&v43, (__int64 *)&v56, (_QWORD *)(v33 + v32 + 32), v40);
              if ( *((_QWORD *)&v56 + 1) )
                sub_18001050C(*((__int64 *)&v56 + 1));
              v34 += 32LL;
            }
            while ( v34 != v35 );
            v47 = v36;
            v4 = v53;
            v31 = v50;
          }
          if ( (*(_BYTE *)(a1 + 440) & 1) != 0 && v49 == v31 )
            sub_1800584E4(a1, &v43);
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
    sub_18004A4F4(v59, (__int64)v59);
    if ( v21 )
      sub_18001050C(v21);
    if ( *((_QWORD *)&v60 + 1) )
      sub_18001050C(*((__int64 *)&v60 + 1));
    sub_18002FFC8((__int64)v76);
    sub_180096CBC(v75);
    sub_180011A5C((__int64)v81);
    if ( (*(_DWORD *)(a1 + 440) & 0x10000) != 0 )
    {
      std::string::string(&v79, "Symbols");
      sub_180096C0C(v61, &v43, &v79);
      v39 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v45 + 200LL))(v45, &v60);
      sub_18002F2B4(v71, v39);
      if ( *((_QWORD *)&v60 + 1) )
        sub_180010544(*((volatile signed __int32 **)&v60 + 1));
      sub_180032AC8();
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 112LL))(*v4, &v43);
    v41 = 0LL;
    sub_1800375B8(v43, (__int64 *)&v41);
    v41 = 0LL;
    sub_180037560(v43, (__int64 *)&v41);
    v41 = 0LL;
    sub_1800375B8(*(_QWORD *)(v8 + 272), (__int64 *)&v41);
    v41 = 0LL;
    sub_180037560(*(_QWORD *)(v8 + 272), (__int64 *)&v41);
    if ( *((_QWORD *)&v52 + 1) )
      sub_18001050C(*((__int64 *)&v52 + 1));
    if ( v44 )
      sub_18001050C(v44);
    if ( v46 )
      sub_18001050C(v46);
  }
}
