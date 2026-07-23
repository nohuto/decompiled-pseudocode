/*
 * XREFs of sub_140BD9AF8 @ 0x140BD9AF8
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140BD9AF8(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  int v6; // r10d
  int v7; // r11d
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r12
  __int64 v16; // r12
  _QWORD *v17; // r8
  int v18; // r11d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r11d
  unsigned int v26; // r15d
  _QWORD *v27; // r8
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  unsigned __int128 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edx
  char *v36; // r8
  unsigned __int64 v37; // r11
  char *v38; // r8
  int v39; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r9d
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // r12d
  unsigned __int64 v51; // rax
  unsigned __int128 v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // r12
  _QWORD *v55; // r8
  int v56; // r10d
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // rax
  unsigned __int128 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int128 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned int v63; // r12d
  __int64 v64; // r11
  _QWORD *v65; // r8
  _QWORD *v66; // r10
  unsigned __int64 v67; // r11
  unsigned __int64 v68; // rax
  unsigned __int128 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int128 v71; // rax
  unsigned __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned int v76; // eax
  int v77; // edx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // r11d
  __int64 v82; // r12
  int v83; // r9d
  _QWORD *v84; // r8
  unsigned __int64 v85; // r11
  unsigned __int64 v86; // rax
  unsigned __int128 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int128 v89; // rax
  unsigned __int64 v90; // rdx
  unsigned int v91; // r9d
  _QWORD *v92; // r8
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // rax
  unsigned __int128 v95; // rax
  unsigned __int64 v96; // rax
  unsigned __int128 v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned int v100; // edx
  char *v101; // r8
  unsigned __int64 v102; // r9
  char *v103; // r8
  int v104; // eax
  unsigned __int64 v105; // [rsp+40h] [rbp-69h]
  __int64 v106; // [rsp+40h] [rbp-69h]
  __int64 *v107; // [rsp+40h] [rbp-69h]
  unsigned __int64 v108; // [rsp+48h] [rbp-61h]
  __int64 v109; // [rsp+48h] [rbp-61h]
  __int64 v110; // [rsp+48h] [rbp-61h]
  __int64 v111; // [rsp+50h] [rbp-59h]
  __int64 v112; // [rsp+58h] [rbp-51h]
  unsigned int v115; // [rsp+120h] [rbp+77h]
  unsigned int v116; // [rsp+128h] [rbp+7Fh]
  __int64 v117; // [rsp+128h] [rbp+7Fh]
  unsigned int v118; // [rsp+128h] [rbp+7Fh]

  v4 = a1;
  if ( a3 != 3 )
  {
    v5 = 0LL;
    v6 = 0;
    v7 = a1[630] & 0x8000000;
    if ( !v7 )
      v6 = a1[593];
    v116 = a1[524];
    v8 = __rdtsc();
    v9 = __ROR8__(v8, 3);
    v10 = ((unsigned __int16)(((v9 ^ v8) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v9 ^ v8))) & 0x7FF;
    v11 = __rdtsc();
    v12 = (__ROR8__(v11, 3) ^ v11) * (unsigned __int128)0x7010008004002001uLL;
    v105 = (*((_QWORD *)&v12 + 1) ^ (unsigned __int64)v12) % (unsigned int)(v10 + 1);
    if ( v6 )
    {
      v13 = __rdtsc();
      v14 = __ROR8__(v13, 3);
      v10 += ((((67117057 * ((unsigned int)v14 ^ (unsigned int)v13)) ^ (unsigned int)(((v14 ^ v13)
                                                                                     * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 1) << 12)
           + 4096;
      v117 = v10 + a2;
      v15 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64))v4 + 70))(v117 + 8, 0xFFFFFFFFLL);
      if ( !v15 )
        goto LABEL_11;
      if ( !(*((unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, __int64))v4 + 72))(
              v15,
              ((_DWORD)v117 + 4095) & 0xFFFFF000,
              64LL) )
      {
        (*((void (__fastcall **)(_QWORD *, __int64))v4 + 71))(v15, v117);
        goto LABEL_11;
      }
      *v15 = v117 + 8;
      v16 = (__int64)(v15 + 1);
    }
    else
    {
      v16 = (*((__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))v4 + 32))(
              (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFFFC0uLL) + 130,
              v10 + a2,
              v116);
    }
    if ( v16 )
    {
      v17 = (_QWORD *)v16;
      v18 = v105;
      if ( (unsigned int)v105 >= 8 )
      {
        v19 = (unsigned __int64)(unsigned int)v105 >> 3;
        do
        {
          v20 = __rdtsc();
          v18 -= 8;
          v21 = (__ROR8__(v20, 3) ^ v20) * (unsigned __int128)0x7010008004002001uLL;
          *v17++ = v21 ^ *((_QWORD *)&v21 + 1);
          --v19;
        }
        while ( v19 );
      }
      if ( v18 )
      {
        v22 = __rdtsc();
        v23 = (__ROR8__(v22, 3) ^ v22) * (unsigned __int128)0x7010008004002001uLL;
        v24 = v23 ^ *((_QWORD *)&v23 + 1);
        do
        {
          *(_BYTE *)v17 = v24;
          v17 = (_QWORD *)((char *)v17 + 1);
          v24 >>= 8;
          --v18;
        }
        while ( v18 );
      }
      v25 = a2;
      v26 = v10 - v105;
      v27 = (_QWORD *)((unsigned int)v105 + v16 + a2);
      if ( v26 >= 8 )
      {
        v28 = (unsigned __int64)v26 >> 3;
        do
        {
          v29 = __rdtsc();
          v26 -= 8;
          v30 = (__ROR8__(v29, 3) ^ v29) * (unsigned __int128)0x7010008004002001uLL;
          *v27++ = v30 ^ *((_QWORD *)&v30 + 1);
          --v28;
        }
        while ( v28 );
        v25 = a2;
      }
      if ( v26 )
      {
        v31 = __rdtsc();
        v32 = (__ROR8__(v31, 3) ^ v31) * (unsigned __int128)0x7010008004002001uLL;
        v33 = v32 ^ *((_QWORD *)&v32 + 1);
        do
        {
          *(_BYTE *)v27 = v33;
          v27 = (_QWORD *)((char *)v27 + 1);
          v33 >>= 8;
          --v26;
        }
        while ( v26 );
      }
      v34 = v16 + (unsigned int)v105;
      if ( v34 )
      {
        v35 = v4[513];
        v36 = (char *)(v16 + (unsigned int)v105);
        if ( v35 >= 8 )
        {
          v37 = (unsigned __int64)v35 >> 3;
          do
          {
            v35 -= 8;
            *(_QWORD *)v36 = *(_QWORD *)v4;
            v4 += 2;
            v36 += 8;
            --v37;
          }
          while ( v37 );
          v25 = a2;
        }
        if ( v35 )
        {
          v38 = (char *)(v36 - (char *)v4);
          do
          {
            v38[(_QWORD)v4] = *(_BYTE *)v4;
            v4 = (_DWORD *)((char *)v4 + 1);
            --v35;
          }
          while ( v35 );
        }
        *(_DWORD *)(v34 + 2372) = a3;
        v39 = *(_DWORD *)(v34 + 2520);
        *(_DWORD *)(v34 + 2052) = v25;
        *(_QWORD *)(v34 + 2024) = v16;
        if ( (v39 & 0x8000000) == 0 )
          *(_DWORD *)(v34 + 2520) = v39 | 0x10000000;
        return v16 + (unsigned int)v105;
      }
      return v5;
    }
LABEL_11:
    ++v4[664];
    return v5;
  }
  v41 = __rdtsc();
  v42 = __ROR8__(v41, 3);
  v43 = ((unsigned __int16)(8193 * (v42 ^ v41)) ^ (unsigned __int16)(((v42 ^ v41)
                                                                    * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0x7FF;
  v44 = __rdtsc();
  v45 = __ROR8__(v44, 3);
  v111 = ((((v45 ^ v44) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v45 ^ v44)))
       % (unsigned int)(v43 + 1);
  v46 = __rdtsc();
  v47 = __ROR8__(v46, 3);
  v118 = v43
       + ((((unsigned int)(((v47 ^ v46) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057
                                                                                            * ((unsigned int)v47 ^ (unsigned int)v46))) & 1) << 12)
       + 4096;
  v48 = __rdtsc();
  v49 = __ROR8__(v48, 3);
  v50 = ((unsigned __int16)(8193 * (v49 ^ v48)) ^ (unsigned __int16)(((v49 ^ v48)
                                                                    * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0x7FF;
  v51 = __rdtsc();
  v52 = (__ROR8__(v51, 3) ^ v51) * (unsigned __int128)0x7010008004002001uLL;
  v108 = (*((_QWORD *)&v52 + 1) ^ (unsigned __int64)v52) % (unsigned int)(v50 + 1);
  v53 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v4 + 32))(
          66LL,
          (unsigned int)(v50 + 32),
          (unsigned int)v4[524]);
  v106 = v53;
  if ( !v53 )
  {
    v54 = v4 + 664;
    ++v4[664];
LABEL_87:
    ++*v54;
    return 0LL;
  }
  v55 = (_QWORD *)v53;
  v56 = v108;
  if ( (unsigned int)v108 >= 8 )
  {
    v57 = (unsigned __int64)(unsigned int)v108 >> 3;
    do
    {
      v58 = __rdtsc();
      v56 -= 8;
      v59 = (__ROR8__(v58, 3) ^ v58) * (unsigned __int128)0x7010008004002001uLL;
      *v55++ = v59 ^ *((_QWORD *)&v59 + 1);
      --v57;
    }
    while ( v57 );
  }
  if ( v56 )
  {
    v60 = __rdtsc();
    v61 = (__ROR8__(v60, 3) ^ v60) * (unsigned __int128)0x7010008004002001uLL;
    v62 = v61 ^ *((_QWORD *)&v61 + 1);
    do
    {
      *(_BYTE *)v55 = v62;
      v55 = (_QWORD *)((char *)v55 + 1);
      v62 >>= 8;
      --v56;
    }
    while ( v56 );
  }
  v63 = v50 - v108;
  v64 = v106;
  v65 = (_QWORD *)(v106 + (unsigned int)v108);
  v66 = v65 + 4;
  if ( v63 >= 8 )
  {
    v67 = (unsigned __int64)v63 >> 3;
    do
    {
      v68 = __rdtsc();
      v63 -= 8;
      v69 = (__ROR8__(v68, 3) ^ v68) * (unsigned __int128)0x7010008004002001uLL;
      *v66++ = v69 ^ *((_QWORD *)&v69 + 1);
      --v67;
    }
    while ( v67 );
    v64 = v106;
  }
  if ( v63 )
  {
    v70 = __rdtsc();
    v71 = (__ROR8__(v70, 3) ^ v70) * (unsigned __int128)0x7010008004002001uLL;
    v72 = v71 ^ *((_QWORD *)&v71 + 1);
    do
    {
      *(_BYTE *)v66 = v72;
      v66 = (_QWORD *)((char *)v66 + 1);
      v72 >>= 8;
      --v63;
    }
    while ( v63 );
  }
  v54 = v4 + 664;
  if ( !v65 )
    goto LABEL_87;
  v73 = 32;
  v74 = v106 + (unsigned int)v108;
  v107 = (__int64 *)v74;
  v75 = 4LL;
  do
  {
    *v65 = 0LL;
    v73 -= 8;
    ++v65;
    --v75;
  }
  while ( v75 );
  for ( ; v73; --v73 )
  {
    *(_BYTE *)v65 = 0;
    v65 = (_QWORD *)((char *)v65 + 1);
  }
  v76 = v4[524];
  v77 = 5;
  *(_DWORD *)(v74 + 16) = v76;
  *(_QWORD *)(v74 + 24) = v64;
  v115 = v76;
  v78 = v4[630];
  if ( (v78 & 0x800000) != 0 )
    v77 = 21;
  else
    v4[630] = v78 | 0x800000;
  v112 = v118 + a2;
  v79 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int))v4 + 105))(0LL, -1LL, 0LL, v112, 1, v77);
  v109 = v79;
  if ( !v79
    || (*v107 = v79, (v80 = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 106))(v112, v115)) == 0)
    || (v107[1] = v80,
        v110 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))v4 + 107))(v80, v115, v109, 1LL),
        !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v4 + 72))(
           v110,
           ((_DWORD)v112 + 4095) & 0xFFFFF000,
           64LL)) )
  {
    (*((void (__fastcall **)(__int64 *))v4 + 109))(v107);
    goto LABEL_87;
  }
  v81 = v111;
  v82 = v110;
  v83 = v111;
  v84 = (_QWORD *)v110;
  if ( (unsigned int)v111 >= 8 )
  {
    v85 = (unsigned __int64)(unsigned int)v111 >> 3;
    do
    {
      v86 = __rdtsc();
      v83 -= 8;
      v87 = (__ROR8__(v86, 3) ^ v86) * (unsigned __int128)0x7010008004002001uLL;
      *v84++ = v87 ^ *((_QWORD *)&v87 + 1);
      --v85;
    }
    while ( v85 );
    v81 = v111;
  }
  if ( v83 )
  {
    v88 = __rdtsc();
    v89 = (__ROR8__(v88, 3) ^ v88) * (unsigned __int128)0x7010008004002001uLL;
    v90 = v89 ^ *((_QWORD *)&v89 + 1);
    do
    {
      *(_BYTE *)v84 = v90;
      v84 = (_QWORD *)((char *)v84 + 1);
      v90 >>= 8;
      --v83;
    }
    while ( v83 );
  }
  v91 = v118 - v81;
  v92 = (_QWORD *)(v110 + v81 + (unsigned __int64)a2);
  if ( v118 - v81 >= 8 )
  {
    v93 = (unsigned __int64)v91 >> 3;
    do
    {
      v94 = __rdtsc();
      v91 -= 8;
      v95 = (__ROR8__(v94, 3) ^ v94) * (unsigned __int128)0x7010008004002001uLL;
      *v92++ = v95 ^ *((_QWORD *)&v95 + 1);
      --v93;
    }
    while ( v93 );
    v82 = v110;
  }
  if ( v91 )
  {
    v96 = __rdtsc();
    v97 = (__ROR8__(v96, 3) ^ v96) * (unsigned __int128)0x7010008004002001uLL;
    v98 = v97 ^ *((_QWORD *)&v97 + 1);
    do
    {
      *(_BYTE *)v92 = v98;
      v92 = (_QWORD *)((char *)v92 + 1);
      v98 >>= 8;
      --v91;
    }
    while ( v91 );
  }
  v99 = v82 + v81;
  if ( v99 )
  {
    v100 = v4[513];
    v101 = (char *)(v82 + v81);
    if ( v100 >= 8 )
    {
      v102 = (unsigned __int64)v100 >> 3;
      do
      {
        v100 -= 8;
        *(_QWORD *)v101 = *(_QWORD *)v4;
        v4 += 2;
        v101 += 8;
        --v102;
      }
      while ( v102 );
    }
    if ( v100 )
    {
      v103 = (char *)(v101 - (char *)v4);
      do
      {
        *((_BYTE *)v4 + (_QWORD)v103) = *(_BYTE *)v4;
        v4 = (_DWORD *)((char *)v4 + 1);
        --v100;
      }
      while ( v100 );
    }
    *(_QWORD *)(v99 + 2024) = v107;
    v104 = *(_DWORD *)(v99 + 2520);
    *(_DWORD *)(v99 + 2052) = a2;
    *(_DWORD *)(v99 + 2372) = 3;
    if ( (v104 & 0x8000000) == 0 )
      *(_DWORD *)(v99 + 2520) = v104 | 0x10000000;
    return v99;
  }
  return 0LL;
}
