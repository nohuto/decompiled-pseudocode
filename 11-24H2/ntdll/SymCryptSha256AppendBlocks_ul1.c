/*
 * XREFs of SymCryptSha256AppendBlocks_ul1 @ 0x180158774
 * Callers:
 *     SymCryptSha256Append @ 0x1801586A0 (SymCryptSha256Append.c)
 *     SymCryptSha256Result @ 0x1801599C4 (SymCryptSha256Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha256AppendBlocks_ul1(__m128i *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // rax
  __m128i *v5; // rdi
  __m128i v6; // xmm4
  unsigned int *v7; // r13
  __m128i v8; // xmm5
  __int32 v9; // esi
  __int32 v10; // ebp
  __int32 v11; // r9d
  __int32 v12; // r11d
  __int32 v13; // ebx
  __int32 v14; // r10d
  int v15; // r8d
  int v16; // r14d
  int v17; // edi
  int v18; // r8d
  __int32 v19; // r15d
  int v20; // r9d
  unsigned __int32 v21; // r8d
  unsigned __int32 v22; // r12d
  int v23; // r10d
  int v24; // r8d
  __int32 v25; // esi
  int v26; // r11d
  unsigned __int32 v27; // r8d
  unsigned __int32 v28; // ebp
  int v29; // ebx
  int v30; // r8d
  int v31; // r15d
  int v32; // ecx
  int v33; // r9d
  unsigned __int32 v34; // r8d
  unsigned __int32 v35; // edi
  int v36; // r10d
  int v37; // r8d
  int v38; // esi
  int v39; // ecx
  int v40; // r11d
  unsigned __int32 v41; // r8d
  unsigned __int32 v42; // r14d
  int v43; // ebx
  unsigned __int32 v44; // r8d
  unsigned __int32 v45; // ebp
  int v46; // ecx
  int v47; // r9d
  unsigned __int32 v48; // r8d
  unsigned __int32 v49; // edi
  int v50; // r10d
  unsigned __int32 v51; // r8d
  unsigned __int32 v52; // esi
  int v53; // r11d
  unsigned __int32 v54; // r8d
  unsigned int v55; // r14d
  unsigned int v56; // ebx
  int v57; // r8d
  unsigned __int32 v58; // ebp
  unsigned int v59; // r15d
  unsigned int v60; // r9d
  unsigned __int32 v61; // r8d
  unsigned int v62; // r12d
  unsigned int v63; // r10d
  unsigned __int32 v64; // edx
  unsigned __int32 v65; // r13d
  unsigned int v66; // r8d
  unsigned int v67; // r11d
  unsigned __int32 v68; // edx
  unsigned __int32 v69; // ebx
  int v70; // r8d
  unsigned __int32 v71; // edx
  unsigned __int32 v72; // edi
  int v73; // r9d
  unsigned __int32 v74; // edx
  unsigned __int32 v75; // esi
  int v76; // r10d
  unsigned __int32 v77; // edx
  unsigned __int32 v78; // ebp
  int v79; // r11d
  unsigned __int32 v80; // edx
  unsigned __int32 v81; // ebx
  int v82; // r8d
  unsigned __int32 v83; // edx
  unsigned __int32 v84; // edi
  int v85; // r9d
  unsigned __int32 v86; // edx
  unsigned __int32 v87; // esi
  int v88; // r10d
  unsigned __int32 v89; // edx
  unsigned __int32 v90; // ebp
  int v91; // r11d
  unsigned __int32 v92; // edx
  unsigned __int32 v93; // r8d
  int v94; // ebx
  unsigned __int32 v95; // edx
  unsigned __int32 v96; // edi
  int v97; // r9d
  unsigned __int32 v98; // edx
  unsigned __int32 v99; // esi
  int v100; // r10d
  unsigned __int32 v101; // edx
  unsigned __int32 v102; // ebp
  int v103; // r11d
  unsigned __int32 v104; // r8d
  unsigned __int32 v105; // r8d
  unsigned __int32 v106; // r8d
  unsigned __int32 v107; // r8d
  unsigned __int32 v108; // r8d
  unsigned int v109; // esi
  bool v110; // zf
  _DWORD *v112; // [rsp+0h] [rbp-148h]
  unsigned __int32 v113; // [rsp+8h] [rbp-140h]
  unsigned __int32 v114; // [rsp+Ch] [rbp-13Ch]
  unsigned __int32 v115; // [rsp+10h] [rbp-138h]
  unsigned __int32 v116; // [rsp+20h] [rbp-128h]
  unsigned __int32 v117; // [rsp+28h] [rbp-120h]
  unsigned __int32 v118; // [rsp+30h] [rbp-118h]
  unsigned __int32 v119; // [rsp+34h] [rbp-114h]
  unsigned __int32 v120; // [rsp+38h] [rbp-110h]
  unsigned __int32 v121; // [rsp+3Ch] [rbp-10Ch]
  unsigned __int32 v122; // [rsp+40h] [rbp-108h]
  unsigned __int32 v123; // [rsp+50h] [rbp-F8h]
  unsigned __int32 v124; // [rsp+60h] [rbp-E8h]
  unsigned __int32 v125; // [rsp+64h] [rbp-E4h]
  unsigned __int32 v126; // [rsp+68h] [rbp-E0h]
  unsigned __int32 v127; // [rsp+70h] [rbp-D8h]
  unsigned __int32 v128; // [rsp+80h] [rbp-C8h]
  unsigned __int32 v129; // [rsp+90h] [rbp-B8h]
  __int64 v130; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 v131; // [rsp+A8h] [rbp-A0h]
  unsigned __int64 v133; // [rsp+B8h] [rbp-90h]

  v4 = a4;
  v5 = a1;
  if ( a3 >= 0x40 )
  {
    v6 = _mm_loadu_si128(a1);
    v7 = (unsigned int *)(a2 + 8);
    v8 = _mm_loadu_si128(a1 + 1);
    v131 = a3 >> 6;
    v130 = a2 + 8;
    v133 = -64LL * (a3 >> 6) + a3;
    do
    {
      v9 = v5[1].m128i_i32[0];
      v10 = v5->m128i_i32[0];
      v11 = v5[1].m128i_i32[2];
      v12 = v5[1].m128i_i32[1];
      v13 = v5->m128i_i32[1];
      v14 = v5->m128i_i32[2];
      v123 = _byteswap_ulong(*(v7 - 2));
      v15 = v123
          + 1116352408
          + (__ROR4__(v9, 11) ^ __ROR4__(v9, 25) ^ __ROR4__(v9, 6))
          + (v11 ^ v9 & (v12 ^ v11))
          + v5[1].m128i_i32[3];
      v16 = v15 + v5->m128i_i32[3];
      v17 = v15
          + (__ROR4__(v5->m128i_i32[0], 2) ^ __ROR4__(v5->m128i_i32[0], 13) ^ __ROR4__(v5->m128i_i32[0], 22))
          + (v13 & v14 | v5->m128i_i32[0] & (v13 | v14));
      v125 = _byteswap_ulong(*(v7 - 1));
      v18 = v125
          + (__ROR4__(v16, 11) ^ __ROR4__(v16, 25) ^ __ROR4__(v16, 6))
          + (v12 ^ v16 & (v9 ^ v12))
          + v11
          + 1899447441;
      v19 = v18 + v14;
      v20 = v18 + (__ROR4__(v17, 2) ^ __ROR4__(v17, 13) ^ __ROR4__(v17, 22)) + (v10 & v13 | v17 & (v10 | v13));
      v117 = _byteswap_ulong(*v7);
      v21 = v12
          + (v9 ^ (v18 + v14) & (v9 ^ v16))
          - 1245643825
          + (__ROR4__(v18 + v14, 6) ^ __ROR4__(v18 + v14, 11) ^ __ROR4__(v18 + v14, 25))
          + v117;
      v22 = v21 + v13;
      v23 = v21 + (__ROR4__(v20, 2) ^ __ROR4__(v20, 13) ^ __ROR4__(v20, 22)) + (v10 & v17 | v20 & (v10 | v17));
      v114 = _byteswap_ulong(v7[1]);
      v24 = v9
          - 373957723
          + (v16 ^ (v21 + v13) & (v16 ^ v19))
          + (__ROR4__(v21 + v13, 6) ^ __ROR4__(v21 + v13, 11) ^ __ROR4__(v21 + v13, 25))
          + v114;
      v25 = v24 + v10;
      v26 = v24 + (__ROR4__(v23, 2) ^ __ROR4__(v23, 13) ^ __ROR4__(v23, 22)) + (v17 & v20 | v23 & (v17 | v20));
      v115 = _byteswap_ulong(v7[2]);
      v27 = v16
          + (v19 ^ (v24 + v10) & (v19 ^ v22))
          + 961987163
          + (__ROR4__(v24 + v10, 6) ^ __ROR4__(v24 + v10, 11) ^ __ROR4__(v24 + v10, 25))
          + v115;
      v28 = v27 + v17;
      v29 = v27 + (__ROR4__(v26, 2) ^ __ROR4__(v26, 13) ^ __ROR4__(v26, 22)) + (v20 & v23 | v26 & (v20 | v23));
      v113 = _byteswap_ulong(v7[3]);
      v30 = v19
          + 1508970993
          + (v22 ^ (v27 + v17) & (v22 ^ v25))
          + (__ROR4__(v27 + v17, 11) ^ __ROR4__(v27 + v17, 25) ^ __ROR4__(v27 + v17, 6))
          + v113;
      v31 = v30 + v20;
      v32 = (v30 + v20) & (v25 ^ v28);
      v33 = v30 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v23 & v26 | v29 & (v23 | v26));
      v116 = _byteswap_ulong(v7[4]);
      v34 = v22 + (v25 ^ v32) - 1841331548 + (__ROR4__(v31, 6) ^ __ROR4__(v31, 11) ^ __ROR4__(v31, 25)) + v116;
      v35 = v34 + v23;
      v36 = v34 + (__ROR4__(v33, 2) ^ __ROR4__(v33, 13) ^ __ROR4__(v33, 22)) + (v26 & v29 | v33 & (v26 | v29));
      v119 = _byteswap_ulong(v7[5]);
      v37 = v25
          - 1424204075
          + (v28 ^ v35 & (v28 ^ v31))
          + (__ROR4__(v35, 11) ^ __ROR4__(v35, 25) ^ __ROR4__(v35, 6))
          + v119;
      v38 = v37 + v26;
      v39 = (v37 + v26) & (v31 ^ v35);
      v40 = v37 + (__ROR4__(v36, 2) ^ __ROR4__(v36, 13) ^ __ROR4__(v36, 22)) + (v29 & v33 | v36 & (v29 | v33));
      v129 = _byteswap_ulong(v7[6]);
      v41 = v28 + (v31 ^ v39) - 670586216 + (__ROR4__(v38, 6) ^ __ROR4__(v38, 11) ^ __ROR4__(v38, 25)) + v129;
      v42 = v41 + v29;
      v43 = v41 + (__ROR4__(v40, 2) ^ __ROR4__(v40, 13) ^ __ROR4__(v40, 22)) + (v33 & v36 | v40 & (v33 | v36));
      v118 = _byteswap_ulong(v7[7]);
      v44 = v31
          + (v35 ^ v42 & (v35 ^ v38))
          + 310598401
          + (__ROR4__(v42, 6) ^ __ROR4__(v42, 11) ^ __ROR4__(v42, 25))
          + v118;
      v45 = v33 + v44;
      v46 = (v33 + v44) & (v38 ^ v42);
      v47 = v44 + (__ROR4__(v43, 2) ^ __ROR4__(v43, 13) ^ __ROR4__(v43, 22)) + (v36 & v40 | v43 & (v36 | v40));
      v126 = _byteswap_ulong(v7[8]);
      v48 = v35 + 607225278 + (__ROR4__(v45, 11) ^ __ROR4__(v45, 25) ^ __ROR4__(v45, 6)) + (v38 ^ v46) + v126;
      v49 = v36 + v48;
      v50 = v48 + (__ROR4__(v47, 2) ^ __ROR4__(v47, 13) ^ __ROR4__(v47, 22)) + (v40 & v43 | v47 & (v40 | v43));
      v127 = _byteswap_ulong(v7[9]);
      v51 = v38
          + 1426881987
          + (__ROR4__(v49, 11) ^ __ROR4__(v49, 25) ^ __ROR4__(v49, 6))
          + (v42 ^ v49 & (v45 ^ v42))
          + v127;
      v52 = v40 + v51;
      v53 = v51 + (__ROR4__(v50, 2) ^ __ROR4__(v50, 13) ^ __ROR4__(v50, 22)) + (v47 & v43 | v50 & (v47 | v43));
      v128 = _byteswap_ulong(v7[10]);
      v54 = v42
          + 1925078388
          + (__ROR4__(v52, 11) ^ __ROR4__(v52, 25) ^ __ROR4__(v52, 6))
          + (v45 ^ v52 & (v45 ^ v49))
          + v128;
      v55 = v43 + v54;
      v56 = v54 + (__ROR4__(v53, 2) ^ __ROR4__(v53, 13) ^ __ROR4__(v53, 22)) + (v47 & v50 | v53 & (v47 | v50));
      v120 = _byteswap_ulong(v7[11]);
      v57 = v120
          + (__ROR4__(v55, 11) ^ __ROR4__(v55, 25) ^ __ROR4__(v55, 6))
          + (v49 ^ v55 & (v49 ^ v52))
          + v45
          - 2132889090;
      v58 = _byteswap_ulong(v7[12]);
      v122 = v58;
      v59 = v57 + v47;
      v60 = v57 + (__ROR4__(v56, 2) ^ __ROR4__(v56, 13) ^ __ROR4__(v56, 22)) + (v50 & v53 | v56 & (v50 | v53));
      v61 = v49
          + v58
          + (__ROR4__(v59, 11) ^ __ROR4__(v59, 25) ^ __ROR4__(v59, 6))
          - 1680079193
          + (v52 ^ v59 & (v52 ^ v55));
      v62 = v61 + v50;
      v63 = v61 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22)) + (v53 & v56 | v60 & (v53 | v56));
      v124 = _byteswap_ulong(v7[13]);
      v64 = v52
          + (v55 ^ v62 & (v55 ^ v59))
          - 1046744716
          + v124
          + (__ROR4__(v62, 6) ^ __ROR4__(v62, 11) ^ __ROR4__(v62, 25));
      v65 = v129;
      v66 = v64 + v53;
      v121 = v64 + v53;
      v67 = v64 + (__ROR4__(v63, 2) ^ __ROR4__(v63, 13) ^ __ROR4__(v63, 22)) + (v56 & v60 | v63 & (v56 | v60));
      v112 = &unk_180199648;
      while ( 1 )
      {
        v123 += ((v58 >> 10) ^ __ROR4__(v58, 17) ^ __ROR4__(v58, 19))
              + v118
              + ((v125 >> 3) ^ __ROR4__(v125, 7) ^ __ROR4__(v125, 18));
        v68 = v123
            + v55
            + *(v112 - 2)
            + (v59 ^ v66 & (v62 ^ v59))
            + (__ROR4__(v66, 6) ^ __ROR4__(v66, 11) ^ __ROR4__(v66, 25));
        v69 = v68 + v56;
        v70 = v68 + (__ROR4__(v67, 2) ^ __ROR4__(v67, 13) ^ __ROR4__(v67, 22)) + (v63 & v60 | v67 & (v63 | v60));
        v125 += v126
              + ((v124 >> 10) ^ __ROR4__(v124, 17) ^ __ROR4__(v124, 19))
              + ((v117 >> 3) ^ __ROR4__(v117, 7) ^ __ROR4__(v117, 18));
        v71 = v125
            + v59
            + *(v112 - 1)
            + (v62 ^ v69 & (v121 ^ v62))
            + (__ROR4__(v69, 6) ^ __ROR4__(v69, 11) ^ __ROR4__(v69, 25));
        v72 = v71 + v60;
        v73 = v71 + (__ROR4__(v70, 2) ^ __ROR4__(v70, 13) ^ __ROR4__(v70, 22)) + (v67 & v63 | v70 & (v67 | v63));
        v117 += ((v123 >> 10) ^ __ROR4__(v123, 17) ^ __ROR4__(v123, 19))
              + v127
              + ((v114 >> 3) ^ __ROR4__(v114, 7) ^ __ROR4__(v114, 18));
        v74 = v62
            + *v112
            + (v121 ^ v72 & (v121 ^ v69))
            + (__ROR4__(v72, 6) ^ __ROR4__(v72, 11) ^ __ROR4__(v72, 25))
            + v117;
        v75 = v74 + v63;
        v76 = v74 + (__ROR4__(v73, 2) ^ __ROR4__(v73, 13) ^ __ROR4__(v73, 22)) + (v67 & v70 | v73 & (v67 | v70));
        v114 += ((v125 >> 10) ^ __ROR4__(v125, 17) ^ __ROR4__(v125, 19))
              + v128
              + ((v115 >> 3) ^ __ROR4__(v115, 7) ^ __ROR4__(v115, 18));
        v77 = v121
            + v112[1]
            + (v69 ^ v75 & (v72 ^ v69))
            + (__ROR4__(v75, 6) ^ __ROR4__(v75, 11) ^ __ROR4__(v75, 25))
            + v114;
        v78 = v77 + v67;
        v79 = v77 + (__ROR4__(v76, 2) ^ __ROR4__(v76, 13) ^ __ROR4__(v76, 22)) + (v73 & v70 | v76 & (v73 | v70));
        v115 += ((v113 >> 3) ^ __ROR4__(v113, 7) ^ __ROR4__(v113, 18))
              + v120
              + ((v117 >> 10) ^ __ROR4__(v117, 17) ^ __ROR4__(v117, 19));
        v80 = v69
            + v112[2]
            + (v72 ^ v78 & (v75 ^ v72))
            + (__ROR4__(v78, 6) ^ __ROR4__(v78, 11) ^ __ROR4__(v78, 25))
            + v115;
        v81 = v80 + v70;
        v82 = v80 + (__ROR4__(v79, 2) ^ __ROR4__(v79, 13) ^ __ROR4__(v79, 22)) + (v76 & v73 | v79 & (v76 | v73));
        v113 += ((v114 >> 10) ^ __ROR4__(v114, 17) ^ __ROR4__(v114, 19))
              + v122
              + ((v116 >> 3) ^ __ROR4__(v116, 7) ^ __ROR4__(v116, 18));
        v83 = v72
            + v112[3]
            + (v75 ^ v81 & (v78 ^ v75))
            + (__ROR4__(v81, 6) ^ __ROR4__(v81, 11) ^ __ROR4__(v81, 25))
            + v113;
        v84 = v83 + v73;
        v85 = v83 + (__ROR4__(v82, 2) ^ __ROR4__(v82, 13) ^ __ROR4__(v82, 22)) + (v79 & v76 | v82 & (v79 | v76));
        v116 += ((v115 >> 10) ^ __ROR4__(v115, 17) ^ __ROR4__(v115, 19))
              + v124
              + ((v119 >> 3) ^ __ROR4__(v119, 7) ^ __ROR4__(v119, 18));
        v86 = v75
            + v112[4]
            + (v78 ^ v84 & (v81 ^ v78))
            + (__ROR4__(v84, 6) ^ __ROR4__(v84, 11) ^ __ROR4__(v84, 25))
            + v116;
        v87 = v86 + v76;
        v88 = v86 + (__ROR4__(v85, 2) ^ __ROR4__(v85, 13) ^ __ROR4__(v85, 22)) + (v82 & v79 | v85 & (v82 | v79));
        v119 += ((v113 >> 10) ^ __ROR4__(v113, 17) ^ __ROR4__(v113, 19))
              + v123
              + ((v65 >> 3) ^ __ROR4__(v65, 7) ^ __ROR4__(v65, 18));
        v89 = v78
            + v112[5]
            + (v81 ^ v87 & (v84 ^ v81))
            + (__ROR4__(v87, 6) ^ __ROR4__(v87, 11) ^ __ROR4__(v87, 25))
            + v119;
        v90 = v89 + v79;
        v91 = v89 + (__ROR4__(v88, 2) ^ __ROR4__(v88, 13) ^ __ROR4__(v88, 22)) + (v85 & v82 | v88 & (v85 | v82));
        v65 += v125
             + ((v116 >> 10) ^ __ROR4__(v116, 17) ^ __ROR4__(v116, 19))
             + ((v118 >> 3) ^ __ROR4__(v118, 7) ^ __ROR4__(v118, 18));
        v92 = v65
            + v81
            + v112[6]
            + (v84 ^ v90 & (v87 ^ v84))
            + (__ROR4__(v90, 6) ^ __ROR4__(v90, 11) ^ __ROR4__(v90, 25));
        v93 = v92 + v82;
        v94 = v92 + (__ROR4__(v91, 2) ^ __ROR4__(v91, 13) ^ __ROR4__(v91, 22)) + (v88 & v85 | v91 & (v88 | v85));
        v118 += ((v126 >> 3) ^ __ROR4__(v126, 7) ^ __ROR4__(v126, 18))
              + v117
              + ((v119 >> 10) ^ __ROR4__(v119, 17) ^ __ROR4__(v119, 19));
        v95 = v84
            + v112[7]
            + (v87 ^ v93 & (v90 ^ v87))
            + (__ROR4__(v93, 6) ^ __ROR4__(v93, 11) ^ __ROR4__(v93, 25))
            + v118;
        v96 = v95 + v85;
        v97 = v95 + (__ROR4__(v94, 2) ^ __ROR4__(v94, 13) ^ __ROR4__(v94, 22)) + (v88 & v91 | v94 & (v88 | v91));
        v126 += v114
              + ((v65 >> 10) ^ __ROR4__(v65, 17) ^ __ROR4__(v65, 19))
              + ((v127 >> 3) ^ __ROR4__(v127, 7) ^ __ROR4__(v127, 18));
        v98 = v126
            + v87
            + v112[8]
            + (v90 ^ v96 & (v90 ^ v93))
            + (__ROR4__(v96, 6) ^ __ROR4__(v96, 11) ^ __ROR4__(v96, 25));
        v99 = v98 + v88;
        v100 = v98 + (__ROR4__(v97, 2) ^ __ROR4__(v97, 13) ^ __ROR4__(v97, 22)) + (v94 & v91 | v97 & (v94 | v91));
        v127 += v115
              + ((v128 >> 3) ^ __ROR4__(v128, 7) ^ __ROR4__(v128, 18))
              + ((v118 >> 10) ^ __ROR4__(v118, 17) ^ __ROR4__(v118, 19));
        v101 = v127
             + v90
             + v112[9]
             + (v93 ^ v99 & (v93 ^ v96))
             + (__ROR4__(v99, 6) ^ __ROR4__(v99, 11) ^ __ROR4__(v99, 25));
        v102 = v91 + v101;
        v103 = v101 + (__ROR4__(v100, 2) ^ __ROR4__(v100, 13) ^ __ROR4__(v100, 22)) + (v97 & v94 | v100 & (v97 | v94));
        v128 += v113
              + ((v126 >> 10) ^ __ROR4__(v126, 17) ^ __ROR4__(v126, 19))
              + ((v120 >> 3) ^ __ROR4__(v120, 7) ^ __ROR4__(v120, 18));
        v104 = v128
             + v112[10]
             + (v96 ^ v102 & (v99 ^ v96))
             + (__ROR4__(v102, 6) ^ __ROR4__(v102, 11) ^ __ROR4__(v102, 25))
             + v93;
        v55 = v94 + v104;
        v56 = v104 + (__ROR4__(v103, 2) ^ __ROR4__(v103, 13) ^ __ROR4__(v103, 22)) + (v100 & v97 | v103 & (v100 | v97));
        v120 += v116
              + ((v127 >> 10) ^ __ROR4__(v127, 17) ^ __ROR4__(v127, 19))
              + ((v122 >> 3) ^ __ROR4__(v122, 7) ^ __ROR4__(v122, 18));
        v105 = v120
             + v96
             + v112[11]
             + (v99 ^ v55 & (v102 ^ v99))
             + (__ROR4__(v55, 6) ^ __ROR4__(v55, 11) ^ __ROR4__(v55, 25));
        v59 = v97 + v105;
        v60 = v105 + (__ROR4__(v56, 2) ^ __ROR4__(v56, 13) ^ __ROR4__(v56, 22)) + (v103 & v100 | v56 & (v103 | v100));
        v122 += ((v124 >> 3) ^ __ROR4__(v124, 7) ^ __ROR4__(v124, 18))
              + v119
              + ((v128 >> 10) ^ __ROR4__(v128, 17) ^ __ROR4__(v128, 19));
        v106 = v122
             + v99
             + v112[12]
             + (v102 ^ v59 & (v55 ^ v102))
             + (__ROR4__(v59, 6) ^ __ROR4__(v59, 11) ^ __ROR4__(v59, 25));
        v62 = v100 + v106;
        v63 = v106 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22)) + (v56 & v103 | v60 & (v56 | v103));
        v124 += ((v123 >> 3) ^ __ROR4__(v123, 7) ^ __ROR4__(v123, 18))
              + v65
              + ((v120 >> 10) ^ __ROR4__(v120, 17) ^ __ROR4__(v120, 19));
        v107 = v102 + v112[13] + (v55 ^ v62 & (v59 ^ v55)) + (__ROR4__(v62, 6) ^ __ROR4__(v62, 11) ^ __ROR4__(v62, 25));
        v112 += 16;
        v108 = v124 + v107;
        v109 = v103 + v108;
        v121 = v103 + v108;
        v67 = v108 + (__ROR4__(v63, 2) ^ __ROR4__(v63, 13) ^ __ROR4__(v63, 22)) + (v60 & v56 | v63 & (v60 | v56));
        v58 = v122;
        if ( (__int64)v112 >= (__int64)"0__2026-05-07T00:16:03+00:00_0df2f18_2026-05-07T21:50:22" )
          break;
        v66 = v109;
      }
      v5 = a1;
      v7 = (unsigned int *)(v130 + 64);
      v110 = v131-- == 1;
      v6 = _mm_add_epi32(
             _mm_unpacklo_epi64(
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v67), _mm_cvtsi32_si128(v63)),
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), _mm_cvtsi32_si128(v56))),
             v6);
      *a1 = v6;
      v130 += 64LL;
      v8 = _mm_add_epi32(
             _mm_unpacklo_epi64(
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v109), _mm_cvtsi32_si128(v62)),
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(v55))),
             v8);
      a1[1] = v8;
    }
    while ( !v110 );
    a3 = v133;
    v4 = a4;
  }
  *v4 = a3;
  return 0LL;
}
