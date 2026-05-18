/*
 * XREFs of sub_1800A403C @ 0x1800A403C
 * Callers:
 *     sub_180003010 @ 0x180003010 (sub_180003010.c)
 *     sub_180003190 @ 0x180003190 (sub_180003190.c)
 *     sub_180003200 @ 0x180003200 (sub_180003200.c)
 *     sub_180003270 @ 0x180003270 (sub_180003270.c)
 *     sub_1800032E0 @ 0x1800032E0 (sub_1800032E0.c)
 *     sub_180003350 @ 0x180003350 (sub_180003350.c)
 *     sub_1800033C0 @ 0x1800033C0 (sub_1800033C0.c)
 *     sub_180003430 @ 0x180003430 (sub_180003430.c)
 *     sub_1800034A0 @ 0x1800034A0 (sub_1800034A0.c)
 *     sub_180003510 @ 0x180003510 (sub_180003510.c)
 *     sub_180003580 @ 0x180003580 (sub_180003580.c)
 *     sub_1800035F0 @ 0x1800035F0 (sub_1800035F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C9D8 (_Init_thread_footer.c)
 *     sub_18000CA40 @ 0x18000CA40 (sub_18000CA40.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_1800737C8 @ 0x1800737C8 (sub_1800737C8.c)
 *     sub_18007386C @ 0x18007386C (sub_18007386C.c)
 *     sub_1800A3F6C @ 0x1800A3F6C (sub_1800A3F6C.c)
 */

