/*
 * XREFs of sub_180018DD0 @ 0x180018DD0
 * Callers:
 *     sub_180010080 @ 0x180010080 (sub_180010080.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_1800102C0 @ 0x1800102C0 (sub_1800102C0.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015570 @ 0x180015570 (sub_180015570.c)
 *     sub_180015898 @ 0x180015898 (sub_180015898.c)
 *     sub_180015C98 @ 0x180015C98 (sub_180015C98.c)
 *     sub_1800165F0 @ 0x1800165F0 (sub_1800165F0.c)
 *     sub_180016618 @ 0x180016618 (sub_180016618.c)
 *     sub_1800172B8 @ 0x1800172B8 (sub_1800172B8.c)
 *     sub_18001FD14 @ 0x18001FD14 (sub_18001FD14.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800315CC @ 0x1800315CC (sub_1800315CC.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_1800531A8 @ 0x1800531A8 (sub_1800531A8.c)
 *     sub_180053BC4 @ 0x180053BC4 (sub_180053BC4.c)
 *     sub_180053C04 @ 0x180053C04 (sub_180053C04.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180018DD0(__int64 a1, _DWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v5)(_QWORD, void *, __int128 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int128 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v13)(_QWORD, void *, __int64); // rbx
  _QWORD *v14; // r13
  __int64 v15; // rsi
  void (__fastcall *v16)(__int64, __int64); // rdi
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, __int64); // rdi
  int v21; // ecx
  _QWORD *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r8
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  _QWORD *v124; // rbx
  __int64 *v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 *v130; // rax
  _QWORD *v131; // rbx
  __int64 v132; // r8
  __int64 *v133; // rax
  __int128 v134; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v135; // [rsp+68h] [rbp-A0h] BYREF
  int v136; // [rsp+78h] [rbp-90h] BYREF
  __int64 v137; // [rsp+80h] [rbp-88h] BYREF
  __int64 v138; // [rsp+88h] [rbp-80h]
  __int64 v139; // [rsp+90h] [rbp-78h] BYREF
  __int64 v140; // [rsp+98h] [rbp-70h]
  __int128 v141; // [rsp+A8h] [rbp-60h] BYREF
  __int64 (__fastcall ***v142)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp-50h]
  __int64 v143; // [rsp+C0h] [rbp-48h]
  int v144; // [rsp+C8h] [rbp-40h]
  int v145; // [rsp+CCh] [rbp-3Ch]
  int v146; // [rsp+D0h] [rbp-38h]
  __int16 v147; // [rsp+D4h] [rbp-34h]
  __int64 v148; // [rsp+D8h] [rbp-30h]
  __int64 v149; // [rsp+E0h] [rbp-28h]
  int v150; // [rsp+E8h] [rbp-20h]
  int v151; // [rsp+ECh] [rbp-1Ch]
  int v152; // [rsp+F0h] [rbp-18h]
  int v153; // [rsp+F4h] [rbp-14h]
  __int64 v154; // [rsp+F8h] [rbp-10h]
  int v155; // [rsp+100h] [rbp-8h]
  char v156; // [rsp+104h] [rbp-4h]
  unsigned __int64 v157; // [rsp+108h] [rbp+0h]
  __int64 v158; // [rsp+110h] [rbp+8h]
  __int128 v159; // [rsp+118h] [rbp+10h]
  _BYTE v160[16]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v161[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v162[38]; // [rsp+158h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+300h] [rbp+1F8h]

  *(_QWORD *)&v135 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v5 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int128 *))a2;
  sub_18000E854((__int64 *)&v135);
  v6 = v5(v4, &unk_1800F7520, &v135);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18000F0E4(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v6);
LABEL_12:
    sub_18000E854((__int64 *)&v135);
    return v7;
  }
  *(_QWORD *)&v134 = 0LL;
  v8 = v135;
  v9 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v135 + 56LL);
  sub_18000E854((__int64 *)&v134);
  v10 = v9(v8, &v134);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 49LL;
LABEL_11:
    sub_18000F0E4(
      retaddr,
      v11,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v10);
    sub_18000E854((__int64 *)&v134);
    goto LABEL_12;
  }
  memset(v162, 0, sizeof(v162));
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v134 + 64LL))(v134, v162);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 52LL;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 24) = v162[37];
  v12 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v13 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int64))a2;
  v14 = (_QWORD *)(a1 + 32);
  sub_18000E854((__int64 *)(a1 + 32));
  v10 = v13(v12, &unk_1800F74D8, a1 + 32);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 56LL;
    goto LABEL_11;
  }
  v15 = *v14;
  v16 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v14 + 344LL);
  sub_18000E854((__int64 *)(a1 + 40));
  v16(v15, a1 + 40);
  v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 304LL))(*v14) & 1;
  v136 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 296LL))(*v14);
  v18 = *v14;
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, __int64))(*(_QWORD *)*v14 + 376LL);
  sub_18000E854((__int64 *)(a1 + 48));
  v10 = v19(v18, (unsigned int)v17, &v136, 1LL, 7, &unk_1800F74D8, 0LL, a1 + 48);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 69LL;
    goto LABEL_11;
  }
  sub_18000E854((__int64 *)&v134);
  sub_18000E854((__int64 *)&v135);
  if ( a2[6] >= 4u )
    v21 = 1;
  else
    v21 = *((_DWORD *)&xmmword_1800F74F0 + (unsigned int)a2[6]);
  v148 = 0LL;
  v149 = 0LL;
  v152 = 0;
  v153 = 1;
  v154 = 1LL;
  v155 = 0;
  v156 = 1;
  v141 = 0x100000004uLL;
  v142 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v143 = 0LL;
  v144 = 1;
  v145 = v21;
  v146 = 0;
  v147 = 0;
  v150 = 37120;
  v151 = 49408;
  v22 = (_QWORD *)sub_18001FD14(&v137);
  v134 = 0LL;
  v23 = sub_180015570((__int64 *)&v135, &v141, &v134, v22);
  v24 = *v23;
  *v23 = 0LL;
  v25 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 56);
  *(_QWORD *)(a1 + 56) = v24;
  if ( v25 )
    sub_1800102C0(v24, v25);
  sub_1800172B8((__int64 (__fastcall ****)(_QWORD, __int64))&v135);
  sub_18002851C(*(_QWORD *)(a1 + 56) + 8LL, v160);
  v26 = sub_1800323A0(*(_QWORD *)(a1 + 56), 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C48C8, 0LL, 1LL);
  if ( *((_BYTE *)a2 + 30) )
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C4328, 1LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5A48, 0LL, 1LL);
  LOBYTE(v27) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C59C8, v27, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5B28, v28, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C66A8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6688, v29, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6708, v30, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6748, v31, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C66C8, v32, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C66E8, v33, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6728, v34, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6628, v35, 1LL);
  LOBYTE(v36) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6648, v36, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6528, v37, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C6808, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6928, v38, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6828, v39, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6948, v40, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6908, v41, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6768, v42, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C67A8, v43, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6788, v44, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C67E8, v45, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C67C8, v46, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6548, v47, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6568, v48, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6588, v49, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6608, v50, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C65A8, v51, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C65C8, v52, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C65E8, v53, 1LL);
  LOBYTE(v54) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6668, v54, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6848, 0LL, 1LL);
  LOBYTE(v55) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C56E8, v55, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5708, v56, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5728, v57, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C57C8, v58, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C57A8, v59, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5788, v60, 1LL);
  LOBYTE(v61) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5748, v61, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C5808, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5768, v62, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C57E8, v63, 1LL);
  sub_1800165F0(v26, (__int64)&unk_1801C4DA8);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C4CA8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4BE8, v64, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4BC8, v65, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4BA8, v66, 1LL);
  LOBYTE(v67) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C4AC8, v67, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4D88, v68, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4C08, v69, 1LL);
  sub_1800165F0(v26, (__int64)&unk_1801C4C28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4AE8, v70, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4B08, v71, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4B28, v72, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4C68, v73, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4CE8, v74, 1LL);
  LOBYTE(v75) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C4CC8, v75, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4D68, v76, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4D28, v77, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4D08, v78, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4D48, v79, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4C88, v80, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4B48, v81, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4B68, v82, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4B88, v83, 1LL);
  sub_180016618(v26, (__int64)&unk_1801C4C48);
  sub_1800165F0(v26, (__int64)&unk_1801C5168);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5068, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4FA8, v84, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4F88, v85, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4F68, v86, 1LL);
  LOBYTE(v87) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C4E88, v87, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5148, v88, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4FC8, v89, 1LL);
  sub_1800165F0(v26, (__int64)&unk_1801C4FE8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4EA8, v90, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4EC8, v91, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4EE8, v92, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5028, v93, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C50A8, v94, 1LL);
  LOBYTE(v95) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5088, v95, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5128, v96, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C50E8, v97, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C50C8, v98, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5108, v99, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5048, v100, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4F08, v101, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4F28, v102, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C4F48, v103, 1LL);
  sub_180016618(v26, (__int64)&unk_1801C5008);
  sub_1800165F0(v26, (__int64)&unk_1801C5528);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5428, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5368, v104, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5348, v105, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5328, v106, 1LL);
  LOBYTE(v107) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5248, v107, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5508, v108, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5388, v109, 1LL);
  sub_1800165F0(v26, (__int64)&unk_1801C53A8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5268, v110, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5288, v111, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C52A8, v112, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C53E8, v113, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5468, v114, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5448, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C54E8, v115, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C54A8, v116, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5488, v117, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C54C8, v118, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5408, v119, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C52C8, v120, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C52E8, v121, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5308, v122, 1LL);
  sub_180016618(v26, (__int64)&unk_1801C53C8);
  LOBYTE(v123) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C56C8, v123, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C49A8, 0LL, 1LL);
  sub_1800324D4(*(_QWORD *)(a1 + 56), &v134, 1LL);
  v124 = (_QWORD *)v134;
  sub_18002851C(v134 + 24, &v139);
  v158 = 0LL;
  *(_QWORD *)&v159 = 0LL;
  DWORD2(v159) = 0;
  LODWORD(v157) = 3;
  v135 = 0LL;
  v161[0] = v157;
  v161[1] = v159;
  v125 = sub_180015898(
           v124,
           &v137,
           (__int64)v161,
           (int)&v134,
           (__int64)&v135,
           (__int64)(a2 + 2),
           (__int64)(a2 + 3),
           (__int64)(a2 + 4),
           (__int64)(a2 + 5));
  v126 = *v125;
  v127 = v125[1];
  *v125 = 0LL;
  v125[1] = 0LL;
  *(_QWORD *)(a1 + 80) = v126;
  v128 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = v127;
  if ( v128 )
    sub_18001050C(v128);
  if ( v138 )
    sub_18001050C(v138);
  if ( *((_QWORD *)&v135 + 1) )
    sub_18001050C(*((__int64 *)&v135 + 1));
  LOBYTE(v127) = *((_BYTE *)a2 + 29);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 272LL))(*(_QWORD *)(a1 + 80), v127);
  v130 = (__int64 *)sub_1800315CC(*(_QWORD *)(a1 + 56), &v137, v129, 1LL);
  v131 = (_QWORD *)(a1 + 64);
  sub_180011010((_QWORD *)(a1 + 64), v130);
  if ( v138 )
    sub_18001050C(v138);
  unknown_libname_81(&v135, (_QWORD *)(a1 + 80));
  sub_1800531A8(v132, &v135);
  if ( *((_QWORD *)&v135 + 1) )
    sub_18001050C(*((__int64 *)&v135 + 1));
  sub_180053BC4(*v131);
  sub_180053C04(*v131);
  sub_180010F44((__int64)&v139);
  if ( *((_QWORD *)&v134 + 1) )
    sub_18001050C(*((__int64 *)&v134 + 1));
  v133 = sub_180015C98(*(__int64 **)(a1 + 56), &v139);
  sub_180011010((_QWORD *)(a1 + 96), v133);
  if ( v140 )
    sub_18001050C(v140);
  qword_1801C3438 = a1;
  sub_180010F44((__int64)v160);
  return 0LL;
}
