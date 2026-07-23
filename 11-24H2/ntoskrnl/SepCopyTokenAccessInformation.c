/*
 * XREFs of SepCopyTokenAccessInformation @ 0x1409DD7CC
 * Callers:
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x1403EAE30 (RtlSidHashInitialize.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1404184E0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SeQueryMandatoryPolicyToken @ 0x140423C00 (SeQueryMandatoryPolicyToken.c)
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x140455E80 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1409DDE40 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 */

__int64 __fastcall SepCopyTokenAccessInformation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        int a12,
        int a13,
        char a14,
        void *a15)
{
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // r15
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // edx
  char *v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // r14
  _DWORD *v28; // rbx
  __int64 v29; // r14
  unsigned int v30; // r13d
  unsigned int v31; // r15d
  unsigned __int8 *v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 *Hash; // rcx
  __int64 v35; // rdx
  _OWORD *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v44; // rbx
  __int64 v45; // r14
  _DWORD *v46; // rsi
  unsigned int v47; // r9d
  unsigned int v48; // r8d
  __int64 v49; // rdx
  char *v50; // r15
  unsigned int v51; // r14d
  unsigned int v52; // r13d
  unsigned __int8 *v53; // rcx
  unsigned int v54; // eax
  unsigned __int64 *v55; // rcx
  __int64 v56; // rdx
  _OWORD *v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int64 v65; // rbx
  __int64 v66; // rsi
  _DWORD *v67; // r14
  unsigned int v68; // r9d
  unsigned int v69; // r8d
  __int64 v70; // rdx
  char *v71; // r15
  unsigned int v72; // esi
  unsigned int v73; // r13d
  unsigned __int8 *v74; // rcx
  unsigned int v75; // eax
  unsigned __int64 *v76; // rcx
  __int64 v77; // rdx
  _OWORD *v78; // rax
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int64 v86; // rax
  char *v87; // rbx
  char *v88; // rsi
  unsigned __int8 *v89; // rcx
  char *v90; // rbx
  char *v91; // rsi
  char *v92; // rbx
  __int64 v93; // rcx
  unsigned int *v94; // r14
  unsigned __int64 v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rsi
  unsigned int v98; // ecx
  int v99; // eax
  char *v100; // rdx
  unsigned int v102; // [rsp+20h] [rbp-E0h]
  unsigned int v103; // [rsp+24h] [rbp-DCh]
  unsigned int v104; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v105; // [rsp+2Ch] [rbp-D4h]
  unsigned int v106; // [rsp+30h] [rbp-D0h]
  unsigned int v107; // [rsp+34h] [rbp-CCh]
  unsigned int v108; // [rsp+38h] [rbp-C8h]
  unsigned int v109; // [rsp+3Ch] [rbp-C4h]
  __int64 v110; // [rsp+40h] [rbp-C0h]
  unsigned int v111; // [rsp+48h] [rbp-B8h]
  int v112; // [rsp+4Ch] [rbp-B4h]
  int v113; // [rsp+50h] [rbp-B0h]
  int v114; // [rsp+54h] [rbp-ACh]
  __int64 v115; // [rsp+58h] [rbp-A8h]
  void *Src; // [rsp+60h] [rbp-A0h]
  _SID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+70h] [rbp-90h] BYREF

  v106 = a8;
  v104 = a9;
  v109 = a10;
  v107 = a11;
  v112 = a12;
  v113 = a13;
  Src = a15;
  v17 = a3;
  *(&SidAttrHash.SidCount + 1) = 0;
  v114 = a4;
  v111 = a6;
  memset_0(&SidAttrHash, 0, 0x10CuLL);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 200);
  v115 = a2 + v17;
  SeQueryMandatoryPolicyToken(a1, (_DWORD *)(a2 + 40));
  v18 = *(_QWORD *)(a1 + 1080);
  if ( v18 )
    LODWORD(v18) = *(_DWORD *)(v18 + 40);
  v19 = a5;
  v20 = a2 + 88;
  *(_DWORD *)(a2 + 48) = v18;
  v21 = a2 + 360;
  v22 = *(_DWORD *)(a1 + 124);
  v23 = 0;
  *(_QWORD *)(a2 + 96) = a2 + 360;
  v24 = a5 - v111;
  v25 = (char *)(a2 + 360 + a6);
  *(_DWORD *)(a2 + 88) = v22;
  *(_QWORD *)a2 = a2 + 88;
  v26 = *(_DWORD *)(a1 + 124);
  v27 = *(_QWORD *)(a1 + 152);
  v110 = a2 + 88;
  v108 = 0;
  if ( v26 )
  {
    v28 = (_DWORD *)(a2 + 368);
    v29 = v27 - v21;
    v30 = v26;
    do
    {
      v31 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v28 + v29 - 8) + 1LL) + 8;
      if ( v31 > v24 )
        break;
      *((_QWORD *)v28 - 1) = v25;
      v24 -= v31;
      *v28 = *(_DWORD *)((char *)v28 + v29);
      v32 = *(unsigned __int8 **)((char *)v28 + v29 - 8);
      v105 = v24;
      v33 = 4 * v32[1] + 8;
      if ( v33 <= v31 )
      {
        memmove(v25, v32, v33);
        v24 = v105;
        v23 = v108;
      }
      ++v23;
      v25 += v31;
      v108 = v23;
      v28 += 4;
    }
    while ( v23 < v30 );
    v20 = v110;
    v19 = a5;
    v21 = v110 + 272;
  }
  RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 152), *(_DWORD *)(a1 + 124), &SidAttrHash);
  Hash = SidAttrHash.Hash;
  v35 = 2LL;
  *(_DWORD *)v20 = SidAttrHash.SidCount;
  v36 = (_OWORD *)(v20 + 16);
  do
  {
    v37 = *((_OWORD *)Hash + 1);
    *v36 = *(_OWORD *)Hash;
    v38 = *((_OWORD *)Hash + 2);
    v36[1] = v37;
    v39 = *((_OWORD *)Hash + 3);
    v36[2] = v38;
    v40 = *((_OWORD *)Hash + 4);
    v36[3] = v39;
    v41 = *((_OWORD *)Hash + 5);
    v36[4] = v40;
    v42 = *((_OWORD *)Hash + 6);
    v36[5] = v41;
    v43 = *((_OWORD *)Hash + 7);
    Hash += 16;
    v36[6] = v42;
    v36 += 8;
    *(v36 - 1) = v43;
    --v35;
  }
  while ( v35 );
  v44 = v21 + v19;
  *(_QWORD *)(v20 + 8) = v21;
  *(_DWORD *)v44 = *(_DWORD *)(a1 + 128);
  v45 = v44 + 272;
  *(_QWORD *)(v44 + 8) = v44 + 272;
  *(_QWORD *)(a2 + 8) = v44;
  v105 = *(_DWORD *)(a1 + 128);
  if ( v105 )
  {
    v46 = (_DWORD *)(v44 + 280);
    v47 = 0;
    v48 = a7 - v106;
    v49 = *(_QWORD *)(a1 + 160) - v45;
    v102 = 0;
    v50 = (char *)(v45 + v106);
    v110 = v49;
    v51 = v105;
    do
    {
      v52 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v46 + v49 - 8) + 1LL) + 8;
      if ( v52 > v48 )
        break;
      *((_QWORD *)v46 - 1) = v50;
      v48 -= v52;
      *v46 = *(_DWORD *)((char *)v46 + v49);
      v53 = *(unsigned __int8 **)((char *)v46 + v49 - 8);
      v106 = v48;
      v54 = 4 * v53[1] + 8;
      if ( v54 <= v52 )
      {
        memmove(v50, v53, v54);
        v49 = v110;
        v48 = v106;
        v47 = v102;
      }
      ++v47;
      v50 += v52;
      v102 = v47;
      v46 += 4;
    }
    while ( v47 < v51 );
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 160), *(_DWORD *)(a1 + 128), &SidAttrHash);
    v55 = SidAttrHash.Hash;
    v56 = 2LL;
    *(_DWORD *)v44 = SidAttrHash.SidCount;
    v57 = (_OWORD *)(v44 + 16);
    v45 = v44 + 272;
    do
    {
      v58 = *((_OWORD *)v55 + 1);
      *v57 = *(_OWORD *)v55;
      v59 = *((_OWORD *)v55 + 2);
      v57[1] = v58;
      v60 = *((_OWORD *)v55 + 3);
      v57[2] = v59;
      v61 = *((_OWORD *)v55 + 4);
      v57[3] = v60;
      v62 = *((_OWORD *)v55 + 5);
      v57[4] = v61;
      v63 = *((_OWORD *)v55 + 6);
      v57[5] = v62;
      v64 = *((_OWORD *)v55 + 7);
      v55 += 16;
      v57[6] = v63;
      v57 += 8;
      *(v57 - 1) = v64;
      --v56;
    }
    while ( v56 );
    *(_QWORD *)(v44 + 8) = v45;
  }
  v65 = v45 + a7;
  *(_DWORD *)v65 = *(_DWORD *)(a1 + 800);
  v66 = v65 + 272;
  *(_QWORD *)(v65 + 8) = v65 + 272;
  *(_QWORD *)(a2 + 64) = v65;
  v106 = *(_DWORD *)(a1 + 800);
  if ( v106 )
  {
    v67 = (_DWORD *)(v65 + 280);
    v68 = 0;
    v69 = v109 - v107;
    v70 = *(_QWORD *)(a1 + 792) - v66;
    v103 = 0;
    v71 = (char *)(v66 + v107);
    v110 = v70;
    v72 = v106;
    do
    {
      v73 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v67 + v70 - 8) + 1LL) + 8;
      if ( v73 > v69 )
        break;
      *((_QWORD *)v67 - 1) = v71;
      v69 -= v73;
      *v67 = *(_DWORD *)((char *)v67 + v70);
      v74 = *(unsigned __int8 **)((char *)v67 + v70 - 8);
      v107 = v69;
      v75 = 4 * v74[1] + 8;
      if ( v75 <= v73 )
      {
        memmove(v71, v74, v75);
        v70 = v110;
        v69 = v107;
        v68 = v103;
      }
      ++v68;
      v71 += v73;
      v103 = v68;
      v67 += 4;
    }
    while ( v68 < v72 );
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(a1 + 792), *(_DWORD *)(a1 + 800), &SidAttrHash);
    v76 = SidAttrHash.Hash;
    v77 = 2LL;
    *(_DWORD *)v65 = SidAttrHash.SidCount;
    v78 = (_OWORD *)(v65 + 16);
    v66 = v65 + 272;
    do
    {
      v79 = *((_OWORD *)v76 + 1);
      *v78 = *(_OWORD *)v76;
      v80 = *((_OWORD *)v76 + 2);
      v78[1] = v79;
      v81 = *((_OWORD *)v76 + 3);
      v78[2] = v80;
      v82 = *((_OWORD *)v76 + 4);
      v78[3] = v81;
      v83 = *((_OWORD *)v76 + 5);
      v78[4] = v82;
      v84 = *((_OWORD *)v76 + 6);
      v78[5] = v83;
      v85 = *((_OWORD *)v76 + 7);
      v76 += 16;
      v78[6] = v84;
      v78 += 8;
      *(v78 - 1) = v85;
      --v77;
    }
    while ( v77 );
    *(_QWORD *)(v65 + 8) = v66;
  }
  v86 = v104;
  v87 = (char *)(v66 + v109);
  v88 = 0LL;
  if ( v104 )
  {
    v88 = v87;
    memmove(v87, *(const void **)(a1 + 784), 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 784) + 1LL) + 8);
    v86 = v104;
  }
  v89 = (unsigned __int8 *)Src;
  *(_QWORD *)(a2 + 56) = v88;
  if ( !a14 )
    v89 = *(unsigned __int8 **)(a1 + 1104);
  v90 = &v87[v86];
  v91 = 0LL;
  if ( v112 )
  {
    v91 = v90;
    memmove(v90, v89, 4LL * v89[1] + 8);
  }
  v92 = &v90[v112];
  v93 = (unsigned int)(v115 - (_DWORD)v92);
  *(_QWORD *)(a2 + 72) = v91;
  v94 = *(unsigned int **)(a1 + 776);
  v115 = v93;
  if ( v94 && (!(_DWORD)v93 || v92) )
  {
    v95 = 112LL * *v94;
    if ( v95 <= 0xFFFFFFFF )
    {
      v96 = v95 + 48;
      if ( v96 >= 0x30 )
      {
        v97 = *((_QWORD *)v94 + 1);
        while ( (unsigned int *)v97 != v94 + 2 )
        {
          v98 = (v96 + 1) & 0xFFFFFFFE;
          if ( v98 < v96 )
            goto LABEL_48;
          if ( v98 + *(unsigned __int16 *)(v97 + 32) < v98 )
            goto LABEL_48;
          v104 = v98 + *(unsigned __int16 *)(v97 + 32);
          if ( (int)AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(v97, &v104) < 0 )
            goto LABEL_48;
          v97 = *(_QWORD *)v97;
          v96 = v104;
        }
        if ( (unsigned int)v115 >= v96 )
          AuthzBasepCopyoutInternalSecurityAttributes(v94, v92, (unsigned int)v115);
      }
    }
  }
LABEL_48:
  v99 = v114;
  v100 = &v92[v113];
  *(_QWORD *)(a2 + 80) = v92;
  *(_DWORD *)v100 = v99;
  *(_QWORD *)(a2 + 16) = v100;
  return SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)a1, (__int64)(v100 + 4));
}
