/*
 * XREFs of sub_18009A1D0 @ 0x18009A1D0
 * Callers:
 *     sub_180002FB0 @ 0x180002FB0 (sub_180002FB0.c)
 *     sub_180003130 @ 0x180003130 (sub_180003130.c)
 *     sub_1800031A0 @ 0x1800031A0 (sub_1800031A0.c)
 *     sub_180003210 @ 0x180003210 (sub_180003210.c)
 *     sub_180003280 @ 0x180003280 (sub_180003280.c)
 *     sub_1800032F0 @ 0x1800032F0 (sub_1800032F0.c)
 *     sub_180003360 @ 0x180003360 (sub_180003360.c)
 *     sub_1800033D0 @ 0x1800033D0 (sub_1800033D0.c)
 *     sub_180003440 @ 0x180003440 (sub_180003440.c)
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_180003520 @ 0x180003520 (sub_180003520.c)
 *     sub_180003590 @ 0x180003590 (sub_180003590.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180073668 @ 0x180073668 (sub_180073668.c)
 *     sub_18007370C @ 0x18007370C (sub_18007370C.c)
 *     sub_18009A0E8 @ 0x18009A0E8 (sub_18009A0E8.c)
 */

// Hidden C++ exception states: #wind=108
__int64 sub_18009A1D0()
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
  __int128 v146; // [rsp+28h] [rbp-99h]
  __int128 v147; // [rsp+38h] [rbp-89h] BYREF
  __int128 v148; // [rsp+48h] [rbp-79h]
  __int128 v149; // [rsp+58h] [rbp-69h] BYREF
  __int128 v150; // [rsp+68h] [rbp-59h]
  _QWORD v151[4]; // [rsp+78h] [rbp-49h] BYREF
  _BYTE v152[32]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v153[4]; // [rsp+B8h] [rbp-9h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801C8B60 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B60);
    if ( dword_1801C8B60 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180112290;
      *((_QWORD *)&v146 + 1) = "<dummy>";
      *(_QWORD *)&v148 = 0x100000005LL;
      v1 = sub_18009A0E8();
      v2 = sub_180073668(v153, 0LL, (__int64)v1, 6);
      v3 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v2);
      v4 = sub_18001B448((__int64)v151, v3, (__int64)"/Pixel");
      v149 = v146;
      v150 = v148;
      sub_18007370C(v4, (__int64)&v149);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v153);
      Init_thread_footer(&dword_1801C8B60);
    }
  }
  if ( dword_1801C8B64 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B64);
    if ( dword_1801C8B64 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180111A40;
      *((_QWORD *)&v146 + 1) = &unk_180112288;
      *(_QWORD *)&v150 = 0x100000005LL;
      v5 = sub_18009A0E8();
      v6 = sub_180073668(v151, 1LL, (__int64)v5, 6);
      v7 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v6);
      v8 = sub_18001B448((__int64)v153, v7, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v8, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B64);
    }
  }
  if ( dword_1801C8B68 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B68);
    if ( dword_1801C8B68 == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010FF00;
      *((_QWORD *)&v146 + 1) = &unk_1801107B4;
      *(_QWORD *)&v150 = 0x100000005LL;
      v9 = sub_18009A0E8();
      v10 = sub_180073668(v151, 2LL, (__int64)v9, 6);
      v11 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v10);
      v12 = sub_18001B448((__int64)v153, v11, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v12, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B68);
    }
  }
  if ( dword_1801C8B6C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B6C);
    if ( dword_1801C8B6C == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010ED40;
      *((_QWORD *)&v146 + 1) = &unk_18010F6FC;
      *(_QWORD *)&v150 = 0x100000005LL;
      v13 = sub_18009A0E8();
      v14 = sub_180073668(v151, 3LL, (__int64)v13, 6);
      v15 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v14);
      v16 = sub_18001B448((__int64)v153, v15, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v16, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B6C);
    }
  }
  if ( dword_1801C8B70 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B70);
    if ( dword_1801C8B70 == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010F700;
      *((_QWORD *)&v146 + 1) = &unk_18010FEFC;
      *(_QWORD *)&v150 = 0x100000005LL;
      v17 = sub_18009A0E8();
      v18 = sub_180073668(v151, 4LL, (__int64)v17, 6);
      v19 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v18);
      v20 = sub_18001B448((__int64)v153, v19, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v20, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B70);
    }
  }
  if ( dword_1801C8B74 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B74);
    if ( dword_1801C8B74 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180111130;
      *((_QWORD *)&v146 + 1) = &unk_180111A34;
      *(_QWORD *)&v150 = 0x100000005LL;
      v21 = sub_18009A0E8();
      v22 = sub_180073668(v151, 5LL, (__int64)v21, 6);
      v23 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v22);
      v24 = sub_18001B448((__int64)v153, v23, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v24, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B74);
    }
  }
  if ( dword_1801C8B78 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B78);
    if ( dword_1801C8B78 == -1 )
    {
      *(_QWORD *)&v146 = &unk_1801107C0;
      *((_QWORD *)&v146 + 1) = &unk_180111124;
      *(_QWORD *)&v150 = 0x100000005LL;
      v25 = sub_18009A0E8();
      v26 = sub_180073668(v151, 6LL, (__int64)v25, 6);
      v27 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v26);
      v28 = sub_18001B448((__int64)v153, v27, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v28, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B78);
    }
  }
  if ( dword_1801C8B7C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B7C);
    if ( dword_1801C8B7C == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010B910;
      *((_QWORD *)&v146 + 1) = &unk_18010C37C;
      *(_QWORD *)&v150 = 0x100000005LL;
      v29 = sub_18009A0E8();
      v30 = sub_180073668(v151, 7LL, (__int64)v29, 6);
      v31 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v30);
      v32 = sub_18001B448((__int64)v153, v31, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v32, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B7C);
    }
  }
  if ( dword_1801C8B80 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B80);
    if ( dword_1801C8B80 == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010C380;
      *((_QWORD *)&v146 + 1) = &unk_18010CCC8;
      *(_QWORD *)&v150 = 0x100000005LL;
      v33 = sub_18009A0E8();
      v34 = sub_180073668(v151, 8LL, (__int64)v33, 6);
      v35 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v34);
      v36 = sub_18001B448((__int64)v153, v35, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v36, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B80);
    }
  }
  if ( dword_1801C8B84 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B84);
    if ( dword_1801C8B84 == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010AEC0;
      *((_QWORD *)&v146 + 1) = &unk_18010B910;
      *(_QWORD *)&v150 = 0x100000005LL;
      v37 = sub_18009A0E8();
      v38 = sub_180073668(v151, 9LL, (__int64)v37, 6);
      v39 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v38);
      v40 = sub_18001B448((__int64)v153, v39, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v40, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B84);
    }
  }
  if ( dword_1801C8B88 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B88);
    if ( dword_1801C8B88 == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010E290;
      *((_QWORD *)&v146 + 1) = &unk_18010ED40;
      *(_QWORD *)&v150 = 0x100000005LL;
      v41 = sub_18009A0E8();
      v42 = sub_180073668(v151, 10LL, (__int64)v41, 6);
      v43 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v42);
      v44 = sub_18001B448((__int64)v153, v43, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v44, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B88);
    }
  }
  if ( dword_1801C8B8C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B8C);
    if ( dword_1801C8B8C == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010CCD0;
      *((_QWORD *)&v146 + 1) = &unk_18010D888;
      *(_QWORD *)&v150 = 0x100000005LL;
      v45 = sub_18009A0E8();
      v46 = sub_180073668(v151, 11LL, (__int64)v45, 6);
      v47 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v46);
      v48 = sub_18001B448((__int64)v153, v47, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v48, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B8C);
    }
  }
  if ( dword_1801C8B90 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B90);
    if ( dword_1801C8B90 == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010D890;
      *((_QWORD *)&v146 + 1) = &unk_18010E288;
      *(_QWORD *)&v150 = 0x100000005LL;
      v49 = sub_18009A0E8();
      v50 = sub_180073668(v151, 12LL, (__int64)v49, 6);
      v51 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v50);
      v52 = sub_18001B448((__int64)v153, v51, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v52, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B90);
    }
  }
  if ( dword_1801C8B94 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B94);
    if ( dword_1801C8B94 == -1 )
    {
      *(_QWORD *)&v146 = &unk_1801079D0;
      *((_QWORD *)&v146 + 1) = &unk_1801084D0;
      *(_QWORD *)&v150 = 0x100000005LL;
      v53 = sub_18009A0E8();
      v54 = sub_180073668(v151, 13LL, (__int64)v53, 6);
      v55 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v54);
      v56 = sub_18001B448((__int64)v153, v55, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v56, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B94);
    }
  }
  if ( dword_1801C8B98 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B98);
    if ( dword_1801C8B98 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106E70;
      *((_QWORD *)&v146 + 1) = &unk_1801079D0;
      *(_QWORD *)&v150 = 0x100000005LL;
      v57 = sub_18009A0E8();
      v58 = sub_180073668(v151, 14LL, (__int64)v57, 6);
      v59 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v58);
      v60 = sub_18001B448((__int64)v153, v59, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v60, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B98);
    }
  }
  if ( dword_1801C8B9C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8B9C);
    if ( dword_1801C8B9C == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010A060;
      *((_QWORD *)&v146 + 1) = &unk_18010ACC8;
      *(_QWORD *)&v150 = 0x100000005LL;
      v61 = sub_18009A0E8();
      v62 = sub_180073668(v151, 15LL, (__int64)v61, 6);
      v63 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v62);
      v64 = sub_18001B448((__int64)v153, v63, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v64, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8B9C);
    }
  }
  if ( dword_1801C8BA0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BA0);
    if ( dword_1801C8BA0 == -1 )
    {
      *(_QWORD *)&v146 = &unk_18010ACD0;
      *((_QWORD *)&v146 + 1) = &unk_18010AEBC;
      *(_QWORD *)&v150 = 0x100000005LL;
      v65 = sub_18009A0E8();
      v66 = sub_180073668(v151, 16LL, (__int64)v65, 6);
      v67 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v66);
      v68 = sub_18001B448((__int64)v153, v67, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v68, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BA0);
    }
  }
  if ( dword_1801C8BA4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BA4);
    if ( dword_1801C8BA4 == -1 )
    {
      *(_QWORD *)&v146 = &unk_1801084D0;
      *((_QWORD *)&v146 + 1) = &unk_18010A060;
      *(_QWORD *)&v150 = 0x100000005LL;
      v69 = sub_18009A0E8();
      v70 = sub_180073668(v151, 32LL, (__int64)v69, 6);
      v71 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v70);
      v72 = sub_18001B448((__int64)v153, v71, (__int64)"/Pixel");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v72, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BA4);
    }
  }
  if ( dword_1801C8BA8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BA8);
    if ( dword_1801C8BA8 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v73 = sub_18009A0E8();
      v74 = sub_180073668(v151, 0LL, (__int64)v73, 6);
      v75 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v74);
      v76 = sub_18001B448((__int64)v153, v75, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v76, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BA8);
    }
  }
  if ( dword_1801C8BAC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BAC);
    if ( dword_1801C8BAC == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v77 = sub_18009A0E8();
      v78 = sub_180073668(v151, 1LL, (__int64)v77, 6);
      v79 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v78);
      v80 = sub_18001B448((__int64)v153, v79, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v80, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BAC);
    }
  }
  if ( dword_1801C8BB0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BB0);
    if ( dword_1801C8BB0 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v81 = sub_18009A0E8();
      v82 = sub_180073668(v151, 2LL, (__int64)v81, 6);
      v83 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v82);
      v84 = sub_18001B448((__int64)v153, v83, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v84, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BB0);
    }
  }
  if ( dword_1801C8BB4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BB4);
    if ( dword_1801C8BB4 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v85 = sub_18009A0E8();
      v86 = sub_180073668(v151, 3LL, (__int64)v85, 6);
      v87 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v86);
      v88 = sub_18001B448((__int64)v153, v87, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v88, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BB4);
    }
  }
  if ( dword_1801C8BB8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BB8);
    if ( dword_1801C8BB8 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v89 = sub_18009A0E8();
      v90 = sub_180073668(v151, 4LL, (__int64)v89, 6);
      v91 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v90);
      v92 = sub_18001B448((__int64)v153, v91, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v92, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BB8);
    }
  }
  if ( dword_1801C8BBC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BBC);
    if ( dword_1801C8BBC == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v93 = sub_18009A0E8();
      v94 = sub_180073668(v151, 5LL, (__int64)v93, 6);
      v95 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v94);
      v96 = sub_18001B448((__int64)v153, v95, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v96, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BBC);
    }
  }
  if ( dword_1801C8BC0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BC0);
    if ( dword_1801C8BC0 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v97 = sub_18009A0E8();
      v98 = sub_180073668(v151, 6LL, (__int64)v97, 6);
      v99 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v98);
      v100 = sub_18001B448((__int64)v153, v99, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v100, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BC0);
    }
  }
  if ( dword_1801C8BC4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BC4);
    if ( dword_1801C8BC4 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v101 = sub_18009A0E8();
      v102 = sub_180073668(v151, 7LL, (__int64)v101, 6);
      v103 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v102);
      v104 = sub_18001B448((__int64)v153, v103, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v104, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BC4);
    }
  }
  if ( dword_1801C8BC8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BC8);
    if ( dword_1801C8BC8 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v105 = sub_18009A0E8();
      v106 = sub_180073668(v151, 8LL, (__int64)v105, 6);
      v107 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v106);
      v108 = sub_18001B448((__int64)v153, v107, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v108, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BC8);
    }
  }
  if ( dword_1801C8BCC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BCC);
    if ( dword_1801C8BCC == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v109 = sub_18009A0E8();
      v110 = sub_180073668(v151, 9LL, (__int64)v109, 6);
      v111 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v110);
      v112 = sub_18001B448((__int64)v153, v111, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v112, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BCC);
    }
  }
  if ( dword_1801C8BD0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BD0);
    if ( dword_1801C8BD0 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v113 = sub_18009A0E8();
      v114 = sub_180073668(v151, 10LL, (__int64)v113, 6);
      v115 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v114);
      v116 = sub_18001B448((__int64)v153, v115, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v116, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BD0);
    }
  }
  if ( dword_1801C8BD4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BD4);
    if ( dword_1801C8BD4 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v117 = sub_18009A0E8();
      v118 = sub_180073668(v151, 11LL, (__int64)v117, 6);
      v119 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v118);
      v120 = sub_18001B448((__int64)v153, v119, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v120, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BD4);
    }
  }
  if ( dword_1801C8BD8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BD8);
    if ( dword_1801C8BD8 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v121 = sub_18009A0E8();
      v122 = sub_180073668(v151, 12LL, (__int64)v121, 6);
      v123 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v122);
      v124 = sub_18001B448((__int64)v153, v123, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v124, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BD8);
    }
  }
  if ( dword_1801C8BDC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BDC);
    if ( dword_1801C8BDC == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v125 = sub_18009A0E8();
      v126 = sub_180073668(v151, 13LL, (__int64)v125, 6);
      v127 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v126);
      v128 = sub_18001B448((__int64)v153, v127, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v128, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BDC);
    }
  }
  if ( dword_1801C8BE0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BE0);
    if ( dword_1801C8BE0 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v129 = sub_18009A0E8();
      v130 = sub_180073668(v151, 14LL, (__int64)v129, 6);
      v131 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v130);
      v132 = sub_18001B448((__int64)v153, v131, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v132, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BE0);
    }
  }
  if ( dword_1801C8BE4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BE4);
    if ( dword_1801C8BE4 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v133 = sub_18009A0E8();
      v134 = sub_180073668(v151, 15LL, (__int64)v133, 6);
      v135 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v134);
      v136 = sub_18001B448((__int64)v153, v135, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v136, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BE4);
    }
  }
  if ( dword_1801C8BE8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BE8);
    if ( dword_1801C8BE8 == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106320;
      *((_QWORD *)&v146 + 1) = &unk_180106738;
      *(_QWORD *)&v150 = 0x100000001LL;
      v137 = sub_18009A0E8();
      v138 = sub_180073668(v151, 16LL, (__int64)v137, 6);
      v139 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v138);
      v140 = sub_18001B448((__int64)v153, v139, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v140, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BE8);
    }
  }
  if ( dword_1801C8BEC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000C8D0(&dword_1801C8BEC);
    if ( dword_1801C8BEC == -1 )
    {
      *(_QWORD *)&v146 = &unk_180106740;
      *((_QWORD *)&v146 + 1) = &unk_180106E70;
      *(_QWORD *)&v150 = 0x100000001LL;
      v141 = sub_18009A0E8();
      v142 = sub_180073668(v151, 32LL, (__int64)v141, 6);
      v143 = sub_18001B518((__int64)v152, (__int64)"BackgroundUnlit/ShaderModel40/", v142);
      v144 = sub_18001B448((__int64)v153, v143, (__int64)"/Vertex");
      v147 = v146;
      v148 = v150;
      sub_18007370C(v144, (__int64)&v147);
      sub_180011A5C((__int64)v152);
      sub_180011A5C((__int64)v151);
      Init_thread_footer(&dword_1801C8BEC);
    }
  }
  return 0LL;
}
