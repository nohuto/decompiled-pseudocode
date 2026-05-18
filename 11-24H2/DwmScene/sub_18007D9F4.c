/*
 * XREFs of sub_18007D9F4 @ 0x18007D9F4
 * Callers:
 *     sub_1800413CC @ 0x1800413CC (sub_1800413CC.c)
 *     sub_18007D8CC @ 0x18007D8CC (sub_18007D8CC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180040A68 @ 0x180040A68 (sub_180040A68.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_180041718 @ 0x180041718 (sub_180041718.c)
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 *     sub_18007CDDC @ 0x18007CDDC (sub_18007CDDC.c)
 *     sub_18007CF48 @ 0x18007CF48 (sub_18007CF48.c)
 *     sub_18007D2EC @ 0x18007D2EC (sub_18007D2EC.c)
 *     sub_18007D354 @ 0x18007D354 (sub_18007D354.c)
 *     sub_18007D3BC @ 0x18007D3BC (sub_18007D3BC.c)
 *     sub_18007D424 @ 0x18007D424 (sub_18007D424.c)
 *     sub_18007D48C @ 0x18007D48C (sub_18007D48C.c)
 *     sub_18007D650 @ 0x18007D650 (sub_18007D650.c)
 *     sub_18007E1D8 @ 0x18007E1D8 (sub_18007E1D8.c)
 *     sub_18007EEA0 @ 0x18007EEA0 (sub_18007EEA0.c)
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 *     sub_1800814CC @ 0x1800814CC (sub_1800814CC.c)
 *     sub_1800820A0 @ 0x1800820A0 (sub_1800820A0.c)
 *     sub_180082384 @ 0x180082384 (sub_180082384.c)
 *     sub_180082480 @ 0x180082480 (sub_180082480.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18007D9F4(__int64 a1, __int64 *a2)
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
  sub_18002894C(*a2 + 24, (__int64)a2);
  v4 = *v2;
  v5 = *(_DWORD *)(*v2 + 244);
  v92 = v5;
  v6 = *(_QWORD *)(v4 + 3648);
  v7 = (__int64 *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v8 = sub_180040A68(*(_QWORD *)(v4 + 3648), &v59);
    sub_180011110((_QWORD *)(a1 + 48), v8);
    if ( v60 )
      sub_18001060C(v60);
    sub_180027DD0(*v7, 1, 0);
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
    sub_18007F020(*v7, &v65, v9);
    if ( (*(_BYTE *)(a1 + 124) & 2) != 0 )
    {
      LODWORD(v66) = 1;
      v15 = sub_180040A68(v6, &v59);
      v16 = (__int64 *)(a1 + 64);
      sub_180011110((_QWORD *)(a1 + 64), v15);
      if ( v60 )
        sub_18001060C(v60);
      sub_180027DD0(*v16, 1, 0);
      sub_18007F020(*v16, &v65, v17);
    }
    if ( (*(_BYTE *)(a1 + 124) & 4) != 0 )
    {
      LODWORD(v66) = 1;
      v74 = 0;
      v18 = sub_180040A68(v6, &v59);
      v19 = (__int64 *)(a1 + 80);
      sub_180011110((_QWORD *)(a1 + 80), v18);
      if ( v60 )
        sub_18001060C(v60);
      sub_180027DD0(*v19, 1, 0);
      sub_18007F020(*v19, &v65, v20);
    }
    if ( (*(_BYTE *)(a1 + 124) & 8) != 0 )
    {
      LODWORD(v66) = *(_DWORD *)(a1 + 116);
      v74 = 0;
      v21 = sub_180040A68(v6, &v59);
      v22 = (__int64 *)(a1 + 96);
      sub_180011110((_QWORD *)(a1 + 96), v21);
      if ( v60 )
        sub_18001060C(v60);
      sub_180027DD0(*v22, 1, 0);
      sub_18007F020(*v22, &v65, v23);
    }
  }
  if ( !sub_180041718(*v7, v5) )
    sub_18007EEA0(*v7, v2);
  v24 = *(_QWORD *)(a1 + 64);
  if ( v24 && !sub_180041718(v24, v5) )
    sub_18007EEA0(*(_QWORD *)(a1 + 64), v2);
  v25 = *(_QWORD *)(a1 + 80);
  if ( v25 && !sub_180041718(v25, v5) )
    sub_18007EEA0(*(_QWORD *)(a1 + 80), v2);
  v26 = *(_QWORD *)(a1 + 96);
  if ( v26 && !sub_180041718(v26, v5) )
    sub_18007EEA0(*(_QWORD *)(a1 + 96), v2);
  sub_18007E1D8(a1, &v76, 1LL);
  v27 = (__int64 *)(a1 + 176);
  if ( v76 && !*v27 )
  {
    sub_18007CF48(v6, &v57);
    v28 = v57;
    v29 = v58;
    v57 = 0LL;
    v58 = 0LL;
    *v27 = v28;
    v30 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 184) = v29;
    if ( v30 )
    {
      sub_18001060C(v30);
      if ( v58 )
        sub_18001060C(v58);
    }
    sub_18005BDF4(*(_QWORD *)(a1 + 16), &v61);
    v31 = sub_1800814CC(v76, v86);
    v32 = sub_18004CF50(v61, v31);
    v33 = *v27;
    v34 = sub_18007D650((__int64)&v65, a1 + 128);
    sub_180082480(v33, v34, v32);
    if ( v62 )
      sub_18001060C(v62);
  }
  if ( *v27 && !(unsigned __int8)sub_180082384(*v27, v5) && v76 )
    sub_1800820A0(*v27, v2);
  v90 = v5;
  result = sub_180040AFC(a1 + 480, (__int64)&v90);
  if ( result == *(_QWORD *)(a1 + 480) || !*(_QWORD *)(result + 40) )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)*v2 + 192LL))(*v2, &v90);
    if ( (v90 & 0x20) != 0 )
    {
      v36 = (__int64 *)sub_18007E1D8(a1, &v63, 5LL);
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
        sub_18001060C(v58);
    }
    if ( (v37 & 1) != 0 )
    {
      v37 &= ~1u;
      if ( v64 )
        sub_18001060C(v64);
    }
    if ( (v90 & 0x10) != 0 )
    {
      v39 = (__int64 *)sub_18007E1D8(a1, &v78, 4LL);
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
        sub_18001060C(v58);
    }
    if ( (v40 & 4) != 0 )
    {
      v40 &= ~4u;
      if ( v79 )
        sub_18001060C(v79);
    }
    if ( (v90 & 8) != 0 )
    {
      v42 = (__int64 *)sub_18007E1D8(a1, &v63, 3LL);
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
        sub_18001060C(v58);
    }
    if ( (v43 & 0x10) != 0 )
    {
      v43 &= ~0x10u;
      if ( v64 )
        sub_18001060C(v64);
    }
    if ( (v90 & 4) != 0 )
    {
      v45 = (__int64 *)sub_18007E1D8(a1, &v83, 2LL);
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
        sub_18001060C(v58);
    }
    if ( (v46 & 0x40) != 0 && v84 )
      sub_18001060C(v84);
    sub_18007CDDC(*v2, &v61);
    v48 = v61;
    v49 = *(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v61 + 40LL);
    v50 = sub_18007D354(&v83, v85);
    v51 = sub_18007D2EC(&v87, &v78);
    v52 = sub_18007D3BC(&v88, &v63);
    v53 = sub_18007D424(v89, &v59);
    v54 = sub_18007D48C(v86, &v76);
    v49(v48, v54, v53, v52, v51, v50);
    v55 = sub_1800502A0((__int64 *)(a1 + 480), (__int64)v86, &v92);
    result = (__int64)sub_18001254C((__int64 *)(*(_QWORD *)v55 + 40LL), &v61);
    if ( v62 )
      result = sub_18001060C(v62);
    if ( v93 )
      result = sub_18001060C(v93);
    if ( v80 )
      result = sub_18001060C(v80);
    if ( v81 )
      result = sub_18001060C(v81);
    if ( v82 )
      result = sub_18001060C(v82);
    v2 = v91;
  }
  if ( v77 )
    result = sub_18001060C(v77);
  v56 = v2[1];
  if ( v56 )
    return sub_18001060C(v56);
  return result;
}
