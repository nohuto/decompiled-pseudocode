/*
 * XREFs of EtwpCovSampContextGetModule @ 0x140923930
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1409228E0 (EtwpCovSampImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwCovSampHash @ 0x140414E20 (EtwCovSampHash.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     ProcessForExeModule @ 0x14048448C (ProcessForExeModule.c)
 *     EtwpCheckDebugInfoEqual @ 0x1404AD9D0 (EtwpCheckDebugInfoEqual.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCovSampCheckForSegments @ 0x1409F8664 (EtwpCovSampCheckForSegments.c)
 *     EtwpFindDebugId @ 0x1409F9534 (EtwpFindDebugId.c)
 *     EtwpCovSampModuleCleanup @ 0x140A0C308 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140A0C358 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampContextFastFindModule @ 0x140A1F87C (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampModuleGetName @ 0x140A38120 (EtwpCovSampModuleGetName.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADB9FC (EtwpCovSampContextPruneModules.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampContextGetModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // r12
  void *v9; // r13
  char *v10; // r14
  PIMAGE_NT_HEADERS v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v16; // rdi
  char *v17; // rcx
  __int64 Module; // rax
  unsigned int v19; // ecx
  char *Pool2; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // edi
  unsigned __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // edx
  struct _KTHREAD *v31; // rcx
  char *v32; // rax
  char *v33; // rdi
  char *v34; // r9
  __int64 v35; // r8
  unsigned int v36; // eax
  char i; // cl
  unsigned __int64 v38; // rcx
  unsigned int v39; // edx
  unsigned int v40; // r10d
  __int64 v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  char k; // cl
  unsigned __int64 v45; // rcx
  unsigned int v46; // edx
  __int64 v47; // r11
  unsigned int v48; // r9d
  __int64 v49; // rdx
  _QWORD *v50; // r10
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // edi
  _QWORD *n; // rdx
  _QWORD *v56; // r8
  unsigned int v57; // edi
  _QWORD *ii; // rdx
  int v59; // r10d
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  int v65; // r11d
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 v68; // rdi
  int v69; // r8d
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  void *v73; // rcx
  int Name; // [rsp+20h] [rbp-108h]
  int v76; // [rsp+28h] [rbp-100h]
  __int64 v77; // [rsp+28h] [rbp-100h]
  char *v78; // [rsp+30h] [rbp-F8h]
  __m128i *v79; // [rsp+30h] [rbp-F8h]
  __int64 j; // [rsp+30h] [rbp-F8h]
  int v81; // [rsp+38h] [rbp-F0h]
  __int64 v82; // [rsp+40h] [rbp-E8h]
  __int64 v83; // [rsp+48h] [rbp-E0h]
  __int64 v84; // [rsp+50h] [rbp-D8h]
  __int64 v85; // [rsp+58h] [rbp-D0h]
  unsigned int v86; // [rsp+60h] [rbp-C8h]
  unsigned int v87; // [rsp+68h] [rbp-C0h]
  __int64 v88; // [rsp+68h] [rbp-C0h]
  int v89; // [rsp+70h] [rbp-B8h]
  _QWORD *v90; // [rsp+70h] [rbp-B8h]
  __int128 v91; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+88h] [rbp-A0h]
  _QWORD v93[2]; // [rsp+98h] [rbp-90h] BYREF
  _QWORD v94[3]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-68h]
  __int64 v96; // [rsp+C8h] [rbp-60h]
  __int64 v97; // [rsp+D0h] [rbp-58h]
  __m128i v98; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v101; // [rsp+150h] [rbp+28h]
  unsigned __int64 v102; // [rsp+150h] [rbp+28h]
  char *v103; // [rsp+150h] [rbp+28h]
  int v104; // [rsp+150h] [rbp+28h]
  __int64 m; // [rsp+150h] [rbp+28h]
  __int64 v106; // [rsp+150h] [rbp+28h]

  v8 = 0LL;
  v9 = 0LL;
  v82 = 0LL;
  v10 = 0LL;
  v76 = 0;
  *a6 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  *((_QWORD *)&v91 + 1) = *(_QWORD *)(a5 + 32);
  v11 = RtlImageNtHeader(*(PVOID *)(a5 + 16));
  v94[2] = v11;
  if ( !v11 )
  {
    Name = -1073741637;
    goto LABEL_136;
  }
  LODWORD(v92) = v11->OptionalHeader.CheckSum;
  DWORD1(v92) = v11->FileHeader.TimeDateStamp;
  if ( (*(_DWORD *)(a5 + 8) & 0x100) != 0 )
  {
    v12 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    v13 = *(_QWORD *)(a5 + 48);
    if ( !v13 )
    {
      Name = -1073741637;
      goto LABEL_136;
    }
    v12 = *(_QWORD *)(v13 + 24);
  }
  *(_QWORD *)&v91 = v12;
  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a5 + 16) == *(_QWORD *)(a2 + 688) )
    {
      v76 = 1;
    }
    else
    {
      v76 = 0;
      v14 = *(unsigned int *)(a3 + 40);
      *(_QWORD *)&v91 = v14 ^ v12;
      DWORD2(v92) = v14;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = (volatile signed __int64 *)(a1 + 1176);
  v17 = (char *)KeAbPreAcquire(a1 + 1176, 0LL);
  v78 = v17;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1176), 0, v17, a1 + 1176);
    v17 = v78;
  }
  if ( v17 )
    v17[10] = 1;
  Module = EtwpCovSampContextFastFindModule(a1, &v91, a6);
  if ( Module && Module == *a6 )
  {
    ProcessForExeModule(a1, a3, *a6, v76);
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegion();
    Name = 0;
    goto LABEL_21;
  }
  v89 = *(_DWORD *)(a1 + 1196) >> 5;
  v19 = *(_DWORD *)(a1 + 1192);
  if ( v19 <= *(_DWORD *)(a1 + 1208) )
    v19 = *(_DWORD *)(a1 + 1208);
  v87 = v19;
  if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
  KeAbPostRelease(a1 + 1176);
  KeLeaveCriticalRegion();
  Pool2 = (char *)ExAllocatePool2(0x100uLL, 0xB0uLL, 0x56777445u);
  v10 = Pool2;
  if ( !Pool2 )
  {
    Name = -1073741670;
LABEL_21:
    v9 = 0LL;
    goto LABEL_136;
  }
  memset_0(Pool2, 0, 0xB0uLL);
  *((_QWORD *)v10 + 10) = v10 + 72;
  *((_QWORD *)v10 + 9) = v10 + 72;
  *((_QWORD *)v10 + 12) = v10 + 88;
  *((_QWORD *)v10 + 11) = v10 + 88;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_QWORD *)v10 + 8) = 1LL;
  *((_QWORD *)v10 + 1) = v91;
  *((_QWORD *)v10 + 5) = *((_QWORD *)&v91 + 1);
  *((_QWORD *)v10 + 4) = v92;
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (*(_DWORD *)(a5 + 8) << 9)) & 0x20000;
  v94[0] = 0LL;
  v94[1] = 0LL;
  v86 = 0;
  v79 = (__m128i *)v94;
  v81 = 1;
  if ( (int)EtwpFindDebugId(*(PVOID *)(a5 + 16)) >= 0 )
  {
    v21 = *((_QWORD *)v10 + 6);
    if ( *((_DWORD *)v10 + 14) <= 0x400u )
    {
      v86 = *(_DWORD *)(v21 + 20);
      v79 = (__m128i *)(v21 + 4);
      goto LABEL_34;
    }
    ExFreePoolWithTag(*((PVOID *)v10 + 6), 0);
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 14) = 0;
  }
  v81 = 0;
  v22 = v76;
  if ( !v76 )
  {
    v23 = 0;
    goto LABEL_42;
  }
LABEL_34:
  Name = EtwpCovSampModuleGetName(v10, a5, a4);
  if ( Name < 0 )
    goto LABEL_21;
  v93[0] = *((_QWORD *)v10 + 14);
  v93[1] = (unsigned __int16)*((_DWORD *)v10 + 30);
  if ( *(_DWORD *)(a1 + 1624) )
    v23 = EtwpCovSampCheckForSegments(v93, a1 + 1304);
  else
    v23 = v81;
  if ( v23 && *(_DWORD *)(a1 + 1628) )
    v23 = EtwpCovSampCheckForSegments(v93, a1 + 1464) == 0;
  v22 = v76;
LABEL_42:
  if ( v23 || v22 )
  {
    *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (v23 << 16)) & 0x10000;
    v24 = *((_DWORD *)v10 + 10);
    LODWORD(v101) = *((_DWORD *)v10 + 9);
    HIDWORD(v101) = *((_DWORD *)v10 + 8);
    v25 = EtwCovSampHash(v101, *(unsigned int *)(a1 + 12));
    v98 = *v79;
    v26 = v98;
    v27 = EtwCovSampHash(__PAIR64__(v86, v24), v25);
    v28 = EtwCovSampHash(v26.m128i_u64[0], v27);
    v102 = EtwCovSampHash(_mm_srli_si128(v26, 8).m128i_u64[0], v28);
    v29 = v102 ^ HIDWORD(v102);
    if ( (unsigned int)v102 == HIDWORD(v102) )
      v29 = 1;
    if ( !v76 )
      v29 ^= *(_DWORD *)(a3 + 40);
    *((_DWORD *)v10 + 31) = v29;
    v16 = (volatile signed __int64 *)(a1 + 1176);
  }
  v30 = 2 * v89;
  if ( v87 + 1 > 2 * v89 )
  {
    v8 = v30;
    if ( !v30 )
      v8 = 128LL;
    v82 = ExAllocatePool2(0x100uLL, 8LL * (unsigned int)(2 * v8), 0x56777445u);
  }
  v31 = KeGetCurrentThread();
  --v31->KernelApcDisable;
  v32 = (char *)KeAbPreAcquire((__int64)v16, 0LL);
  v103 = v32;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16, v32, (__int64)v16);
    v32 = v103;
  }
  if ( v32 )
    v32[10] = 1;
  *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
  v33 = (char *)v82;
  if ( v82 && (unsigned int)v8 > *(_DWORD *)(a1 + 1196) >> 5 )
  {
    v34 = (char *)(v82 + 8LL * (unsigned int)v8);
    v35 = (unsigned int)v8;
    v104 = v8 & (v8 - 1);
    if ( v104 )
    {
      v36 = v8;
      for ( i = -1; v36; v36 >>= 1 )
        ++i;
      v35 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v35 > 0x4000000 )
      v35 = 0x4000000LL;
    v38 = (unsigned int)v35;
    if ( v34 > &v34[8 * v35] )
      v38 = 0LL;
    if ( v38 )
    {
      memset64(v34, (a1 + 1208) | 1, v38);
      v33 = (char *)v82;
    }
    v39 = *(_DWORD *)(a1 + 1212);
    v88 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
    v40 = 0;
    if ( (v39 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v41 = *(_QWORD *)(a1 + 1216);
        for ( j = v41; ; v41 = j )
        {
          v42 = *(_QWORD **)(v41 + 8LL * v40);
          v90 = v42;
          if ( ((unsigned __int8)v42 & 1) != 0 )
            break;
          *(_QWORD *)(j + 8LL * v40) = *v42;
          v84 = v88 & v42[1];
          v43 = (37
               * (BYTE6(v84)
                + 37
                * (BYTE5(v84)
                 + 37
                 * (BYTE4(v84)
                  + 37 * (BYTE3(v84) + 37 * (BYTE2(v84) + 37 * (BYTE1(v84) + 37 * ((unsigned __int8)v84 + 11623883)))))))
               + HIBYTE(v84)) & (unsigned int)(v35 - 1);
          *v90 = *(_QWORD *)&v34[8 * v43];
          *(_QWORD *)&v34[8 * v43] = v90;
          v33 = (char *)v82;
        }
        ++v40;
        v39 = *(_DWORD *)(a1 + 1212);
      }
      while ( v40 < v39 >> 5 );
    }
    *(_QWORD *)(a1 + 1216) = v34;
    *(_DWORD *)(a1 + 1212) = (32 * v35) | v39 & 0x1F;
    if ( v104 )
    {
      for ( k = -1; (_DWORD)v8; LODWORD(v8) = (unsigned int)v8 >> 1 )
        ++k;
      v8 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v8 > 0x4000000 )
      v8 = 0x4000000LL;
    v45 = (unsigned int)v8;
    if ( v33 > &v33[8 * v8] )
      v45 = 0LL;
    if ( v45 )
    {
      memset64(v33, (a1 + 1192) | 1, v45);
      v33 = (char *)v82;
    }
    v46 = *(_DWORD *)(a1 + 1196);
    v47 = -1LL << (*(_BYTE *)(a1 + 1196) & 0x1F);
    v48 = 0;
    if ( (v46 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v49 = *(_QWORD *)(a1 + 1200);
        for ( m = v49; ; v49 = m )
        {
          v50 = *(_QWORD **)(v49 + 8LL * v48);
          if ( ((unsigned __int8)v50 & 1) != 0 )
            break;
          *(_QWORD *)(v49 + 8LL * v48) = *v50;
          v85 = v47 & v50[1];
          v51 = (37
               * (BYTE6(v85)
                + 37
                * (BYTE5(v85)
                 + 37
                 * (BYTE4(v85)
                  + 37 * (BYTE3(v85) + 37 * (BYTE2(v85) + 37 * (BYTE1(v85) + 37 * ((unsigned __int8)v85 + 11623883)))))))
               + HIBYTE(v85)) & (unsigned int)(v8 - 1);
          *v50 = *(_QWORD *)&v33[8 * v51];
          *(_QWORD *)&v33[8 * v51] = v50;
        }
        ++v48;
        v46 = *(_DWORD *)(a1 + 1196);
      }
      while ( v48 < v46 >> 5 );
    }
    v52 = *(_QWORD *)(a1 + 1200);
    *(_QWORD *)(a1 + 1200) = v33;
    *(_DWORD *)(a1 + 1196) = v46 & 0x1F | (32 * v8);
    v82 = v52;
  }
  if ( *(_DWORD *)(a1 + 1196) >= 0x20u )
  {
    v53 = EtwpCovSampContextFastFindModule(a1, &v91, a6);
    if ( v53 )
    {
      if ( v53 == *a6 )
      {
        ProcessForExeModule(a1, a3, *a6, v76);
LABEL_96:
        Name = 0;
        goto LABEL_92;
      }
      *(_DWORD *)(v53 + 120) |= 0x40000u;
      v54 = *(_DWORD *)(a1 + 1196);
      v95 = *(_QWORD *)(v53 + 8) & (-1LL << (v54 & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(a1 + 1200)
                         + 8LL
                         * ((37
                           * (BYTE6(v95)
                            + 37
                            * (BYTE5(v95)
                             + 37
                             * (BYTE4(v95)
                              + 37
                              * (BYTE3(v95)
                               + 37 * (BYTE2(v95) + 37 * (BYTE1(v95) + 37 * ((unsigned __int8)v95 + 11623883)))))))
                           + HIBYTE(v95)) & ((v54 >> 5) - 1))); (*n & 1) == 0; n = (_QWORD *)*n )
      {
        if ( *n == v53 )
        {
          *n = *(_QWORD *)v53;
          --*(_DWORD *)(a1 + 1192);
          break;
        }
      }
      *(_QWORD *)v53 = 0LL;
      v56 = (_QWORD *)(v53 + 16);
      if ( *(_QWORD *)(v53 + 16) )
      {
        v57 = *(_DWORD *)(a1 + 1212);
        v96 = *(_QWORD *)(v53 + 24) & (-1LL << (v57 & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                            + 8LL
                            * ((37
                              * (BYTE6(v96)
                               + 37
                               * (BYTE5(v96)
                                + 37
                                * (BYTE4(v96)
                                 + 37
                                 * (BYTE3(v96)
                                  + 37 * (BYTE2(v96) + 37 * (BYTE1(v96) + 37 * ((unsigned __int8)v96 + 11623883)))))))
                              + HIBYTE(v96)) & ((v57 >> 5) - 1))); (*ii & 1) == 0; ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v56 )
          {
            *ii = *v56;
            --*(_DWORD *)(a1 + 1208);
            break;
          }
        }
        *(_QWORD *)(v53 + 16) = 0LL;
      }
    }
    v59 = v76;
    *((_DWORD *)v10 + 30) = (v76 << 20) | *((_DWORD *)v10 + 30) & 0xFFEFFFFF;
    *((_DWORD *)v10 + 32) = (*(_DWORD *)(a1 + 1632))++;
    v83 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F));
    v60 = (37
         * (BYTE6(v83)
          + 37
          * (BYTE5(v83)
           + 37
           * (BYTE4(v83)
            + 37 * (BYTE3(v83) + 37 * (BYTE2(v83) + 37 * (BYTE1(v83) + 37 * ((unsigned __int8)v83 + 11623883)))))))
         + HIBYTE(v83)) & (unsigned int)((*(_DWORD *)(a1 + 1196) >> 5) - 1);
    v61 = *(_QWORD *)(a1 + 1200);
    *(_QWORD *)v10 = *(_QWORD *)(v61 + 8 * v60);
    *(_QWORD *)(v61 + 8 * v60) = v10;
    ++*(_DWORD *)(a1 + 1192);
    v62 = v10 + 72;
    v63 = (_QWORD *)(a1 + 1224);
    v64 = *(_QWORD *)(a1 + 1224);
    if ( *(_QWORD *)(v64 + 8) != a1 + 1224 )
      __fastfail(3u);
    *v62 = v64;
    *((_QWORD *)v10 + 10) = v63;
    *(_QWORD *)(v64 + 8) = v62;
    *v63 = v62;
    *((_DWORD *)v10 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 1240);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1244), 1u);
    v65 = *((_DWORD *)v10 + 30);
    if ( (v65 & 0x10000) != 0 || v76 )
    {
      v66 = *((unsigned int *)v10 + 31);
      *((_QWORD *)v10 + 3) = v66;
      v67 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
      v68 = v66 & v67;
      v69 = *(_DWORD *)(a1 + 1212) >> 5;
      if ( v69 )
      {
        v97 = v66 & (-1LL << (*(_BYTE *)(a1 + 1212) & 0x1F));
        v106 = v66 & v67;
        v70 = *(_QWORD *)(a1 + 1216)
            + 8LL
            * ((37
              * (BYTE6(v106)
               + 37
               * (BYTE5(v106)
                + 37
                * (BYTE4(v106)
                 + 37 * (BYTE3(v106) + 37 * (BYTE2(v106) + 37 * (BYTE1(v106) + 37 * ((unsigned __int8)v68 + 11623883)))))))
              + HIBYTE(v106)) & (unsigned int)(v69 - 1));
        while ( 1 )
        {
          v70 = *(_QWORD *)v70;
          if ( (v70 & 1) != 0 )
            break;
          if ( v68 == (v67 & *(_QWORD *)(v70 + 8)) )
            goto LABEL_119;
        }
      }
      v70 = 0LL;
LABEL_119:
      if ( v70 )
      {
        if ( *(_DWORD *)(v70 + 16) != *((_DWORD *)v10 + 8)
          || *(_DWORD *)(v70 + 20) != *((_DWORD *)v10 + 9)
          || *(_QWORD *)(v70 + 24) != *((_QWORD *)v10 + 5)
          || !(unsigned int)EtwpCheckDebugInfoEqual(*(_QWORD *)(v70 + 32), *((_QWORD *)v10 + 6)) )
        {
          *((_DWORD *)v10 + 30) = v65 & 0xFFFEFFFF;
          *((_DWORD *)v10 + 31) = 0;
        }
        *((_DWORD *)v10 + 30) |= 0x80000u;
        EtwpCovSampModuleNameInfoCleanup(v10 + 104);
        *((_QWORD *)v10 + 14) = 0LL;
        *((_WORD *)v10 + 60) = 0;
        v73 = (void *)*((_QWORD *)v10 + 6);
        if ( v73 )
          ExFreePoolWithTag(v73, 0);
        *((_QWORD *)v10 + 6) = 0LL;
        *((_DWORD *)v10 + 14) = 0;
        v59 = v76;
      }
      else
      {
        v77 = v67 & *((_QWORD *)v10 + 3);
        v71 = (37
             * (BYTE6(v77)
              + 37
              * (BYTE5(v77)
               + 37
               * (BYTE4(v77)
                + 37 * (BYTE3(v77) + 37 * (BYTE2(v77) + 37 * (BYTE1(v77) + 37 * ((unsigned __int8)v77 + 11623883)))))))
             + HIBYTE(v77)) & (unsigned int)(v69 - 1);
        v72 = *(_QWORD *)(a1 + 1216);
        *((_QWORD *)v10 + 2) = *(_QWORD *)(v72 + 8 * v71);
        *(_QWORD *)(v72 + 8 * v71) = v10 + 16;
        ++*(_DWORD *)(a1 + 1208);
      }
      if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
      {
        ProcessForExeModule(a1, a3, (__int64)v10, v59);
        *((_DWORD *)v10 + 40) = *(_DWORD *)(a3 + 40);
        *((_DWORD *)v10 + 41) = *(_DWORD *)(a3 + 44);
      }
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 8) <= 1 )
      __fastfail(0xEu);
    *a6 = (__int64)v10;
    v10 = 0LL;
    *(_QWORD *)(a1 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegion();
    EtwpCovSampContextPruneModules(a1);
    goto LABEL_96;
  }
  Name = -1073741670;
LABEL_92:
  v9 = (void *)v82;
LABEL_136:
  if ( *(struct _KTHREAD **)(a1 + 1184) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegion();
  }
  if ( v10 )
  {
    *((_QWORD *)v10 + 8) = 0LL;
    EtwpCovSampModuleCleanup(v10);
    ExFreePoolWithTag(v10, 0x56777445u);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x56777445u);
  return (unsigned int)Name;
}
