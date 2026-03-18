/*
 * XREFs of ?InitializeGlobals@Font@Gre@@YAXAEAUGLOBALS@12@@Z @ 0x1401E39FC
 * Callers:
 *     ?AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ @ 0x1401E38E0 (-AllocateSessionGlobalsArea@Full@Gre@@YA_NXZ.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall Gre::Font::InitializeGlobals(Gre::Font *this, struct Gre::Font::GLOBALS *a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rax
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  _OWORD *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  _OWORD *v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rax
  _OWORD *v40; // rcx
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int64 v51; // rax
  _OWORD *v52; // rcx
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int64 v63; // rax
  _OWORD *v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rdx
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int64 v75; // rax
  _OWORD *v76; // rcx
  __int64 *v77; // rax
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int64 v86; // rax
  __int64 v87; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v88; // [rsp+30h] [rbp-D8h]
  _BYTE v89[34]; // [rsp+40h] [rbp-C8h] BYREF
  int v90; // [rsp+62h] [rbp-A6h]
  __int128 v91; // [rsp+66h] [rbp-A2h]
  __int128 v92; // [rsp+76h] [rbp-92h]
  __int128 v93; // [rsp+86h] [rbp-82h]
  __int64 v94; // [rsp+96h] [rbp-72h]
  int v95; // [rsp+9Eh] [rbp-6Ah]
  __int16 v96; // [rsp+A2h] [rbp-66h]
  int v97; // [rsp+A4h] [rbp-64h]
  _BYTE v98[518]; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v99; // [rsp+2AEh] [rbp+1A6h]
  __int64 v100; // [rsp+2B0h] [rbp+1A8h]
  __int64 v101; // [rsp+2B8h] [rbp+1B0h]

  *((_QWORD *)this + 1072) = (char *)this + 8488;
  v87 = 0LL;
  *((_QWORD *)this + 1074) = &unk_140355130;
  *((_OWORD *)this + 541) = 0LL;
  *((_DWORD *)this + 2354) = -1;
  *((_QWORD *)this + 1157) = (char *)this + 9248;
  *((_QWORD *)this + 1156) = (char *)this + 9248;
  v90 = 0;
  *((_QWORD *)this + 1159) = (char *)this + 9264;
  *((_QWORD *)this + 1158) = (char *)this + 9264;
  v97 = 0;
  *(_QWORD *)&v89[24] = 0LL;
  v88 = *(_OWORD *)L"FontPackageDontCare";
  *(_WORD *)&v89[32] = 0;
  *(_QWORD *)&v89[16] = *(_QWORD *)L"are";
  v91 = 0LL;
  v94 = 0LL;
  v92 = 0LL;
  v95 = 0;
  v93 = 0LL;
  v96 = 0;
  *(_OWORD *)v89 = *(_OWORD *)L"ageDontCare";
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v3 = 5LL;
  v99 = 0;
  v4 = &v87;
  v101 = 0LL;
  v5 = (_OWORD *)((char *)this + 9424);
  v6 = 5LL;
  do
  {
    v7 = *((_OWORD *)v4 + 1);
    *v5 = *(_OWORD *)v4;
    v8 = *((_OWORD *)v4 + 2);
    v5[1] = v7;
    v9 = *((_OWORD *)v4 + 3);
    v5[2] = v8;
    v10 = *((_OWORD *)v4 + 4);
    v5[3] = v9;
    v11 = *((_OWORD *)v4 + 5);
    v5[4] = v10;
    v12 = *((_OWORD *)v4 + 6);
    v5[5] = v11;
    v13 = *((_OWORD *)v4 + 7);
    v4 += 16;
    v5[6] = v12;
    v5 += 8;
    *(v5 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = *(_OWORD *)v4;
  v15 = v4[2];
  LODWORD(v87) = 0;
  *v5 = v14;
  *((_QWORD *)v5 + 2) = v15;
  memset(&v89[16], 0, 18);
  v88 = *(_OWORD *)L"FontPackageRoman";
  HIDWORD(v87) = 16;
  *(_OWORD *)v89 = *(_OWORD *)L"ageRoman";
  v90 = 0;
  v94 = 0LL;
  v95 = 0;
  v96 = 0;
  v91 = 0LL;
  v97 = 0;
  v92 = 0LL;
  v93 = 0LL;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v99 = 0;
  v16 = (_OWORD *)((char *)this + 10088);
  v17 = &v87;
  v101 = 0LL;
  v18 = 5LL;
  do
  {
    v19 = *((_OWORD *)v17 + 1);
    *v16 = *(_OWORD *)v17;
    v20 = *((_OWORD *)v17 + 2);
    v16[1] = v19;
    v21 = *((_OWORD *)v17 + 3);
    v16[2] = v20;
    v22 = *((_OWORD *)v17 + 4);
    v16[3] = v21;
    v23 = *((_OWORD *)v17 + 5);
    v16[4] = v22;
    v24 = *((_OWORD *)v17 + 6);
    v16[5] = v23;
    v25 = *((_OWORD *)v17 + 7);
    v17 += 16;
    v16[6] = v24;
    v16 += 8;
    *(v16 - 1) = v25;
    --v18;
  }
  while ( v18 );
  v26 = *(_OWORD *)v17;
  v27 = v17[2];
  LODWORD(v87) = 0;
  *v16 = v26;
  *((_QWORD *)v16 + 2) = v27;
  memset(&v89[16], 0, 18);
  v88 = *(_OWORD *)L"FontPackageSwiss";
  HIDWORD(v87) = 32;
  *(_OWORD *)v89 = *(_OWORD *)L"ageSwiss";
  v90 = 0;
  v94 = 0LL;
  v95 = 0;
  v96 = 0;
  v91 = 0LL;
  v97 = 0;
  v92 = 0LL;
  v93 = 0LL;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v99 = 0;
  v28 = (_OWORD *)((char *)this + 10752);
  v29 = &v87;
  v101 = 0LL;
  v30 = 5LL;
  do
  {
    v31 = *((_OWORD *)v29 + 1);
    *v28 = *(_OWORD *)v29;
    v32 = *((_OWORD *)v29 + 2);
    v28[1] = v31;
    v33 = *((_OWORD *)v29 + 3);
    v28[2] = v32;
    v34 = *((_OWORD *)v29 + 4);
    v28[3] = v33;
    v35 = *((_OWORD *)v29 + 5);
    v28[4] = v34;
    v36 = *((_OWORD *)v29 + 6);
    v28[5] = v35;
    v37 = *((_OWORD *)v29 + 7);
    v29 += 16;
    v28[6] = v36;
    v28 += 8;
    *(v28 - 1) = v37;
    --v30;
  }
  while ( v30 );
  v38 = *(_OWORD *)v29;
  v39 = v29[2];
  LODWORD(v87) = 0;
  *v28 = v38;
  *((_QWORD *)v28 + 2) = v39;
  *(_DWORD *)&v89[16] = *(_DWORD *)L"n";
  v88 = *(_OWORD *)L"FontPackageModern";
  HIDWORD(v87) = 48;
  *(_QWORD *)&v89[20] = 0LL;
  v91 = 0LL;
  *(_DWORD *)&v89[28] = 0;
  v92 = 0LL;
  *(_WORD *)&v89[32] = 0;
  v93 = 0LL;
  v90 = 0;
  *(_OWORD *)v89 = *(_OWORD *)L"ageModern";
  v94 = 0LL;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v99 = 0;
  v40 = (_OWORD *)((char *)this + 11416);
  v41 = &v87;
  v101 = 0LL;
  v42 = 5LL;
  do
  {
    v43 = *((_OWORD *)v41 + 1);
    *v40 = *(_OWORD *)v41;
    v44 = *((_OWORD *)v41 + 2);
    v40[1] = v43;
    v45 = *((_OWORD *)v41 + 3);
    v40[2] = v44;
    v46 = *((_OWORD *)v41 + 4);
    v40[3] = v45;
    v47 = *((_OWORD *)v41 + 5);
    v40[4] = v46;
    v48 = *((_OWORD *)v41 + 6);
    v40[5] = v47;
    v49 = *((_OWORD *)v41 + 7);
    v41 += 16;
    v40[6] = v48;
    v40 += 8;
    *(v40 - 1) = v49;
    --v42;
  }
  while ( v42 );
  v50 = *(_OWORD *)v41;
  v51 = v41[2];
  LODWORD(v87) = 0;
  *v40 = v50;
  *((_QWORD *)v40 + 2) = v51;
  *(_DWORD *)&v89[16] = *(_DWORD *)L"t";
  v88 = *(_OWORD *)L"FontPackageScript";
  HIDWORD(v87) = 64;
  *(_QWORD *)&v89[20] = 0LL;
  v91 = 0LL;
  *(_DWORD *)&v89[28] = 0;
  v92 = 0LL;
  *(_WORD *)&v89[32] = 0;
  v93 = 0LL;
  v90 = 0;
  *(_OWORD *)v89 = *(_OWORD *)L"ageScript";
  v94 = 0LL;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v99 = 0;
  v52 = (_OWORD *)((char *)this + 12080);
  v53 = &v87;
  v101 = 0LL;
  v54 = 5LL;
  do
  {
    v55 = *((_OWORD *)v53 + 1);
    *v52 = *(_OWORD *)v53;
    v56 = *((_OWORD *)v53 + 2);
    v52[1] = v55;
    v57 = *((_OWORD *)v53 + 3);
    v52[2] = v56;
    v58 = *((_OWORD *)v53 + 4);
    v52[3] = v57;
    v59 = *((_OWORD *)v53 + 5);
    v52[4] = v58;
    v60 = *((_OWORD *)v53 + 6);
    v52[5] = v59;
    v61 = *((_OWORD *)v53 + 7);
    v53 += 16;
    v52[6] = v60;
    v52 += 8;
    *(v52 - 1) = v61;
    --v54;
  }
  while ( v54 );
  v62 = *(_OWORD *)v53;
  v63 = v53[2];
  LODWORD(v87) = 0;
  *v52 = v62;
  *((_QWORD *)v52 + 2) = v63;
  *(_QWORD *)&v89[24] = *(unsigned int *)L"e";
  v88 = *(_OWORD *)L"FontPackageDecorative";
  HIDWORD(v87) = 80;
  *(_QWORD *)&v89[16] = *(_QWORD *)L"ative";
  v91 = 0LL;
  v92 = 0LL;
  *(_WORD *)&v89[32] = 0;
  v93 = 0LL;
  v90 = 0;
  *(_OWORD *)v89 = *(_OWORD *)L"ageDecorative";
  v94 = 0LL;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v99 = 0;
  v64 = (_OWORD *)((char *)this + 12744);
  v65 = &v87;
  v101 = 0LL;
  v66 = 5LL;
  do
  {
    v67 = *((_OWORD *)v65 + 1);
    *v64 = *(_OWORD *)v65;
    v68 = *((_OWORD *)v65 + 2);
    v64[1] = v67;
    v69 = *((_OWORD *)v65 + 3);
    v64[2] = v68;
    v70 = *((_OWORD *)v65 + 4);
    v64[3] = v69;
    v71 = *((_OWORD *)v65 + 5);
    v64[4] = v70;
    v72 = *((_OWORD *)v65 + 6);
    v64[5] = v71;
    v73 = *((_OWORD *)v65 + 7);
    v65 += 16;
    v64[6] = v72;
    v64 += 8;
    *(v64 - 1) = v73;
    --v66;
  }
  while ( v66 );
  v74 = *(_OWORD *)v65;
  v75 = v65[2];
  LODWORD(v87) = 0;
  *v64 = v74;
  *((_QWORD *)v64 + 2) = v75;
  HIDWORD(v87) = 255;
  memset(&v89[8], 0, 26);
  v88 = *(_OWORD *)L"FontPackage";
  *(_QWORD *)v89 = *(_QWORD *)L"age";
  v91 = 0LL;
  v90 = 0;
  v92 = 0LL;
  v94 = 0LL;
  v93 = 0LL;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  memset_0(v98, 0, sizeof(v98));
  v100 = 0LL;
  v99 = 0;
  v76 = (_OWORD *)((char *)this + 13408);
  v77 = &v87;
  v101 = 0LL;
  do
  {
    v78 = *((_OWORD *)v77 + 1);
    *v76 = *(_OWORD *)v77;
    v79 = *((_OWORD *)v77 + 2);
    v76[1] = v78;
    v80 = *((_OWORD *)v77 + 3);
    v76[2] = v79;
    v81 = *((_OWORD *)v77 + 4);
    v76[3] = v80;
    v82 = *((_OWORD *)v77 + 5);
    v76[4] = v81;
    v83 = *((_OWORD *)v77 + 6);
    v76[5] = v82;
    v84 = *((_OWORD *)v77 + 7);
    v77 += 16;
    v76[6] = v83;
    v76 += 8;
    *(v76 - 1) = v84;
    --v3;
  }
  while ( v3 );
  v85 = *(_OWORD *)v77;
  v86 = v77[2];
  *v76 = v85;
  *((_QWORD *)v76 + 2) = v86;
  *((_DWORD *)this + 4858) = 3;
}