// Hidden C++ exception states: #wind=120
__int64 sub_1800A403C()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  _QWORD *v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  _QWORD *v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int128 v162; // [rsp+28h] [rbp-99h]
  __int128 v163; // [rsp+38h] [rbp-89h] BYREF
  __int128 v164; // [rsp+48h] [rbp-79h]
  __int128 v165; // [rsp+58h] [rbp-69h] BYREF
  __int128 v166; // [rsp+68h] [rbp-59h]
  _QWORD v167[4]; // [rsp+78h] [rbp-49h] BYREF
  _BYTE v168[32]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v169[4]; // [rsp+B8h] [rbp-9h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801CA060 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA060);
    if ( dword_1801CA060 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180141740;
      *((_QWORD *)&v162 + 1) = &unk_180141FB4;
      *(_QWORD *)&v164 = 0x100000005LL;
      v1 = sub_1800A3F6C();
      v2 = sub_1800737C8(v169, 0LL, (__int64)v1, 5);
      v3 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v2);
      v4 = sub_18001B5A8((__int64)v167, v3, (__int64)"/Pixel");
      v165 = v162;
      v166 = v164;
      sub_18007386C(v4, (__int64)&v165);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v169);
      Init_thread_footer(&dword_1801CA060);
    }
  }
  if ( dword_1801CA064 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA064);
    if ( dword_1801CA064 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180141FC0;
      *((_QWORD *)&v162 + 1) = &unk_1801421C4;
      *(_QWORD *)&v166 = 0x100000005LL;
      v5 = sub_1800A3F6C();
      v6 = sub_1800737C8(v167, 1LL, (__int64)v5, 5);
      v7 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v6);
      v8 = sub_18001B5A8((__int64)v169, v7, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v8, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA064);
    }
  }
  if ( dword_1801CA068 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA068);
    if ( dword_1801CA068 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180141740;
      *((_QWORD *)&v162 + 1) = &unk_180141FB4;
      *(_QWORD *)&v166 = 0x100000005LL;
      v9 = sub_1800A3F6C();
      v10 = sub_1800737C8(v167, 2LL, (__int64)v9, 5);
      v11 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v10);
      v12 = sub_18001B5A8((__int64)v169, v11, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v12, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA068);
    }
  }
  if ( dword_1801CA06C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA06C);
    if ( dword_1801CA06C == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013E320;
      *((_QWORD *)&v162 + 1) = &unk_18013F028;
      *(_QWORD *)&v166 = 0x100000005LL;
      v13 = sub_1800A3F6C();
      v14 = sub_1800737C8(v167, 4LL, (__int64)v13, 5);
      v15 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v14);
      v16 = sub_18001B5A8((__int64)v169, v15, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v16, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA06C);
    }
  }
  if ( dword_1801CA070 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA070);
    if ( dword_1801CA070 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013DC30;
      *((_QWORD *)&v162 + 1) = &unk_18013E320;
      *(_QWORD *)&v166 = 0x100000005LL;
      v17 = sub_1800A3F6C();
      v18 = sub_1800737C8(v167, 5LL, (__int64)v17, 5);
      v19 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v18);
      v20 = sub_18001B5A8((__int64)v169, v19, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v20, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA070);
    }
  }
  if ( dword_1801CA074 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA074);
    if ( dword_1801CA074 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013E320;
      *((_QWORD *)&v162 + 1) = &unk_18013F028;
      *(_QWORD *)&v166 = 0x100000005LL;
      v21 = sub_1800A3F6C();
      v22 = sub_1800737C8(v167, 6LL, (__int64)v21, 5);
      v23 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v22);
      v24 = sub_18001B5A8((__int64)v169, v23, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v24, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA074);
    }
  }
  if ( dword_1801CA078 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA078);
    if ( dword_1801CA078 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F770;
      *((_QWORD *)&v162 + 1) = &unk_18014038C;
      *(_QWORD *)&v166 = 0x100000005LL;
      v25 = sub_1800A3F6C();
      v26 = sub_1800737C8(v167, 8LL, (__int64)v25, 5);
      v27 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v26);
      v28 = sub_18001B5A8((__int64)v169, v27, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v28, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA078);
    }
  }
  if ( dword_1801CA07C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA07C);
    if ( dword_1801CA07C == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F770;
      *((_QWORD *)&v162 + 1) = &unk_18014038C;
      *(_QWORD *)&v166 = 0x100000005LL;
      v29 = sub_1800A3F6C();
      v30 = sub_1800737C8(v167, 10LL, (__int64)v29, 5);
      v31 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v30);
      v32 = sub_18001B5A8((__int64)v169, v31, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v32, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA07C);
    }
  }
  if ( dword_1801CA080 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA080);
    if ( dword_1801CA080 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180140390;
      *((_QWORD *)&v162 + 1) = &unk_180141740;
      *(_QWORD *)&v166 = 0x100000005LL;
      v33 = sub_1800A3F6C();
      v34 = sub_1800737C8(v167, 12LL, (__int64)v33, 5);
      v35 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v34);
      v36 = sub_18001B5A8((__int64)v169, v35, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v36, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA080);
    }
  }
  if ( dword_1801CA084 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA084);
    if ( dword_1801CA084 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180140390;
      *((_QWORD *)&v162 + 1) = &unk_180141740;
      *(_QWORD *)&v166 = 0x100000005LL;
      v37 = sub_1800A3F6C();
      v38 = sub_1800737C8(v167, 14LL, (__int64)v37, 5);
      v39 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v38);
      v40 = sub_18001B5A8((__int64)v169, v39, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v40, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA084);
    }
  }
  if ( dword_1801CA088 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA088);
    if ( dword_1801CA088 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180141740;
      *((_QWORD *)&v162 + 1) = &unk_180141FB4;
      *(_QWORD *)&v166 = 0x100000005LL;
      v41 = sub_1800A3F6C();
      v42 = sub_1800737C8(v167, 16LL, (__int64)v41, 5);
      v43 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v42);
      v44 = sub_18001B5A8((__int64)v169, v43, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v44, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA088);
    }
  }
  if ( dword_1801CA08C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA08C);
    if ( dword_1801CA08C == -1 )
    {
      *(_QWORD *)&v162 = &unk_180141FC0;
      *((_QWORD *)&v162 + 1) = &unk_1801421C4;
      *(_QWORD *)&v166 = 0x100000005LL;
      v45 = sub_1800A3F6C();
      v46 = sub_1800737C8(v167, 17LL, (__int64)v45, 5);
      v47 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v46);
      v48 = sub_18001B5A8((__int64)v169, v47, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v48, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA08C);
    }
  }
  if ( dword_1801CA090 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA090);
    if ( dword_1801CA090 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180141740;
      *((_QWORD *)&v162 + 1) = &unk_180141FB4;
      *(_QWORD *)&v166 = 0x100000005LL;
      v49 = sub_1800A3F6C();
      v50 = sub_1800737C8(v167, 18LL, (__int64)v49, 5);
      v51 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v50);
      v52 = sub_18001B5A8((__int64)v169, v51, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v52, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA090);
    }
  }
  if ( dword_1801CA094 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA094);
    if ( dword_1801CA094 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013E320;
      *((_QWORD *)&v162 + 1) = &unk_18013F028;
      *(_QWORD *)&v166 = 0x100000005LL;
      v53 = sub_1800A3F6C();
      v54 = sub_1800737C8(v167, 20LL, (__int64)v53, 5);
      v55 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v54);
      v56 = sub_18001B5A8((__int64)v169, v55, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v56, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA094);
    }
  }
  if ( dword_1801CA098 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA098);
    if ( dword_1801CA098 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013DC30;
      *((_QWORD *)&v162 + 1) = &unk_18013E320;
      *(_QWORD *)&v166 = 0x100000005LL;
      v57 = sub_1800A3F6C();
      v58 = sub_1800737C8(v167, 21LL, (__int64)v57, 5);
      v59 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v58);
      v60 = sub_18001B5A8((__int64)v169, v59, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v60, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA098);
    }
  }
  if ( dword_1801CA09C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA09C);
    if ( dword_1801CA09C == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013E320;
      *((_QWORD *)&v162 + 1) = &unk_18013F028;
      *(_QWORD *)&v166 = 0x100000005LL;
      v61 = sub_1800A3F6C();
      v62 = sub_1800737C8(v167, 22LL, (__int64)v61, 5);
      v63 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v62);
      v64 = sub_18001B5A8((__int64)v169, v63, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v64, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA09C);
    }
  }
  if ( dword_1801CA0A0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0A0);
    if ( dword_1801CA0A0 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F770;
      *((_QWORD *)&v162 + 1) = &unk_18014038C;
      *(_QWORD *)&v166 = 0x100000005LL;
      v65 = sub_1800A3F6C();
      v66 = sub_1800737C8(v167, 24LL, (__int64)v65, 5);
      v67 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v66);
      v68 = sub_18001B5A8((__int64)v169, v67, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v68, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0A0);
    }
  }
  if ( dword_1801CA0A4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0A4);
    if ( dword_1801CA0A4 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F770;
      *((_QWORD *)&v162 + 1) = &unk_18014038C;
      *(_QWORD *)&v166 = 0x100000005LL;
      v69 = sub_1800A3F6C();
      v70 = sub_1800737C8(v167, 26LL, (__int64)v69, 5);
      v71 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v70);
      v72 = sub_18001B5A8((__int64)v169, v71, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v72, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0A4);
    }
  }
  if ( dword_1801CA0A8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0A8);
    if ( dword_1801CA0A8 == -1 )
    {
      *(_QWORD *)&v162 = &unk_180140390;
      *((_QWORD *)&v162 + 1) = &unk_180141740;
      *(_QWORD *)&v166 = 0x100000005LL;
      v73 = sub_1800A3F6C();
      v74 = sub_1800737C8(v167, 28LL, (__int64)v73, 5);
      v75 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v74);
      v76 = sub_18001B5A8((__int64)v169, v75, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v76, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0A8);
    }
  }
  if ( dword_1801CA0AC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0AC);
    if ( dword_1801CA0AC == -1 )
    {
      *(_QWORD *)&v162 = &unk_180140390;
      *((_QWORD *)&v162 + 1) = &unk_180141740;
      *(_QWORD *)&v166 = 0x100000005LL;
      v77 = sub_1800A3F6C();
      v78 = sub_1800737C8(v167, 30LL, (__int64)v77, 5);
      v79 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v78);
      v80 = sub_18001B5A8((__int64)v169, v79, (__int64)"/Pixel");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v80, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0AC);
    }
  }
  if ( dword_1801CA0B0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0B0);
    if ( dword_1801CA0B0 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v81 = sub_1800A3F6C();
      v82 = sub_1800737C8(v167, 0LL, (__int64)v81, 5);
      v83 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v82);
      v84 = sub_18001B5A8((__int64)v169, v83, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v84, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0B0);
    }
  }
  if ( dword_1801CA0B4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0B4);
    if ( dword_1801CA0B4 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013C210;
      *((_QWORD *)&v162 + 1) = &unk_18013C794;
      *(_QWORD *)&v166 = 0x100000001LL;
      v85 = sub_1800A3F6C();
      v86 = sub_1800737C8(v167, 1LL, (__int64)v85, 5);
      v87 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v86);
      v88 = sub_18001B5A8((__int64)v169, v87, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v88, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0B4);
    }
  }
  if ( dword_1801CA0B8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0B8);
    if ( dword_1801CA0B8 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v89 = sub_1800A3F6C();
      v90 = sub_1800737C8(v167, 2LL, (__int64)v89, 5);
      v91 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v90);
      v92 = sub_18001B5A8((__int64)v169, v91, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v92, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0B8);
    }
  }
  if ( dword_1801CA0BC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0BC);
    if ( dword_1801CA0BC == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v93 = sub_1800A3F6C();
      v94 = sub_1800737C8(v167, 4LL, (__int64)v93, 5);
      v95 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v94);
      v96 = sub_18001B5A8((__int64)v169, v95, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v96, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0BC);
    }
  }
  if ( dword_1801CA0C0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0C0);
    if ( dword_1801CA0C0 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013AFF0;
      *((_QWORD *)&v162 + 1) = &unk_18013B698;
      *(_QWORD *)&v166 = 0x100000001LL;
      v97 = sub_1800A3F6C();
      v98 = sub_1800737C8(v167, 5LL, (__int64)v97, 5);
      v99 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v98);
      v100 = sub_18001B5A8((__int64)v169, v99, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v100, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0C0);
    }
  }
  if ( dword_1801CA0C4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0C4);
    if ( dword_1801CA0C4 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v101 = sub_1800A3F6C();
      v102 = sub_1800737C8(v167, 6LL, (__int64)v101, 5);
      v103 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v102);
      v104 = sub_18001B5A8((__int64)v169, v103, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v104, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0C4);
    }
  }
  if ( dword_1801CA0C8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0C8);
    if ( dword_1801CA0C8 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v105 = sub_1800A3F6C();
      v106 = sub_1800737C8(v167, 8LL, (__int64)v105, 5);
      v107 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v106);
      v108 = sub_18001B5A8((__int64)v169, v107, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v108, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0C8);
    }
  }
  if ( dword_1801CA0CC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0CC);
    if ( dword_1801CA0CC == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v109 = sub_1800A3F6C();
      v110 = sub_1800737C8(v167, 10LL, (__int64)v109, 5);
      v111 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v110);
      v112 = sub_18001B5A8((__int64)v169, v111, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v112, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0CC);
    }
  }
  if ( dword_1801CA0D0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0D0);
    if ( dword_1801CA0D0 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v113 = sub_1800A3F6C();
      v114 = sub_1800737C8(v167, 12LL, (__int64)v113, 5);
      v115 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v114);
      v116 = sub_18001B5A8((__int64)v169, v115, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v116, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0D0);
    }
  }
  if ( dword_1801CA0D4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0D4);
    if ( dword_1801CA0D4 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013F030;
      *((_QWORD *)&v162 + 1) = &unk_18013F768;
      *(_QWORD *)&v166 = 0x100000001LL;
      v117 = sub_1800A3F6C();
      v118 = sub_1800737C8(v167, 14LL, (__int64)v117, 5);
      v119 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v118);
      v120 = sub_18001B5A8((__int64)v169, v119, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v120, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0D4);
    }
  }
  if ( dword_1801CA0D8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0D8);
    if ( dword_1801CA0D8 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v121 = sub_1800A3F6C();
      v122 = sub_1800737C8(v167, 16LL, (__int64)v121, 5);
      v123 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v122);
      v124 = sub_18001B5A8((__int64)v169, v123, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v124, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0D8);
    }
  }
  if ( dword_1801CA0DC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0DC);
    if ( dword_1801CA0DC == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013D280;
      *((_QWORD *)&v162 + 1) = &unk_18013DC28;
      *(_QWORD *)&v166 = 0x100000001LL;
      v125 = sub_1800A3F6C();
      v126 = sub_1800737C8(v167, 17LL, (__int64)v125, 5);
      v127 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v126);
      v128 = sub_18001B5A8((__int64)v169, v127, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v128, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0DC);
    }
  }
  if ( dword_1801CA0E0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0E0);
    if ( dword_1801CA0E0 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v129 = sub_1800A3F6C();
      v130 = sub_1800737C8(v167, 18LL, (__int64)v129, 5);
      v131 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v130);
      v132 = sub_18001B5A8((__int64)v169, v131, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v132, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0E0);
    }
  }
  if ( dword_1801CA0E4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0E4);
    if ( dword_1801CA0E4 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v133 = sub_1800A3F6C();
      v134 = sub_1800737C8(v167, 20LL, (__int64)v133, 5);
      v135 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v134);
      v136 = sub_18001B5A8((__int64)v169, v135, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v136, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0E4);
    }
  }
  if ( dword_1801CA0E8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0E8);
    if ( dword_1801CA0E8 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013C7A0;
      *((_QWORD *)&v162 + 1) = &unk_18013D278;
      *(_QWORD *)&v166 = 0x100000001LL;
      v137 = sub_1800A3F6C();
      v138 = sub_1800737C8(v167, 21LL, (__int64)v137, 5);
      v139 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v138);
      v140 = sub_18001B5A8((__int64)v169, v139, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v140, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0E8);
    }
  }
  if ( dword_1801CA0EC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0EC);
    if ( dword_1801CA0EC == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v141 = sub_1800A3F6C();
      v142 = sub_1800737C8(v167, 22LL, (__int64)v141, 5);
      v143 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v142);
      v144 = sub_18001B5A8((__int64)v169, v143, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v144, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0EC);
    }
  }
  if ( dword_1801CA0F0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0F0);
    if ( dword_1801CA0F0 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v145 = sub_1800A3F6C();
      v146 = sub_1800737C8(v167, 24LL, (__int64)v145, 5);
      v147 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v146);
      v148 = sub_18001B5A8((__int64)v169, v147, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v148, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0F0);
    }
  }
  if ( dword_1801CA0F4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0F4);
    if ( dword_1801CA0F4 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v149 = sub_1800A3F6C();
      v150 = sub_1800737C8(v167, 26LL, (__int64)v149, 5);
      v151 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v150);
      v152 = sub_18001B5A8((__int64)v169, v151, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v152, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0F4);
    }
  }
  if ( dword_1801CA0F8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0F8);
    if ( dword_1801CA0F8 == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v153 = sub_1800A3F6C();
      v154 = sub_1800737C8(v167, 28LL, (__int64)v153, 5);
      v155 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v154);
      v156 = sub_18001B5A8((__int64)v169, v155, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v156, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0F8);
    }
  }
  if ( dword_1801CA0FC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000CA40(&dword_1801CA0FC);
    if ( dword_1801CA0FC == -1 )
    {
      *(_QWORD *)&v162 = &unk_18013B6A0;
      *((_QWORD *)&v162 + 1) = &unk_18013C208;
      *(_QWORD *)&v166 = 0x100000001LL;
      v157 = sub_1800A3F6C();
      v158 = sub_1800737C8(v167, 30LL, (__int64)v157, 5);
      v159 = sub_18001B678((__int64)v168, (__int64)"UnlitShader/ShaderModel40/", v158);
      v160 = sub_18001B5A8((__int64)v169, v159, (__int64)"/Vertex");
      v163 = v162;
      v164 = v166;
      sub_18007386C(v160, (__int64)&v163);
      sub_180011B5C((__int64)v168);
      sub_180011B5C((__int64)v167);
      Init_thread_footer(&dword_1801CA0FC);
    }
  }
  return 0LL;
}
