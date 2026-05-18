/*
 * XREFs of sub_18007D894 @ 0x18007D894
 * Callers:
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180040908 @ 0x180040908 (sub_180040908.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_1800415B8 @ 0x1800415B8 (sub_1800415B8.c)
 *     sub_18004CDF0 @ 0x18004CDF0 (sub_18004CDF0.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_18005BC94 @ 0x18005BC94 (sub_18005BC94.c)
 *     sub_18007CC7C @ 0x18007CC7C (sub_18007CC7C.c)
 *     sub_18007CDE8 @ 0x18007CDE8 (sub_18007CDE8.c)
 *     sub_18007D18C @ 0x18007D18C (sub_18007D18C.c)
 *     sub_18007D1F4 @ 0x18007D1F4 (sub_18007D1F4.c)
 *     sub_18007D25C @ 0x18007D25C (sub_18007D25C.c)
 *     sub_18007D2C4 @ 0x18007D2C4 (sub_18007D2C4.c)
 *     sub_18007D32C @ 0x18007D32C (sub_18007D32C.c)
 *     sub_18007D4F0 @ 0x18007D4F0 (sub_18007D4F0.c)
 *     sub_18007E078 @ 0x18007E078 (sub_18007E078.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 *     sub_18008136C @ 0x18008136C (sub_18008136C.c)
 *     sub_180081F40 @ 0x180081F40 (sub_180081F40.c)
 *     sub_180082224 @ 0x180082224 (sub_180082224.c)
 *     sub_180082320 @ 0x180082320 (sub_180082320.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18007D894(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r15
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // r9d
  int v11; // ecx
  char v12; // al
  unsigned int v13; // eax
  char v14; // cl
  __int64 *v15; // rax
  __int64 *v16; // r14
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 *v19; // r14
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 *v22; // r14
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 result; // rax
  __int64 *v36; // rax
  char v37; // si
  __int64 v38; // rcx
  __int64 *v39; // rax
  char v40; // si
  __int64 v41; // rcx
  __int64 *v42; // rax
  char v43; // si
  __int64 v44; // rcx
  __int64 *v45; // rax
  char v46; // si
  __int64 v47; // rcx
  __int64 v48; // r12
  void (__fastcall *v49)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *); // r15
  __int64 *v50; // r14
  __int64 *v51; // rsi
  __int64 *v52; // rdi
  __int64 *v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+48h] [rbp-B8h]
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+78h] [rbp-88h]
  int v65; // [rsp+80h] [rbp-80h] BYREF
  __int64 v66; // [rsp+84h] [rbp-7Ch]
  int v67; // [rsp+8Ch] [rbp-74h]
  int v68; // [rsp+90h] [rbp-70h]
  int v69; // [rsp+94h] [rbp-6Ch]
  char v70; // [rsp+98h] [rbp-68h]
  __int128 v71; // [rsp+9Ch] [rbp-64h]
  __int128 v72; // [rsp+ACh] [rbp-54h]
  int v73; // [rsp+BCh] [rbp-44h]
  char v74; // [rsp+C0h] [rbp-40h]
  int v75; // [rsp+C4h] [rbp-3Ch]
  __int64 v76; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-18h]
  __int64 v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  __int64 v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h] BYREF
  __int64 v84; // [rsp+110h] [rbp+10h]
  _QWORD v85[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v86[4]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v87; // [rsp+148h] [rbp+48h] BYREF
  __int64 v88; // [rsp+158h] [rbp+58h] BYREF
  __int64 v89[11]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v90; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v91; // [rsp+1D8h] [rbp+D8h]
  unsigned int v92; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v93; // [rsp+1E8h] [rbp+E8h]

  v91 = a2;
  v2 = a2;
  v90 = 0;
  sub_1800287EC(*a2 + 24, (__int64)a2);
  v4 = *v2;
  v5 = *(_DWORD *)(*v2 + 244);
  v92 = v5;
  v6 = *(_QWORD *)(v4 + 3648);
  v7 = (__int64 *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v8 = sub_180040908(*(_QWORD *)(v4 + 3648), &v59);
    sub_180011010((_QWORD *)(a1 + 48), v8);
    if ( v60 )
      sub_18001050C(v60);
    sub_180027C70(*v7, 1, 0);
    v65 = 0;
    v66 = 2LL;
    v67 &= v9;
    v68 &= v9;
    v69 &= v9;
    v70 = 0;
    v71 = 0LL;
    v72 = 0LL;
    v73 = 65793;
    v74 = v10;
    v75 = 3;
    if ( ((unsigned __int8)v10 & *(_BYTE *)(a1 + 124)) != 0 )
    {
      HIDWORD(v66) = *(_DWORD *)(a1 + 112);
      LODWORD(v66) = *(_DWORD *)(a1 + 116);
      LOBYTE(v73) = *(_BYTE *)(a1 + 125);
      v11 = *(_DWORD *)(a1 + 120);
      v12 = v10;
      if ( ((v11 - 1) & 0xFFFFFFFD) != 0 )
        v12 = 0;
      BYTE1(v73) = v12;
      v13 = v11 - 2;
      v14 = v10;
      if ( v13 > v10 )
        v14 = 0;
      BYTE2(v73) = v14;
    }
    sub_18007EEC0(*v7, &v65, v9);
    if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
    {
      LODWORD(v66) = 1;
      v15 = sub_180040908(v6, &v59);
      v16 = (__int64 *)(a1 + 64);
      sub_180011010((_QWORD *)(a1 + 64), v15);
      if ( v60 )
        sub_18001050C(v60);
      sub_180027C70(*v16, 1, 0);
      sub_18007EEC0(*v16, &v65, v17);
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
    {
      LODWORD(v66) = 1;
      v74 = 0;
      v18 = sub_180040908(v6, &v59);
      v19 = (__int64 *)(a1 + 80);
      sub_180011010((_QWORD *)(a1 + 80), v18);
      if ( v60 )
        sub_18001050C(v60);
      sub_180027C70(*v19, 1, 0);
      sub_18007EEC0(*v19, &v65, v20);
    }
    if ( (*(_BYTE *)(a1 + 124) & 8) != 0 )
    {
      LODWORD(v66) = *(_DWORD *)(a1 + 116);
      v74 = 0;
      v21 = sub_180040908(v6, &v59);
      v22 = (__int64 *)(a1 + 96);
      sub_180011010((_QWORD *)(a1 + 96), v21);
      if ( v60 )
        sub_18001050C(v60);
      sub_180027C70(*v22, 1, 0);
      sub_18007EEC0(*v22, &v65, v23);
    }
  }
  if ( !sub_1800415B8(*v7, v5) )
    sub_18007ED40(*v7, v2);
  v24 = *(_QWORD *)(a1 + 64);
  if ( v24 && !sub_1800415B8(v24, v5) )
    sub_18007ED40(*(_QWORD *)(a1 + 64), v2);
  v25 = *(_QWORD *)(a1 + 80);
  if ( v25 && !sub_1800415B8(v25, v5) )
    sub_18007ED40(*(_QWORD *)(a1 + 80), v2);
  v26 = *(_QWORD *)(a1 + 96);
  if ( v26 && !sub_1800415B8(v26, v5) )
    sub_18007ED40(*(_QWORD *)(a1 + 96), v2);
  sub_18007E078(a1, &v76, 1LL);
  v27 = (__int64 *)(a1 + 176);
  if ( v76 && !*v27 )
  {
    sub_18007CDE8(v6, &v57);
    v28 = v57;
    v29 = v58;
    v57 = 0LL;
    v58 = 0LL;
    *v27 = v28;
    v30 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 184) = v29;
    if ( v30 )
    {
      sub_18001050C(v30);
      if ( v58 )
        sub_18001050C(v58);
    }
    sub_18005BC94(*(_QWORD *)(a1 + 16), &v61);
    v31 = sub_18008136C(v76, v86);
    v32 = sub_18004CDF0(v61, v31);
    v33 = *v27;
    v34 = sub_18007D4F0((__int64)&v65, a1 + 128);
    sub_180082320(v33, v34, v32);
    if ( v62 )
      sub_18001050C(v62);
  }
  if ( *v27 && !(unsigned __int8)sub_180082224(*v27, v5) && v76 )
    sub_180081F40(*v27, v2);
  v90 = v5;
  result = sub_18004099C(a1 + 480, (__int64)&v90);
  if ( result == *(_QWORD *)(a1 + 480) || !*(_QWORD *)(result + 40) )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)*v2 + 192LL))(*v2, &v90);
    if ( (v90 & 0x20) != 0 )
    {
      v36 = (__int64 *)sub_18007E078(a1, &v63, 5LL);
      v37 = 1;
      v38 = *v36;
    }
    else
    {
      v58 = 0LL;
      v36 = &v57;
      v37 = 2;
      v38 = 0LL;
    }
    v59 = v38;
    v82 = v36[1];
    v60 = v82;
    *v36 = 0LL;
    v36[1] = 0LL;
    if ( (v37 & 2) != 0 )
    {
      v37 &= ~2u;
      if ( v58 )
        sub_18001050C(v58);
    }
    if ( (v37 & 1) != 0 )
    {
      v37 &= ~1u;
      if ( v64 )
        sub_18001050C(v64);
    }
    if ( (v90 & 0x10) != 0 )
    {
      v39 = (__int64 *)sub_18007E078(a1, &v78, 4LL);
      v40 = v37 | 4;
      v41 = *v39;
    }
    else
    {
      v58 = 0LL;
      v39 = &v57;
      v40 = v37 | 8;
      v41 = 0LL;
    }
    v85[0] = v41;
    v81 = v39[1];
    v85[1] = v81;
    *v39 = 0LL;
    v39[1] = 0LL;
    if ( (v40 & 8) != 0 )
    {
      v40 &= ~8u;
      if ( v58 )
        sub_18001050C(v58);
    }
    if ( (v40 & 4) != 0 )
    {
      v40 &= ~4u;
      if ( v79 )
        sub_18001050C(v79);
    }
    if ( (v90 & 8) != 0 )
    {
      v42 = (__int64 *)sub_18007E078(a1, &v63, 3LL);
      v43 = v40 | 0x10;
      v44 = *v42;
    }
    else
    {
      v58 = 0LL;
      v42 = &v57;
      v43 = v40 | 0x20;
      v44 = 0LL;
    }
    v78 = v44;
    v80 = v42[1];
    v79 = v80;
    *v42 = 0LL;
    v42[1] = 0LL;
    if ( (v43 & 0x20) != 0 )
    {
      v43 &= ~0x20u;
      if ( v58 )
        sub_18001050C(v58);
    }
    if ( (v43 & 0x10) != 0 )
    {
      v43 &= ~0x10u;
      if ( v64 )
        sub_18001050C(v64);
    }
    if ( (v90 & 4) != 0 )
    {
      v45 = (__int64 *)sub_18007E078(a1, &v83, 2LL);
      v46 = v43 | 0x40;
      v47 = *v45;
    }
    else
    {
      v58 = 0LL;
      v45 = &v57;
      v46 = v43 | 0x80;
      v47 = 0LL;
    }
    v63 = v47;
    v93 = v45[1];
    v64 = v93;
    *v45 = 0LL;
    v45[1] = 0LL;
    if ( v46 < 0 )
    {
      v46 &= ~0x80u;
      if ( v58 )
        sub_18001050C(v58);
    }
    if ( (v46 & 0x40) != 0 && v84 )
      sub_18001050C(v84);
    sub_18007CC7C(*v2, &v61);
    v48 = v61;
    v49 = *(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v61 + 40LL);
    v50 = sub_18007D1F4(&v83, v85);
    v51 = sub_18007D18C(&v87, &v78);
    v52 = sub_18007D25C(&v88, &v63);
    v53 = sub_18007D2C4(v89, &v59);
    v54 = sub_18007D32C(v86, &v76);
    v49(v48, v54, v53, v52, v51, v50);
    v55 = sub_180050140((__int64 *)(a1 + 480), (__int64)v86, &v92);
    result = (__int64)sub_18001244C((__int64 *)(*(_QWORD *)v55 + 40LL), &v61);
    if ( v62 )
      result = sub_18001050C(v62);
    if ( v93 )
      result = sub_18001050C(v93);
    if ( v80 )
      result = sub_18001050C(v80);
    if ( v81 )
      result = sub_18001050C(v81);
    if ( v82 )
      result = sub_18001050C(v82);
    v2 = v91;
  }
  if ( v77 )
    result = sub_18001050C(v77);
  v56 = v2[1];
  if ( v56 )
    return sub_18001050C(v56);
  return result;
}
