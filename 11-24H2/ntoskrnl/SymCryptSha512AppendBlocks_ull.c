/*
 * XREFs of SymCryptSha512AppendBlocks_ull @ 0x140523214
 * Callers:
 *     SymCryptSha512Append @ 0x140523138 (SymCryptSha512Append.c)
 *     SymCryptSha512Result @ 0x140524730 (SymCryptSha512Result.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha512AppendBlocks_ull(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // rbx
  unsigned __int64 *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  __int64 v23; // r11
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r8
  __int64 v26; // rbx
  unsigned __int64 v27; // r12
  __int64 v28; // r8
  __int64 v29; // rsi
  unsigned __int64 v30; // r13
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned __int64 v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r15
  unsigned __int64 v36; // r10
  __int64 v37; // r8
  __int64 v38; // r12
  __int64 v39; // r9
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // r11
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r13
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // r13
  unsigned __int64 v67; // r15
  __int64 *v68; // r10
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // r10
  unsigned __int64 v73; // r11
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // r11
  unsigned __int64 v76; // rbx
  unsigned __int64 v77; // r9
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // r13
  unsigned __int64 v80; // r8
  __int64 v81; // rdi
  unsigned __int64 v82; // rsi
  unsigned __int64 v83; // r10
  __int64 v84; // rsi
  unsigned __int64 v85; // r14
  unsigned __int64 v86; // r11
  __int64 v87; // r14
  unsigned __int64 v88; // r9
  unsigned __int64 v89; // rbx
  __int64 v90; // r9
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // rdi
  __int64 v93; // r8
  unsigned __int64 v94; // r10
  unsigned __int64 v95; // rsi
  __int64 v96; // r12
  unsigned __int64 v97; // r11
  unsigned __int64 v98; // r14
  __int64 v99; // r11
  unsigned __int64 v100; // rbx
  unsigned __int64 v101; // r9
  __int64 v102; // rbx
  unsigned __int64 v103; // rdi
  unsigned __int64 v104; // r8
  __int64 v105; // r13
  __int64 v106; // rsi
  __int64 v107; // r14
  __int64 v108; // r9
  __int64 v109; // r8
  bool v110; // zf
  __int64 *v112; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v114; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v115; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v116; // [rsp+38h] [rbp-C8h]
  unsigned __int64 *v117; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v118; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v119; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v120; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v121; // [rsp+70h] [rbp-90h]
  unsigned __int64 v122; // [rsp+80h] [rbp-80h]
  unsigned __int64 v123; // [rsp+90h] [rbp-70h]
  unsigned __int64 v124; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v125; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v126; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v127; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v128; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v129; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v130; // [rsp+F0h] [rbp-10h]
  __int64 v131; // [rsp+100h] [rbp+0h]
  __int64 v132; // [rsp+108h] [rbp+8h]
  unsigned __int64 v133; // [rsp+110h] [rbp+10h]
  __int64 v134; // [rsp+120h] [rbp+20h]
  __int64 v135; // [rsp+128h] [rbp+28h]
  __int64 v136; // [rsp+130h] [rbp+30h]
  __int64 v137; // [rsp+138h] [rbp+38h]
  __int64 v138; // [rsp+140h] [rbp+40h]
  __int64 v139; // [rsp+148h] [rbp+48h]
  unsigned __int64 v140; // [rsp+150h] [rbp+50h]
  unsigned __int64 v142; // [rsp+160h] [rbp+60h]
  _QWORD v143[16]; // [rsp+170h] [rbp+70h] BYREF

  if ( a3 >= 0x80 )
  {
    v4 = *a1;
    v5 = (unsigned __int64 *)(a2 + 16);
    v6 = a1[1];
    v7 = a1[2];
    v8 = a1[4];
    v9 = a1[5];
    v10 = a1[6];
    v11 = a1[7];
    v12 = a1[3];
    v140 = a3 >> 7;
    v134 = *a1;
    v135 = v6;
    v142 = -128LL * (a3 >> 7) + a3;
    v136 = v7;
    v138 = v8;
    v131 = v9;
    v132 = v10;
    v139 = v11;
    v137 = v12;
    v117 = (unsigned __int64 *)(a2 + 16);
    do
    {
      v130 = _byteswap_uint64(*(v5 - 2));
      v13 = v11
          + v130
          + __ROR8__(v8 ^ __ROR8__(v8, 27) ^ __ROR8__(v8, 4), 14)
          + (v10 ^ v8 & (v10 ^ v9))
          + 0x428A2F98D728AE22LL;
      v14 = v12 + v13;
      v15 = (v12 + v13) & (v9 ^ v8);
      v16 = __ROR8__(v12 + v13, 4);
      v17 = __ROR8__(v4 ^ __ROR8__(v4, 6) ^ __ROR8__(v4, 11), 28) + v13 + (v7 & v6 | v4 & (v7 | v6));
      v128 = _byteswap_uint64(*(v5 - 1));
      v18 = v132 + v128 + __ROR8__(v14 ^ __ROR8__(v14, 27) ^ v16, 14) + (v9 ^ v15) + 0x7137449123EF65CDLL;
      v19 = v7 + v18;
      v20 = __ROR8__(v7 + v18, 4);
      v21 = __ROR8__(v17 ^ __ROR8__(v17, 6) ^ __ROR8__(v17, 11), 28) + v18 + (v6 & v4 | v17 & (v6 | v4));
      v127 = _byteswap_uint64(*v5);
      v22 = __ROR8__(v19 ^ v20 ^ __ROR8__(v19, 27), 14) + v131 + (v8 ^ v19 & (v14 ^ v8)) - 0x4A3F043013B2C4D1LL + v127;
      v23 = v6 + v22;
      v24 = __ROR8__(v21 ^ __ROR8__(v21, 6) ^ __ROR8__(v21, 11), 28) + v22 + (v17 & v4 | v21 & (v17 | v4));
      v118 = _byteswap_uint64(v117[1]);
      v25 = v8
          + __ROR8__((v6 + v22) ^ __ROR8__(v6 + v22, 27) ^ __ROR8__(v6 + v22, 4), 14)
          + (v14 ^ (v6 + v22) & (v19 ^ v14))
          - 0x164A245A7E762444LL
          + v118;
      v26 = v25 + v4;
      v27 = __ROR8__(v24 ^ __ROR8__(v24, 6) ^ __ROR8__(v24, 11), 28) + v25 + (v21 & v17 | v24 & (v21 | v17));
      v119 = _byteswap_uint64(v117[2]);
      v28 = v14
          + v119
          + __ROR8__(v26 ^ __ROR8__(v26, 27) ^ __ROR8__(v26, 4), 14)
          + (v19 ^ v26 & (v23 ^ v19))
          + 0x3956C25BF348B538LL;
      v29 = v28 + v17;
      v30 = __ROR8__(v27 ^ __ROR8__(v27, 6) ^ __ROR8__(v27, 11), 28) + v28 + (v24 & v21 | v27 & (v24 | v21));
      v121 = _byteswap_uint64(v117[3]);
      v31 = v19
          + v121
          + __ROR8__(v29 ^ __ROR8__(v29, 27) ^ __ROR8__(v29, 4), 14)
          + (v23 ^ v29 & (v26 ^ v23))
          + 0x59F111F1B605D019LL;
      v32 = v31 + v21;
      v33 = __ROR8__(v30 ^ __ROR8__(v30, 6) ^ __ROR8__(v30, 11), 28) + v31 + (v27 & v24 | v30 & (v27 | v24));
      v122 = _byteswap_uint64(v117[4]);
      v34 = v23
          + v122
          + __ROR8__(v32 ^ __ROR8__(v32, 27) ^ __ROR8__(v32, 4), 14)
          + (v26 ^ v32 & (v26 ^ v29))
          - 0x6DC07D5B50E6B065LL;
      v35 = v34 + v24;
      v36 = __ROR8__(v33 ^ __ROR8__(v33, 6) ^ __ROR8__(v33, 11), 28) + v34 + (v30 & v27 | v33 & (v30 | v27));
      v123 = _byteswap_uint64(v117[5]);
      v37 = v26
          + v123
          + __ROR8__(v35 ^ __ROR8__(v35, 27) ^ __ROR8__(v35, 4), 14)
          + (v29 ^ v35 & (v32 ^ v29))
          - 0x54E3A12A25927EE8LL;
      v38 = v37 + v27;
      v39 = __ROR8__(v36 ^ __ROR8__(v36, 6) ^ __ROR8__(v36, 11), 28) + v37 + (v33 & v30 | v36 & (v33 | v30));
      v125 = _byteswap_uint64(v117[6]);
      v40 = v29
          + __ROR8__(v38 ^ __ROR8__(v38, 27) ^ __ROR8__(v38, 4), 14)
          + (v32 ^ v38 & (v35 ^ v32))
          - 0x27F855675CFCFDBELL
          + v125;
      v41 = v40 + v30;
      v129 = _byteswap_uint64(v117[7]);
      v115 = __ROR8__(v39 ^ __ROR8__(v39, 6) ^ __ROR8__(v39, 11), 28) + v40 + (v36 & v33 | v39 & (v36 | v33));
      v42 = v32
          + __ROR8__(v41 ^ __ROR8__(v41, 27) ^ __ROR8__(v41, 4), 14)
          + (v35 ^ v41 & (v38 ^ v35))
          + 0x12835B0145706FBELL
          + v129;
      v43 = v42 + v33;
      v44 = __ROR8__(v115 ^ __ROR8__(v115, 6) ^ __ROR8__(v115, 11), 28) + v42 + (v115 & (v39 | v36) | v39 & v36);
      v120 = _byteswap_uint64(v117[8]);
      v45 = v35
          + __ROR8__(v43 ^ __ROR8__(v43, 27) ^ __ROR8__(v43, 4), 14)
          + (v38 ^ v43 & (v41 ^ v38))
          + 0x243185BE4EE4B28CLL
          + v120;
      v46 = v45 + v36;
      v47 = __ROR8__(v44 ^ __ROR8__(v44, 6) ^ __ROR8__(v44, 11), 28) + v45 + (v44 & (v39 | v115) | v39 & v115);
      v126 = _byteswap_uint64(v117[9]);
      v48 = v38
          + __ROR8__(v46 ^ __ROR8__(v46, 27) ^ __ROR8__(v46, 4), 14)
          + (v41 ^ v46 & (v43 ^ v41))
          + 0x550C7DC3D5FFB4E2LL
          + v126;
      v49 = v48 + v39;
      v50 = v41 + __ROR8__(v49 ^ __ROR8__(v49, 27) ^ __ROR8__(v49, 4), 14);
      v51 = __ROR8__(v47 ^ __ROR8__(v47, 6) ^ __ROR8__(v47, 11), 28) + (v44 & v115 | v47 & (v44 | v115)) + v48;
      v133 = _byteswap_uint64(v117[10]);
      v52 = v50 + (v43 ^ v49 & (v46 ^ v43)) + 0x72BE5D74F27B896FLL + v133;
      v53 = v52 + v115;
      v54 = v46 ^ (v52 + v115) & (v49 ^ v46);
      v55 = __ROR8__(v52 + v115, 4);
      v56 = __ROR8__(v51 ^ __ROR8__(v51, 6) ^ __ROR8__(v51, 11), 28) + v52 + (v47 & v44 | v51 & (v47 | v44));
      v116 = _byteswap_uint64(v117[11]);
      v57 = v43 + __ROR8__(v53 ^ __ROR8__(v53, 27) ^ v55, 14) + v54 - 0x7F214E01C4E9694FLL + v116;
      v58 = v57 + v44;
      v59 = __ROR8__(v56 ^ __ROR8__(v56, 6) ^ __ROR8__(v56, 11), 28) + v57 + (v51 & v47 | v56 & (v51 | v47));
      v124 = _byteswap_uint64(v117[12]);
      v60 = v46
          + __ROR8__(v58 ^ __ROR8__(v58, 27) ^ __ROR8__(v58, 4), 14)
          + (v49 ^ v58 & (v49 ^ v53))
          - 0x6423F958DA38EDCBLL
          + v124;
      v61 = v60 + v47;
      v62 = v49 + __ROR8__(v61 ^ __ROR8__(v61, 27) ^ __ROR8__(v61, 4), 14);
      v63 = __ROR8__(v59 ^ __ROR8__(v59, 6) ^ __ROR8__(v59, 11), 28) + v60 + (v59 & (v56 | v51) | v56 & v51);
      v64 = _byteswap_uint64(v117[13]);
      v65 = v64 + v62 + (v53 ^ v61 & (v58 ^ v53)) - 0x3E640E8B3096D96CLL;
      v114 = v64;
      v66 = v65 + v51;
      v67 = v133;
      v68 = qword_140020050;
      v112 = qword_140020050;
      v69 = __ROR8__(v63 ^ __ROR8__(v63, 6) ^ __ROR8__(v63, 11), 28) + (v59 & v56 | v63 & (v59 | v56)) + v65;
      do
      {
        v130 += ((v128 >> 7) ^ __ROR8__(v128 ^ __ROR8__(v128, 7), 1))
              + v129
              + ((v124 >> 6) ^ __ROR8__(v124 ^ __ROR8__(v124, 42), 19));
        v143[0] = v130;
        v70 = v130
            + *(v68 - 2)
            + (v58 ^ v66 & (v61 ^ v58))
            + __ROR8__(v66 ^ __ROR8__(v66, 4) ^ __ROR8__(v66, 27), 14)
            + v53;
        v71 = v70 + v56;
        v72 = __ROR8__(v69 ^ __ROR8__(v69, 6) ^ __ROR8__(v69, 11), 28) + v70 + (v63 & v59 | v69 & (v63 | v59));
        v128 += ((v64 >> 6) ^ __ROR8__(v64 ^ __ROR8__(v64, 42), 19))
              + v120
              + ((v127 >> 7) ^ __ROR8__(v127 ^ __ROR8__(v127, 7), 1));
        v143[1] = v128;
        v73 = v128
            + *(v112 - 1)
            + (v61 ^ v71 & (v66 ^ v61))
            + __ROR8__(v71 ^ __ROR8__(v71, 4) ^ __ROR8__(v71, 27), 14)
            + v58;
        v74 = v73 + v59;
        v75 = __ROR8__(v72 ^ __ROR8__(v72, 6) ^ __ROR8__(v72, 11), 28) + (v69 & v63 | v72 & (v69 | v63)) + v73;
        v127 += ((v118 >> 7) ^ __ROR8__(v118 ^ __ROR8__(v118, 7), 1))
              + v126
              + ((v130 >> 6) ^ __ROR8__(v130 ^ __ROR8__(v130, 42), 19));
        v143[2] = v127;
        v76 = v127 + *v112 + (v66 ^ v74 & (v71 ^ v66)) + __ROR8__(v74 ^ __ROR8__(v74, 4) ^ __ROR8__(v74, 27), 14) + v61;
        v77 = v76 + v63;
        v78 = __ROR8__(v75 ^ __ROR8__(v75, 6) ^ __ROR8__(v75, 11), 28) + (v69 & v72 | v75 & (v69 | v72)) + v76;
        v118 += ((v119 >> 7) ^ __ROR8__(v119 ^ __ROR8__(v119, 7), 1))
              + v67
              + ((v128 >> 6) ^ __ROR8__(v128 ^ __ROR8__(v128, 42), 19));
        v143[3] = v118;
        v79 = v118
            + v112[1]
            + (v71 ^ v77 & (v74 ^ v71))
            + __ROR8__(v77 ^ __ROR8__(v77, 4) ^ __ROR8__(v77, 27), 14)
            + v66;
        v80 = v79 + v69;
        v81 = __ROR8__(v78 ^ __ROR8__(v78, 6) ^ __ROR8__(v78, 11), 28) + v79 + (v75 & v72 | v78 & (v75 | v72));
        v119 += ((v121 >> 7) ^ __ROR8__(v121 ^ __ROR8__(v121, 7), 1))
              + v116
              + ((v127 >> 6) ^ __ROR8__(v127 ^ __ROR8__(v127, 42), 19));
        v143[4] = v119;
        v82 = v119
            + v112[2]
            + (v74 ^ v80 & (v77 ^ v74))
            + __ROR8__(v80 ^ __ROR8__(v80, 4) ^ __ROR8__(v80, 27), 14)
            + v71;
        v83 = v82 + v72;
        v84 = __ROR8__(v81 ^ __ROR8__(v81, 6) ^ __ROR8__(v81, 11), 28) + (v78 & v75 | v81 & (v78 | v75)) + v82;
        v121 += ((v122 >> 7) ^ __ROR8__(v122 ^ __ROR8__(v122, 7), 1))
              + v124
              + ((v118 >> 6) ^ __ROR8__(v118 ^ __ROR8__(v118, 42), 19));
        v143[5] = v121;
        v85 = v121
            + v112[3]
            + (v77 ^ v83 & (v80 ^ v77))
            + __ROR8__(v83 ^ __ROR8__(v83, 4) ^ __ROR8__(v83, 27), 14)
            + v74;
        v86 = v85 + v75;
        v87 = __ROR8__(v84 ^ __ROR8__(v84, 6) ^ __ROR8__(v84, 11), 28) + (v81 & v78 | v84 & (v81 | v78)) + v85;
        v122 += ((v123 >> 7) ^ __ROR8__(v123 ^ __ROR8__(v123, 7), 1))
              + v114
              + ((v119 >> 6) ^ __ROR8__(v119 ^ __ROR8__(v119, 42), 19));
        v143[6] = v122;
        v88 = v122
            + v112[4]
            + (v80 ^ v86 & (v80 ^ v83))
            + __ROR8__(v86 ^ __ROR8__(v86, 4) ^ __ROR8__(v86, 27), 14)
            + v77;
        v89 = v88 + v78;
        v90 = __ROR8__(v87 ^ __ROR8__(v87, 6) ^ __ROR8__(v87, 11), 28) + (v84 & v81 | v87 & (v84 | v81)) + v88;
        v123 += ((v125 >> 7) ^ __ROR8__(v125 ^ __ROR8__(v125, 7), 1))
              + v130
              + ((v121 >> 6) ^ __ROR8__(v121 ^ __ROR8__(v121, 42), 19));
        v143[7] = v123;
        v91 = v123
            + v112[5]
            + (v83 ^ v89 & (v86 ^ v83))
            + __ROR8__(v89 ^ __ROR8__(v89, 4) ^ __ROR8__(v89, 27), 14)
            + v80;
        v92 = v91 + v81;
        v93 = __ROR8__(v90 ^ __ROR8__(v90, 6) ^ __ROR8__(v90, 11), 28) + (v87 & v84 | v90 & (v87 | v84)) + v91;
        v125 += ((v129 >> 7) ^ __ROR8__(v129 ^ __ROR8__(v129, 7), 1))
              + v128
              + ((v122 >> 6) ^ __ROR8__(v122 ^ __ROR8__(v122, 42), 19));
        v143[8] = v125;
        v94 = v125
            + v112[6]
            + (v86 ^ v92 & (v89 ^ v86))
            + __ROR8__(v92 ^ __ROR8__(v92, 4) ^ __ROR8__(v92, 27), 14)
            + v83;
        v95 = v94 + v84;
        v96 = __ROR8__(v93 ^ __ROR8__(v93, 6) ^ __ROR8__(v93, 11), 28) + v94 + (v90 & v87 | v93 & (v90 | v87));
        v129 += ((v123 >> 6) ^ __ROR8__(v123 ^ __ROR8__(v123, 42), 19))
              + v127
              + ((v120 >> 7) ^ __ROR8__(v120 ^ __ROR8__(v120, 7), 1));
        v143[9] = v129;
        v97 = v129
            + v112[7]
            + (v89 ^ v95 & (v92 ^ v89))
            + __ROR8__(v95 ^ __ROR8__(v95, 4) ^ __ROR8__(v95, 27), 14)
            + v86;
        v98 = v97 + v87;
        v99 = __ROR8__(v96 ^ __ROR8__(v96, 6) ^ __ROR8__(v96, 11), 28) + (v93 & v90 | v96 & (v93 | v90)) + v97;
        v120 += ((v126 >> 7) ^ __ROR8__(v126 ^ __ROR8__(v126, 7), 1))
              + v118
              + ((v125 >> 6) ^ __ROR8__(v125 ^ __ROR8__(v125, 42), 19));
        v143[10] = v120;
        v100 = v120
             + v112[8]
             + (v92 ^ v98 & (v95 ^ v92))
             + __ROR8__(v98 ^ __ROR8__(v98, 4) ^ __ROR8__(v98, 27), 14)
             + v89;
        v101 = v100 + v90;
        v102 = __ROR8__(v99 ^ __ROR8__(v99, 6) ^ __ROR8__(v99, 11), 28) + (v93 & v96 | v99 & (v93 | v96)) + v100;
        v126 += ((v129 >> 6) ^ __ROR8__(v129 ^ __ROR8__(v129, 42), 19))
              + v119
              + ((v67 >> 7) ^ __ROR8__(v67 ^ __ROR8__(v67, 7), 1));
        v143[11] = v126;
        v103 = v126
             + v112[9]
             + (v95 ^ v101 & (v98 ^ v95))
             + __ROR8__(v101 ^ __ROR8__(v101, 4) ^ __ROR8__(v101, 27), 14)
             + v92;
        v104 = v103 + v93;
        v105 = __ROR8__(v102 ^ __ROR8__(v102, 6) ^ __ROR8__(v102, 11), 28) + v103 + (v99 & v96 | v102 & (v99 | v96));
        v67 += v121
             + ((v116 >> 7) ^ __ROR8__(v116 ^ __ROR8__(v116, 7), 1))
             + ((v120 >> 6) ^ __ROR8__(v120 ^ __ROR8__(v120, 42), 19));
        v106 = v67
             + v112[10]
             + (v98 ^ v104 & (v101 ^ v98))
             + __ROR8__(v104 ^ __ROR8__(v104, 4) ^ __ROR8__(v104, 27), 14)
             + v95;
        v53 = v106 + v96;
        v56 = __ROR8__(v105 ^ __ROR8__(v105, 6) ^ __ROR8__(v105, 11), 28) + (v102 & v99 | v105 & (v102 | v99)) + v106;
        v116 += ((v126 >> 6) ^ __ROR8__(v126 ^ __ROR8__(v126, 42), 19))
              + v122
              + ((v124 >> 7) ^ __ROR8__(v124 ^ __ROR8__(v124, 7), 1));
        v143[13] = v116;
        v107 = v116
             + v112[11]
             + (v101 ^ v53 & (v104 ^ v101))
             + __ROR8__(v53 ^ __ROR8__(v53, 4) ^ __ROR8__(v53, 27), 14)
             + v98;
        v58 = v107 + v99;
        v59 = __ROR8__(v56 ^ __ROR8__(v56, 6) ^ __ROR8__(v56, 11), 28) + (v105 & v102 | v56 & (v105 | v102)) + v107;
        v124 += ((v114 >> 7) ^ __ROR8__(v114 ^ __ROR8__(v114, 7), 1))
              + v123
              + ((v67 >> 6) ^ __ROR8__(v67 ^ __ROR8__(v67, 42), 19));
        v143[14] = v124;
        v108 = v124
             + v112[12]
             + (v104 ^ v58 & (v104 ^ v53))
             + __ROR8__(v58 ^ __ROR8__(v58, 4) ^ __ROR8__(v58, 27), 14)
             + v101;
        v61 = v108 + v102;
        v63 = __ROR8__(v59 ^ __ROR8__(v59, 6) ^ __ROR8__(v59, 11), 28) + (v56 & v105 | v59 & (v56 | v105)) + v108;
        v64 = v125
            + ((v130 >> 7) ^ __ROR8__(v130 ^ __ROR8__(v130, 7), 1))
            + v114
            + (__ROR8__(v116 ^ __ROR8__(v116, 42), 19) ^ (v116 >> 6));
        v114 = v64;
        v143[15] = v64;
        v109 = v64
             + v112[13]
             + (v53 ^ v61 & (v58 ^ v53))
             + __ROR8__(v61 ^ __ROR8__(v61, 4) ^ __ROR8__(v61, 27), 14)
             + v104;
        v66 = v109 + v105;
        v68 = v112 + 16;
        v69 = __ROR8__(v63 ^ __ROR8__(v63, 6) ^ __ROR8__(v63, 11), 28) + (v59 & v56 | v63 & (v59 | v56)) + v109;
        v112 = v68;
      }
      while ( (__int64)v68 < (__int64)&SymCryptSha384InitialState );
      v6 = v63 + v135;
      v10 = v58 + v132;
      v9 = v61 + v131;
      v11 = v53 + v139;
      v4 = v69 + v134;
      v143[12] = v67;
      v5 = v117 + 16;
      v7 = v59 + v136;
      v12 = v56 + v137;
      v8 = v66 + v138;
      v110 = v140-- == 1;
      v134 = v4;
      *a1 = v4;
      v135 = v6;
      a1[1] = v6;
      v136 = v7;
      a1[2] = v7;
      v137 = v12;
      a1[3] = v12;
      v138 = v8;
      a1[4] = v8;
      v131 = v9;
      a1[5] = v9;
      v132 = v10;
      a1[6] = v10;
      v139 = v11;
      a1[7] = v11;
      v117 += 16;
    }
    while ( !v110 );
    a3 = v142;
  }
  *a4 = a3;
  SymCryptWipe((__int64)v143, 0x80uLL);
  return 0LL;
}
