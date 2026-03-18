/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x140960110
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     KeQueryTimelineBitmapTime @ 0x1404560B0 (KeQueryTimelineBitmapTime.c)
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PsEnumProcesses @ 0x1408DECE4 (PsEnumProcesses.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140961514 (PopEtEnergyTrackerCleanupAggregates.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char *v4; // rbx
  char v5; // r15
  int v6; // r14d
  unsigned int v7; // r9d
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  _QWORD *v10; // r10
  _DWORD *v11; // r11
  _QWORD *v12; // r8
  __int64 v13; // rdx
  _QWORD **v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned int v19; // r14d
  __int128 v20; // xmm0
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // r13d
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned int v27; // r15d
  unsigned __int64 v28; // r14
  int v29; // ecx
  int v30; // r9d
  unsigned int v31; // r10d
  _DWORD *v32; // r15
  char *v33; // r8
  int v34; // eax
  __m128i v35; // xmm0
  __int64 v36; // rsi
  __int64 v37; // r14
  int v38; // r12d
  int v39; // r10d
  unsigned __int8 *v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // r13d
  int v45; // ebx
  int v46; // r11d
  int v47; // ecx
  __int64 v48; // r9
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 *v51; // rdx
  unsigned __int64 v52; // r8
  __int64 v53; // r13
  int v54; // ecx
  size_t v55; // rbx
  unsigned int v56; // eax
  unsigned int v57; // r8d
  char *v58; // rcx
  __int64 v59; // rbx
  unsigned int v60; // eax
  __int64 v61; // rbx
  const void *v62; // rdx
  unsigned int v63; // eax
  int v64; // r13d
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned int v67; // eax
  int v68; // r13d
  __int64 v69; // rbx
  int v70; // ebx
  int v71; // eax
  int v72; // r13d
  __int64 v73; // rbx
  __int64 v74; // r9
  __int64 v75; // r9
  __int64 v76; // r9
  __int64 v77; // r9
  int v78; // eax
  int v79; // edx
  _DWORD *v80; // r11
  __int64 v81; // r8
  int TimelineBitmapTime; // eax
  __int64 v83; // r11
  _DWORD *v84; // r8
  int v85; // ecx
  int v86; // rcx^4
  int v88; // eax
  __int64 *j; // rdx
  __int64 v90; // rdx
  __int64 i; // r10
  __int64 v92; // [rsp+40h] [rbp-158h]
  unsigned int v93; // [rsp+40h] [rbp-158h]
  int v94; // [rsp+40h] [rbp-158h]
  unsigned int v95; // [rsp+40h] [rbp-158h]
  int v96; // [rsp+40h] [rbp-158h]
  int v97; // [rsp+40h] [rbp-158h]
  __int64 v98; // [rsp+40h] [rbp-158h]
  int v99; // [rsp+48h] [rbp-150h]
  PVOID Object; // [rsp+50h] [rbp-148h] BYREF
  __int64 *v101; // [rsp+58h] [rbp-140h]
  __int128 v102; // [rsp+60h] [rbp-138h]
  void *v103[2]; // [rsp+70h] [rbp-128h]
  __int64 v104; // [rsp+80h] [rbp-118h]
  size_t Size[2]; // [rsp+88h] [rbp-110h]
  void *v106[2]; // [rsp+98h] [rbp-100h]
  char *v107; // [rsp+A8h] [rbp-F0h]
  int v108; // [rsp+B0h] [rbp-E8h]
  int v109; // [rsp+B4h] [rbp-E4h]
  __int64 v110; // [rsp+B8h] [rbp-E0h]
  __int128 v111; // [rsp+C0h] [rbp-D8h]
  void *v112[2]; // [rsp+D0h] [rbp-C8h]
  __m128i v113; // [rsp+E0h] [rbp-B8h]
  __int128 v114; // [rsp+F0h] [rbp-A8h]
  __int128 v115; // [rsp+100h] [rbp-98h]
  char *v116; // [rsp+110h] [rbp-88h]
  __int64 v117; // [rsp+118h] [rbp-80h]
  _QWORD *v118; // [rsp+120h] [rbp-78h]
  __int64 v119; // [rsp+128h] [rbp-70h]
  __int64 *v120; // [rsp+130h] [rbp-68h]
  __int64 v121; // [rsp+138h] [rbp-60h] BYREF
  __int64 v122; // [rsp+140h] [rbp-58h]
  __int128 v123; // [rsp+148h] [rbp-50h] BYREF
  __int128 v124; // [rsp+158h] [rbp-40h]

  v4 = 0LL;
  Object = 0LL;
  *(_OWORD *)Size = 0LL;
  *(_OWORD *)v106 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v5 = 0;
  v111 = 0LL;
  *(_OWORD *)v112 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v102 = 0LL;
  *(_OWORD *)v103 = 0LL;
  if ( !PopEtGlobals )
  {
    v6 = -1073741637;
    goto LABEL_118;
  }
  v6 = ObpReferenceObjectByHandleWithTag(
         a1,
         1,
         *(_QWORD *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &Object,
         0LL,
         0LL);
  if ( v6 < 0 )
  {
    v4 = (char *)Object;
    goto LABEL_118;
  }
  Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline();
  v123 = 2uLL;
  v4 = (char *)Object;
  v124 = (unsigned __int64)Object;
  v6 = PsEnumProcesses((__int64 (__fastcall *)(_QWORD, _QWORD))PopEtProcessEnumSnapshotCallback, (__int64)&v123);
  if ( v6 < 0 )
    goto LABEL_118;
  PopAcquireRwLockExclusive((unsigned __int64 *)v4 + 2);
  v7 = *((_DWORD *)v4 + 12);
  LODWORD(v107) = v7;
  v8 = 0;
  v9 = 44;
  v99 = 44;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = v4 + 52;
    if ( v10 )
    {
      v92 = v10[1] & (-1LL << (*v11 & 0x1F));
      v12 = v4 + 56;
      v13 = *((_QWORD *)v4 + 7)
          + 8LL
          * ((37
            * (BYTE6(v92)
             + 37
             * (BYTE5(v92)
              + 37
              * (BYTE4(v92)
               + 37 * (BYTE3(v92) + 37 * (BYTE2(v92) + 37 * (BYTE1(v92) + 37 * ((unsigned __int8)v92 + 11623883)))))))
            + HIBYTE(v92)) & (unsigned int)((*v11 >> 5) - 1));
      v7 = (unsigned int)v107;
    }
    else
    {
      v12 = v4 + 56;
      v10 = (_QWORD *)*((_QWORD *)v4 + 7);
      v13 = (__int64)v10;
    }
    if ( !v10 )
      goto LABEL_11;
    if ( (*v10 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (char *)Object;
    v10 = (_QWORD *)*v10;
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
LABEL_11:
      v14 = (_QWORD **)(v13 + 8);
      v15 = *v12 + 8 * ((unsigned __int64)(unsigned int)*v11 >> 5);
      while ( (unsigned __int64)v14 < v15 )
      {
        v10 = *v14;
        if ( ((unsigned __int8)*v14 & 1) == 0 )
          goto LABEL_14;
        ++v14;
      }
      v10 = 0LL;
    }
LABEL_14:
    if ( !v10 )
      break;
    v16 = (unsigned __int16 *)v10[2];
    if ( v8 >= 0x10000000 )
    {
      v6 = -1073741619;
      goto LABEL_117;
    }
    v9 += v16[43];
    v99 = v9;
    v8 += v16[41] + v16[42] + v16[40];
    v17 = v10[3];
    if ( v17 )
      v8 += ((unsigned int)(*(_QWORD *)(v17 + 24) >> 16) >> 1) & 0x1FFFFFFF;
  }
  v114 = 0LL;
  v115 = 0LL;
  HIDWORD(v114) = 104;
  v18 = 104LL * v7;
  v110 = v18;
  if ( v18 >= 0x7FFFFFFF || (v19 = v18 + 72, v18 + 72 >= 0x7FFFFFFF) )
  {
    v19 = 0x7FFFFFFF;
    v110 = DWORD1(v114);
  }
  else
  {
    LODWORD(v114) = 72;
    DWORD2(v114) = v18 + 72;
  }
  if ( !(unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline()
    || (v88 = *((_DWORD *)v4 + 10) >> 28) == 0 )
  {
    v20 = 0LL;
    *(_OWORD *)Size = 0LL;
    HIDWORD(Size[1]) = 432;
LABEL_24:
    *(_OWORD *)v106 = v20;
    v21 = 8;
    goto LABEL_25;
  }
  if ( v88 == 1 )
  {
    v20 = 0LL;
    *(_OWORD *)Size = 0LL;
    HIDWORD(Size[1]) = 440;
    goto LABEL_24;
  }
  v21 = (int)v106[0];
LABEL_25:
  v22 = (unsigned int)v107 * (unsigned __int64)HIDWORD(Size[1]);
  v104 = v22;
  if ( v19 >= 0x7FFFFFFF
    || v22 >= 0x7FFFFFFF
    || (v93 = ~(v21 - 1) & (v21 + v19 - 1), v23 = v22 + v93, v23 >= 0x7FFFFFFF) )
  {
    LODWORD(v23) = 0x7FFFFFFF;
    v104 = HIDWORD(Size[0]);
    v93 = Size[0];
  }
  else
  {
    LODWORD(Size[1]) = v22 + v93;
  }
  v111 = 0LL;
  *(_OWORD *)v112 = 0LL;
  if ( (unsigned int)v23 >= 0x7FFFFFFF
    || v9 >= 0x7FFFFFFF
    || (v24 = (v23 + 3) & 0xFFFFFFFC, v25 = v9 + (unsigned __int64)v24, v25 >= 0x7FFFFFFF) )
  {
    LODWORD(v25) = 0x7FFFFFFF;
    v99 = DWORD1(v111);
    v24 = v111;
  }
  else
  {
    DWORD2(v111) = v9 + v24;
  }
  v102 = 0LL;
  *(_OWORD *)v103 = 0LL;
  v26 = 2LL * v8;
  if ( (unsigned int)v25 >= 0x7FFFFFFF
    || v26 >= 0x7FFFFFFF
    || (v27 = (v25 + 1) & 0xFFFFFFFE, v28 = v26 + v27, v28 >= 0x7FFFFFFF) )
  {
    LODWORD(v28) = 0x7FFFFFFF;
    LODWORD(v26) = DWORD1(v102);
    v27 = v102;
  }
  else
  {
    DWORD2(v102) = v26 + v27;
  }
  if ( (unsigned int)v28 > a3 || (unsigned int)v28 >= 0x7FFFFFFF )
  {
    if ( a3 >= 0xC )
    {
      *(_QWORD *)a2 = 0LL;
      *(_DWORD *)a2 = 2097171;
      *(_DWORD *)(a2 + 8) = v28;
    }
    v6 = -1073741789;
    goto LABEL_117;
  }
  memset_0((void *)a2, 0, (unsigned int)v28);
  if ( (unsigned int)v110 >= 0x68 )
  {
    *((_QWORD *)&v115 + 1) = a2 + (unsigned int)v114;
    DWORD1(v115) = v114;
  }
  if ( (unsigned int)v104 >= HIDWORD(Size[1]) )
  {
    v106[1] = (void *)(a2 + v93);
    HIDWORD(v106[0]) = v93;
  }
  if ( v99 )
  {
    v112[1] = (void *)(a2 + v24);
    HIDWORD(v112[0]) = v24;
  }
  if ( (unsigned int)v26 >= 2 )
  {
    v103[1] = (void *)(a2 + v27);
    HIDWORD(v103[0]) = v27;
  }
  v122 = a2;
  *(_DWORD *)a2 = 2097171;
  *(_DWORD *)(a2 + 4) = 72;
  *(_DWORD *)(a2 + 8) = v28;
  *(_DWORD *)(a2 + 12) = *((_DWORD *)v4 + 152);
  *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(a2 + 36) = v114;
  *(_DWORD *)(a2 + 40) = (_DWORD)v107;
  *(_DWORD *)(a2 + 56) = 1048680;
  v29 = HIDWORD(v112[0]);
  *(_DWORD *)(a2 + 52) = HIDWORD(v112[0]);
  *(_WORD *)(a2 + 60) = 12;
  v30 = v29 + 12;
  v31 = DWORD2(v111);
  v32 = v112[1];
  v33 = (char *)Object;
  if ( (unsigned int)(v29 + 12) <= DWORD2(v111) )
  {
    *(_QWORD *)v112[1] = *((_QWORD *)Object + 4);
    v32[2] = *((_DWORD *)v33 + 10);
    v32 += 3;
    v112[1] = v32;
    v29 += 12;
    HIDWORD(v112[0]) = v30;
  }
  *(_DWORD *)(a2 + 44) = v29;
  v34 = v29 + 16;
  if ( v29 + 16 <= v31 )
  {
    *(_OWORD *)v32 = *(_OWORD *)(v33 + 612);
    v32 += 4;
    v112[1] = v32;
    v29 += 16;
    HIDWORD(v112[0]) = v34;
  }
  v35 = *(__m128i *)(v33 + 628);
  v113 = v35;
  v113.m128i_i32[0] = *((_DWORD *)v33 + 153) + _mm_cvtsi128_si32(v35);
  v113.m128i_i32[1] = *((_DWORD *)v33 + 154) + v35.m128i_i32[1];
  v113.m128i_i32[2] = *((_DWORD *)v33 + 155) + v35.m128i_i32[2];
  v113.m128i_i32[3] = *((_DWORD *)v33 + 156) + v35.m128i_i32[3];
  *(_DWORD *)(a2 + 48) = v29;
  if ( v29 + 16 <= v31 )
  {
    *(__m128i *)v32 = v113;
    v32 += 4;
    v112[1] = v32;
    HIDWORD(v112[0]) = v29 + 16;
  }
  v36 = 0LL;
  v37 = *((_QWORD *)&v115 + 1);
  v38 = HIDWORD(v103[0]);
  while ( 1 )
  {
    v39 = 314159;
    v107 = v33 + 48;
    v116 = v33 + 48;
    if ( !v36 )
    {
      v50 = *((_QWORD *)v33 + 7);
      v118 = (_QWORD *)v50;
      v36 = v50;
      v117 = v50;
      goto LABEL_63;
    }
    v117 = v36;
    v94 = *((_DWORD *)v33 + 13) >> 5;
    v121 = *(_QWORD *)(v36 + 8) & (-1LL << (*((_DWORD *)v33 + 13) & 0x1F));
    v40 = (unsigned __int8 *)&v121;
    v101 = &v121;
    v41 = 8LL;
    v119 = 8LL;
    LODWORD(v42) = 314159;
    v43 = 314159LL;
    v104 = 314159LL;
    v110 = 314159LL;
    v44 = 314159;
    v45 = 314159;
    v46 = 314159;
    v47 = 314159;
    while ( v41 >= 8 )
    {
      v42 = v40[7]
          + 37
          * (v40[6]
           + 37 * (v40[5] + 37 * (v40[4] + 37 * (v40[3] + 37 * (v40[2] + 37 * (v40[1] + 37 * (*v40 + 37 * v43)))))));
      v43 = v42;
      v40 += 8;
      v101 = (__int64 *)v40;
      v41 -= 8LL;
      v119 = v41;
      v104 = v42;
      v110 = v42;
      v44 = v42;
      v45 = v42;
      v46 = v42;
      v39 = v42;
      v47 = v42;
    }
    v48 = v41 - 1;
    if ( v48 )
    {
      v49 = v48 - 1;
      if ( v49 )
      {
        v74 = v49 - 1;
        if ( v74 )
        {
          v75 = v74 - 1;
          if ( v75 )
          {
            v76 = v75 - 1;
            if ( v76 )
            {
              v77 = v76 - 1;
              if ( v77 )
              {
                if ( v77 != 1 )
                  goto LABEL_62;
                v78 = 37 * v104 + *v40++;
                v101 = (__int64 *)v40;
              }
              else
              {
                v78 = v110;
              }
              v44 = *v40++ + 37 * v78;
              v101 = (__int64 *)v40;
            }
            v45 = *v40++ + 37 * v44;
            v101 = (__int64 *)v40;
          }
          v46 = *v40++ + 37 * v45;
          v101 = (__int64 *)v40;
        }
        v39 = *v40++ + 37 * v46;
        v101 = (__int64 *)v40;
      }
      v47 = *v40++ + 37 * v39;
      v101 = (__int64 *)v40;
    }
    LODWORD(v42) = *v40 + 37 * v47;
    v101 = (__int64 *)(v40 + 1);
LABEL_62:
    v50 = *((_QWORD *)v107 + 1) + 8LL * ((unsigned int)v42 & (v94 - 1));
    v118 = (_QWORD *)v50;
LABEL_63:
    v120 = 0LL;
    if ( !v36 )
      goto LABEL_68;
    if ( (*(_QWORD *)v36 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v37 = *((_QWORD *)&v115 + 1);
      v32 = v112[1];
      v38 = HIDWORD(v103[0]);
      v50 = (__int64)v118;
      v36 = v117;
    }
    if ( v36 && (v36 = *(_QWORD *)v36, (v36 & 1) == 0) )
    {
LABEL_72:
      v117 = v36;
    }
    else
    {
LABEL_68:
      v51 = (__int64 *)(v50 + 8);
      v52 = *((_QWORD *)v116 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v116 + 1) >> 5);
      while ( 1 )
      {
        v120 = v51;
        if ( (unsigned __int64)v51 >= v52 )
          break;
        v36 = *v51;
        if ( (*v51 & 1) == 0 )
        {
          v118 = v51;
          goto LABEL_72;
        }
        ++v51;
      }
      v36 = 0LL;
    }
    if ( !v36 )
      break;
    v53 = *(_QWORD *)(v36 + 16);
    *(_QWORD *)v37 = *(_QWORD *)(v36 + 32);
    *(_DWORD *)(v37 + 8) = *(_DWORD *)(v36 + 40);
    *(_DWORD *)(v37 + 12) = (unsigned __int16)*(_DWORD *)(v36 + 44);
    *(_DWORD *)(v37 + 72) = *(_DWORD *)(v36 + 512);
    *(_DWORD *)(v37 + 76) = *(_DWORD *)(v36 + 516);
    *(_OWORD *)(v37 + 80) = *(_OWORD *)(v36 + 488);
    *(_QWORD *)(v37 + 96) = *(_QWORD *)(v36 + 504);
    *(_DWORD *)(v37 + 20) = **(_DWORD **)(v53 + 32);
    *(_DWORD *)(v37 + 24) = *(_DWORD *)(*(_QWORD *)(v53 + 32) + 4LL);
    *(_DWORD *)(v37 + 44) = **(_DWORD **)(v53 + 40);
    *(_DWORD *)(v37 + 48) = *(_DWORD *)(*(_QWORD *)(v53 + 40) + 4LL);
    v54 = HIDWORD(v112[0]);
    *(_DWORD *)(v37 + 40) = HIDWORD(v112[0]);
    *(_WORD *)(v37 + 60) = *(_WORD *)(v53 + 86);
    v95 = *(unsigned __int16 *)(v53 + 86) + v54;
    if ( v95 <= DWORD2(v111) )
    {
      v55 = *(unsigned __int16 *)(v53 + 86);
      memmove(v32, *(const void **)(v53 + 72), v55);
      v32 = (_DWORD *)((char *)v32 + v55);
      v112[1] = v32;
      HIDWORD(v112[0]) = v95;
    }
    *(_WORD *)(v37 + 52) = *(_WORD *)(v53 + 80);
    *(_DWORD *)(v37 + 16) = v38;
    v56 = 2 * *(unsigned __int16 *)(v53 + 80);
    v96 = v56 + v38;
    v57 = DWORD2(v102);
    v58 = (char *)v103[1];
    if ( v56 + v38 <= DWORD2(v102) )
    {
      v59 = v56;
      memmove(v103[1], *(const void **)(v53 + 48), v56);
      v58 = (char *)v103[1] + v59;
      v103[1] = (char *)v103[1] + v59;
      v38 = v96;
      HIDWORD(v103[0]) = v96;
      v57 = DWORD2(v102);
    }
    *(_WORD *)(v37 + 54) = *(_WORD *)(v53 + 82);
    *(_DWORD *)(v37 + 28) = v38;
    v60 = 2 * *(unsigned __int16 *)(v53 + 82);
    v97 = v60 + v38;
    if ( v60 + v38 <= v57 )
    {
      v61 = v60;
      memmove(v58, *(const void **)(v53 + 56), v60);
      v58 = (char *)v103[1] + v61;
      v103[1] = (char *)v103[1] + v61;
      v38 = v97;
      HIDWORD(v103[0]) = v97;
      v57 = DWORD2(v102);
    }
    *(_WORD *)(v37 + 56) = *(_WORD *)(v53 + 84);
    *(_DWORD *)(v37 + 32) = v38;
    v62 = *(const void **)(v53 + 64);
    v63 = 2 * *(unsigned __int16 *)(v53 + 84);
    v64 = v63 + v38;
    if ( v63 + v38 <= v57 )
    {
      v65 = v63;
      memmove(v58, v62, v63);
      v58 = (char *)v103[1] + v65;
      v103[1] = (char *)v103[1] + v65;
      v38 = v64;
      HIDWORD(v103[0]) = v64;
      v57 = DWORD2(v102);
    }
    v66 = *(_QWORD *)(v36 + 24);
    if ( v66 )
    {
      *(_WORD *)(v37 + 58) = (unsigned __int16)WORD1(*(_QWORD *)(v66 + 24)) >> 1;
      *(_DWORD *)(v37 + 36) = v38;
      v67 = 2 * *(unsigned __int16 *)(v37 + 58);
      v68 = v67 + v38;
      if ( v67 + v38 <= v57 )
      {
        v69 = v67;
        memmove(v58, (const void *)(*(_QWORD *)(v36 + 24) + 32LL), v67);
        v103[1] = (char *)v103[1] + v69;
        v38 = v68;
        HIDWORD(v103[0]) = v68;
      }
    }
    else
    {
      *(_WORD *)(v37 + 58) = 0;
      *(_DWORD *)(v37 + 36) = v38;
    }
    v70 = HIDWORD(v106[0]);
    *(_DWORD *)(v37 + 64) = HIDWORD(v106[0]);
    if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline()
      && (v71 = *((_DWORD *)Object + 10) >> 28) != 0 )
    {
      if ( v71 == 1 )
        *(_DWORD *)(v37 + 68) = 440;
    }
    else
    {
      *(_DWORD *)(v37 + 68) = 432;
    }
    v72 = HIDWORD(Size[1]) + v70;
    if ( (unsigned int)(HIDWORD(Size[1]) + v70) <= LODWORD(Size[1]) )
    {
      v73 = HIDWORD(Size[1]);
      memmove(v106[1], (const void *)(v36 + 48), HIDWORD(Size[1]));
      v106[1] = (char *)v106[1] + v73;
      HIDWORD(v106[0]) = v72;
    }
    if ( (unsigned int)(HIDWORD(v114) + DWORD1(v115)) <= DWORD2(v114) )
    {
      DWORD1(v115) += HIDWORD(v114);
      v37 += HIDWORD(v114);
      *((_QWORD *)&v115 + 1) = v37;
    }
    v33 = (char *)Object;
  }
  v108 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v109 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
  v104 = MEMORY[0xFFFFF78000000014];
  v79 = v108;
  v80 = Object;
  v81 = v122;
  *(_DWORD *)(v122 + 16) = v108 - *((_DWORD *)Object + 150);
  *(_DWORD *)(v81 + 20) = v109 - v80[151];
  *(_DWORD *)(v81 + 28) = v79;
  TimelineBitmapTime = KeQueryTimelineBitmapTime();
  v84[8] = TimelineBitmapTime;
  v84[16] = v85;
  v84[17] = v86;
  for ( i = 0LL; ; *(_DWORD *)(i + 492) &= ~0x80000000 )
  {
    if ( i )
    {
      v98 = *(_QWORD *)(i + 8) & (-1LL << (*(_DWORD *)(v83 + 68) & 0x1F));
      v90 = *(_QWORD *)(v83 + 72)
          + 8LL
          * ((37
            * (BYTE6(v98)
             + 37
             * (BYTE5(v98)
              + 37
              * (BYTE4(v98)
               + 37 * (BYTE3(v98) + 37 * (BYTE2(v98) + 37 * (BYTE1(v98) + 37 * ((unsigned __int8)v98 + 11623883)))))))
            + HIBYTE(v98)) & (unsigned int)((*(_DWORD *)(v83 + 68) >> 5) - 1));
    }
    else
    {
      i = *(_QWORD *)(v83 + 72);
      v90 = i;
    }
    if ( !i || (i = *(_QWORD *)i, (i & 1) != 0) )
    {
      for ( j = (__int64 *)(v90 + 8);
            (unsigned __int64)j < *(_QWORD *)(v83 + 72) + 8 * ((unsigned __int64)*(unsigned int *)(v83 + 68) >> 5);
            ++j )
      {
        i = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_134;
      }
      i = 0LL;
    }
LABEL_134:
    if ( !i )
      break;
  }
  v4 = (char *)Object;
  PopEtEnergyTrackerCleanupAggregates(Object);
  ++*((_DWORD *)v4 + 152);
  *((_DWORD *)v4 + 150) = v108;
  *((_DWORD *)v4 + 151) = v109;
  *(_OWORD *)(v4 + 612) = 0LL;
  *(__m128i *)(v4 + 628) = v113;
  v6 = 0;
LABEL_117:
  v5 = 1;
LABEL_118:
  if ( v5 )
    PopReleaseRwLock((signed __int64 *)v4 + 2);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x74456F50u);
  return (unsigned int)v6;
}
