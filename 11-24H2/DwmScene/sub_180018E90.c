/*
 * XREFs of sub_180018E90 @ 0x180018E90
 * Callers:
 *     sub_180010180 @ 0x180010180 (sub_180010180.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_1800103C0 @ 0x1800103C0 (sub_1800103C0.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015670 @ 0x180015670 (sub_180015670.c)
 *     sub_180015998 @ 0x180015998 (sub_180015998.c)
 *     sub_180015D98 @ 0x180015D98 (sub_180015D98.c)
 *     sub_1800166F0 @ 0x1800166F0 (sub_1800166F0.c)
 *     sub_180016718 @ 0x180016718 (sub_180016718.c)
 *     sub_1800173B8 @ 0x1800173B8 (sub_1800173B8.c)
 *     sub_18001FE74 @ 0x18001FE74 (sub_18001FE74.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003172C @ 0x18003172C (sub_18003172C.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_180053308 @ 0x180053308 (sub_180053308.c)
 *     sub_180053D24 @ 0x180053D24 (sub_180053D24.c)
 *     sub_180053D64 @ 0x180053D64 (sub_180053D64.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180018E90(__int64 a1, _DWORD *a2)
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
  sub_18000E954((__int64 *)&v135);
  v6 = v5(v4, &unk_1800F8520, &v135);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18000F1E4(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v6);
LABEL_12:
    sub_18000E954((__int64 *)&v135);
    return v7;
  }
  *(_QWORD *)&v134 = 0LL;
  v8 = v135;
  v9 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v135 + 56LL);
  sub_18000E954((__int64 *)&v134);
  v10 = v9(v8, &v134);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 49LL;
LABEL_11:
    sub_18000F1E4(
      retaddr,
      v11,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v10);
    sub_18000E954((__int64 *)&v134);
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
  sub_18000E954((__int64 *)(a1 + 32));
  v10 = v13(v12, &unk_1800F84D8, a1 + 32);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 56LL;
    goto LABEL_11;
  }
  v15 = *v14;
  v16 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v14 + 344LL);
  sub_18000E954((__int64 *)(a1 + 40));
  v16(v15, a1 + 40);
  v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 304LL))(*v14) & 1;
  v136 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 296LL))(*v14);
  v18 = *v14;
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, __int64))(*(_QWORD *)*v14 + 376LL);
  sub_18000E954((__int64 *)(a1 + 48));
  v10 = v19(v18, (unsigned int)v17, &v136, 1LL, 7, &unk_1800F84D8, 0LL, a1 + 48);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 69LL;
    goto LABEL_11;
  }
  sub_18000E954((__int64 *)&v134);
  sub_18000E954((__int64 *)&v135);
  if ( a2[6] >= 4u )
    v21 = 1;
  else
    v21 = *((_DWORD *)&xmmword_1800F84F0 + (unsigned int)a2[6]);
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
  v22 = (_QWORD *)sub_18001FE74(&v137);
  v134 = 0LL;
  v23 = sub_180015670((__int64 *)&v135, &v141, &v134, v22);
  v24 = *v23;
  *v23 = 0LL;
  v25 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 56);
  *(_QWORD *)(a1 + 56) = v24;
  if ( v25 )
    sub_1800103C0(v24, v25);
  sub_1800173B8((__int64 (__fastcall ****)(_QWORD, __int64))&v135);
  sub_18002867C(*(_QWORD *)(a1 + 56) + 8LL, v160);
  v26 = sub_180032500(*(_QWORD *)(a1 + 56), 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C58D8, 0LL, 1LL);
  if ( *((_BYTE *)a2 + 30) )
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C5338, 1LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6A58, 0LL, 1LL);
  LOBYTE(v27) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C69D8, v27, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6B38, v28, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C76B8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7698, v29, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7718, v30, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7758, v31, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C76D8, v32, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C76F8, v33, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7738, v34, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7638, v35, 1LL);
  LOBYTE(v36) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C7658, v36, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7538, v37, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C7818, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7938, v38, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7838, v39, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7958, v40, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7918, v41, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7778, v42, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C77B8, v43, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7798, v44, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C77F8, v45, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C77D8, v46, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7558, v47, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7578, v48, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7598, v49, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C7618, v50, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C75B8, v51, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C75D8, v52, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C75F8, v53, 1LL);
  LOBYTE(v54) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C7678, v54, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C7858, 0LL, 1LL);
  LOBYTE(v55) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C66F8, v55, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6718, v56, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6738, v57, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C67D8, v58, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C67B8, v59, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6798, v60, 1LL);
  LOBYTE(v61) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6758, v61, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C6818, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6778, v62, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C67F8, v63, 1LL);
  sub_1800166F0(v26, (__int64)&unk_1801C5DB8);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5CB8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5BF8, v64, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5BD8, v65, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5BB8, v66, 1LL);
  LOBYTE(v67) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5AD8, v67, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5D98, v68, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5C18, v69, 1LL);
  sub_1800166F0(v26, (__int64)&unk_1801C5C38);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5AF8, v70, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5B18, v71, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5B38, v72, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5C78, v73, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5CF8, v74, 1LL);
  LOBYTE(v75) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5CD8, v75, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5D78, v76, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5D38, v77, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5D18, v78, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5D58, v79, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5C98, v80, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5B58, v81, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5B78, v82, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5B98, v83, 1LL);
  sub_180016718(v26, (__int64)&unk_1801C5C58);
  sub_1800166F0(v26, (__int64)&unk_1801C6178);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6078, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5FB8, v84, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5F98, v85, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5F78, v86, 1LL);
  LOBYTE(v87) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C5E98, v87, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6158, v88, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5FD8, v89, 1LL);
  sub_1800166F0(v26, (__int64)&unk_1801C5FF8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5EB8, v90, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5ED8, v91, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5EF8, v92, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6038, v93, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C60B8, v94, 1LL);
  LOBYTE(v95) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6098, v95, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6138, v96, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C60F8, v97, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C60D8, v98, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6118, v99, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6058, v100, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5F18, v101, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5F38, v102, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C5F58, v103, 1LL);
  sub_180016718(v26, (__int64)&unk_1801C6018);
  sub_1800166F0(v26, (__int64)&unk_1801C6538);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6438, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6378, v104, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6358, v105, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6338, v106, 1LL);
  LOBYTE(v107) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6258, v107, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6518, v108, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6398, v109, 1LL);
  sub_1800166F0(v26, (__int64)&unk_1801C63B8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6278, v110, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6298, v111, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C62B8, v112, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C63F8, v113, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6478, v114, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C6458, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C64F8, v115, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C64B8, v116, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6498, v117, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C64D8, v118, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6418, v119, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C62D8, v120, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C62F8, v121, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C6318, v122, 1LL);
  sub_180016718(v26, (__int64)&unk_1801C63D8);
  LOBYTE(v123) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C66D8, v123, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C59B8, 0LL, 1LL);
  sub_180032634(*(_QWORD *)(a1 + 56), &v134, 1LL);
  v124 = (_QWORD *)v134;
  sub_18002867C(v134 + 24, &v139);
  v158 = 0LL;
  *(_QWORD *)&v159 = 0LL;
  DWORD2(v159) = 0;
  LODWORD(v157) = 3;
  v135 = 0LL;
  v161[0] = v157;
  v161[1] = v159;
  v125 = sub_180015998(
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
    sub_18001060C(v128);
  if ( v138 )
    sub_18001060C(v138);
  if ( *((_QWORD *)&v135 + 1) )
    sub_18001060C(*((__int64 *)&v135 + 1));
  LOBYTE(v127) = *((_BYTE *)a2 + 29);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 272LL))(*(_QWORD *)(a1 + 80), v127);
  v130 = (__int64 *)sub_18003172C(*(_QWORD *)(a1 + 56), &v137, v129, 1LL);
  v131 = (_QWORD *)(a1 + 64);
  sub_180011110((_QWORD *)(a1 + 64), v130);
  if ( v138 )
    sub_18001060C(v138);
  unknown_libname_81(&v135, (_QWORD *)(a1 + 80));
  sub_180053308(v132, &v135);
  if ( *((_QWORD *)&v135 + 1) )
    sub_18001060C(*((__int64 *)&v135 + 1));
  sub_180053D24(*v131);
  sub_180053D64(*v131);
  sub_180011044((__int64)&v139);
  if ( *((_QWORD *)&v134 + 1) )
    sub_18001060C(*((__int64 *)&v134 + 1));
  v133 = sub_180015D98(*(__int64 **)(a1 + 56), &v139);
  sub_180011110((_QWORD *)(a1 + 96), v133);
  if ( v140 )
    sub_18001060C(v140);
  qword_1801C4448 = a1;
  sub_180011044((__int64)v160);
  return 0LL;
}
