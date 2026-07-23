/*
 * XREFs of EtwpCovSampContextGetModule @ 0x14090D0F0
 * Callers:
 *     EtwpCovSampImageNotify @ 0x14090C0A0 (EtwpCovSampImageNotify.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwCovSampHash @ 0x140429530 (EtwCovSampHash.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     ProcessForExeModule @ 0x140489DF4 (ProcessForExeModule.c)
 *     EtwpCheckDebugInfoEqual @ 0x1404B1E60 (EtwpCheckDebugInfoEqual.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpFindDebugId @ 0x140898408 (EtwpFindDebugId.c)
 *     EtwpCovSampModuleCleanup @ 0x1409F5390 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409F53E0 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCovSampCheckForSegments @ 0x140A011BC (EtwpCovSampCheckForSegments.c)
 *     EtwpCovSampContextFastFindModule @ 0x140A21E28 (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampModuleGetName @ 0x140A3DCA4 (EtwpCovSampModuleGetName.c)
 *     EtwpCovSampContextPruneModules @ 0x140ACF5C8 (EtwpCovSampContextPruneModules.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v17; // rcx
  __int64 Module; // rax
  unsigned int v19; // ecx
  char *Pool2; // rax
  size_t v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // edi
  unsigned __int64 v26; // rax
  __m128i v27; // xmm0
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // edx
  struct _KTHREAD *v32; // rcx
  __int64 *v33; // rax
  char *v34; // rdi
  char *v35; // r9
  __int64 v36; // r8
  unsigned int v37; // eax
  char i; // cl
  unsigned __int64 v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // r10d
  __int64 v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rcx
  char k; // cl
  unsigned __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // r11
  unsigned int v49; // r9d
  __int64 v50; // rdx
  _QWORD *v51; // r10
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // edi
  _QWORD *n; // rdx
  _QWORD *v57; // r8
  unsigned int v58; // edi
  _QWORD *ii; // rdx
  int v60; // r10d
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // rcx
  __int64 v65; // rdx
  int v66; // r11d
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdi
  int v70; // r8d
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  void *v74; // rcx
  int Name; // [rsp+20h] [rbp-108h]
  int v77; // [rsp+28h] [rbp-100h]
  __int64 v78; // [rsp+28h] [rbp-100h]
  __int64 *v79; // [rsp+30h] [rbp-F8h]
  __m128i *v80; // [rsp+30h] [rbp-F8h]
  __int64 j; // [rsp+30h] [rbp-F8h]
  int v82; // [rsp+38h] [rbp-F0h]
  __int64 v83; // [rsp+40h] [rbp-E8h]
  __int64 v84; // [rsp+48h] [rbp-E0h]
  __int64 v85; // [rsp+50h] [rbp-D8h]
  __int64 v86; // [rsp+58h] [rbp-D0h]
  unsigned int v87; // [rsp+60h] [rbp-C8h]
  unsigned int v88; // [rsp+68h] [rbp-C0h]
  __int64 v89; // [rsp+68h] [rbp-C0h]
  int v90; // [rsp+70h] [rbp-B8h]
  _QWORD *v91; // [rsp+70h] [rbp-B8h]
  __int128 v92; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v93; // [rsp+88h] [rbp-A0h]
  _QWORD v94[2]; // [rsp+98h] [rbp-90h] BYREF
  _QWORD v95[3]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-68h]
  __int64 v97; // [rsp+C8h] [rbp-60h]
  __int64 v98; // [rsp+D0h] [rbp-58h]
  __m128i v99; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v102; // [rsp+150h] [rbp+28h]
  unsigned __int64 v103; // [rsp+150h] [rbp+28h]
  __int64 *v104; // [rsp+150h] [rbp+28h]
  int v105; // [rsp+150h] [rbp+28h]
  __int64 m; // [rsp+150h] [rbp+28h]
  __int64 v107; // [rsp+150h] [rbp+28h]

  v8 = 0LL;
  v9 = 0LL;
  v83 = 0LL;
  v10 = 0LL;
  v77 = 0;
  *a6 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  *((_QWORD *)&v92 + 1) = *(_QWORD *)(a5 + 32);
  v11 = RtlImageNtHeader(*(PVOID *)(a5 + 16));
  v95[2] = v11;
  if ( !v11 )
  {
    Name = -1073741637;
    goto LABEL_136;
  }
  LODWORD(v93) = v11->OptionalHeader.CheckSum;
  DWORD1(v93) = v11->FileHeader.TimeDateStamp;
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
  *(_QWORD *)&v92 = v12;
  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a5 + 16) == *(_QWORD *)(a2 + 688) )
    {
      v77 = 1;
    }
    else
    {
      v77 = 0;
      v14 = *(unsigned int *)(a3 + 40);
      *(_QWORD *)&v92 = v14 ^ v12;
      DWORD2(v93) = v14;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = (volatile signed __int64 *)(a1 + 1176);
  v17 = KeAbPreAcquire(a1 + 1176, 0LL);
  v79 = v17;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1176), 0, v17, a1 + 1176);
    v17 = v79;
  }
  if ( v17 )
    *((_BYTE *)v17 + 10) = 1;
  Module = EtwpCovSampContextFastFindModule(a1, &v92, a6);
  if ( Module && Module == *a6 )
  {
    ProcessForExeModule(a1, a3, *a6, v77);
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
    KeAbPostRelease(a1 + 1176);
    KeLeaveCriticalRegion();
    Name = 0;
    goto LABEL_21;
  }
  v90 = *(_DWORD *)(a1 + 1196) >> 5;
  v19 = *(_DWORD *)(a1 + 1192);
  if ( v19 <= *(_DWORD *)(a1 + 1208) )
    v19 = *(_DWORD *)(a1 + 1208);
  v88 = v19;
  if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
  KeAbPostRelease(a1 + 1176);
  KeLeaveCriticalRegion();
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
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
  *((_QWORD *)v10 + 1) = v92;
  v21 = *((_QWORD *)&v92 + 1);
  *((_QWORD *)v10 + 5) = *((_QWORD *)&v92 + 1);
  *((_QWORD *)v10 + 4) = v93;
  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (*(_DWORD *)(a5 + 8) << 9)) & 0x20000;
  v95[0] = 0LL;
  v95[1] = 0LL;
  v87 = 0;
  v80 = (__m128i *)v95;
  v82 = 1;
  if ( (int)EtwpFindDebugId(*(char **)(a5 + 16), v21, (__int64 *)v10 + 6, (_DWORD *)v10 + 14) >= 0 )
  {
    v22 = *((_QWORD *)v10 + 6);
    if ( *((_DWORD *)v10 + 14) <= 0x400u )
    {
      v87 = *(_DWORD *)(v22 + 20);
      v80 = (__m128i *)(v22 + 4);
      goto LABEL_34;
    }
    ExFreePoolWithTag(*((PVOID *)v10 + 6), 0);
    *((_QWORD *)v10 + 6) = 0LL;
    *((_DWORD *)v10 + 14) = 0;
  }
  v82 = 0;
  v23 = v77;
  if ( !v77 )
  {
    v24 = 0;
    goto LABEL_42;
  }
LABEL_34:
  Name = EtwpCovSampModuleGetName(v10, a5, a4);
  if ( Name < 0 )
    goto LABEL_21;
  v94[0] = *((_QWORD *)v10 + 14);
  v94[1] = (unsigned __int16)*((_DWORD *)v10 + 30);
  if ( *(_DWORD *)(a1 + 1624) )
    v24 = EtwpCovSampCheckForSegments(v94, a1 + 1304);
  else
    v24 = v82;
  if ( v24 && *(_DWORD *)(a1 + 1628) )
    v24 = EtwpCovSampCheckForSegments(v94, a1 + 1464) == 0;
  v23 = v77;
LABEL_42:
  if ( v24 || v23 )
  {
    *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (v24 << 16)) & 0x10000;
    v25 = *((_DWORD *)v10 + 10);
    LODWORD(v102) = *((_DWORD *)v10 + 9);
    HIDWORD(v102) = *((_DWORD *)v10 + 8);
    v26 = EtwCovSampHash(v102, *(unsigned int *)(a1 + 12));
    v99 = *v80;
    v27 = v99;
    v28 = EtwCovSampHash(__PAIR64__(v87, v25), v26);
    v29 = EtwCovSampHash(v27.m128i_u64[0], v28);
    v103 = EtwCovSampHash(_mm_srli_si128(v27, 8).m128i_u64[0], v29);
    v30 = v103 ^ HIDWORD(v103);
    if ( (unsigned int)v103 == HIDWORD(v103) )
      v30 = 1;
    if ( !v77 )
      v30 ^= *(_DWORD *)(a3 + 40);
    *((_DWORD *)v10 + 31) = v30;
    v16 = (volatile signed __int64 *)(a1 + 1176);
  }
  v31 = 2 * v90;
  if ( v88 + 1 > 2 * v90 )
  {
    v8 = v31;
    if ( !v31 )
      v8 = 128LL;
    v83 = ExAllocatePool2(0x100uLL);
  }
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  v33 = KeAbPreAcquire((__int64)v16, 0LL);
  v104 = v33;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16, v33, (__int64)v16);
    v33 = v104;
  }
  if ( v33 )
    *((_BYTE *)v33 + 10) = 1;
  *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
  v34 = (char *)v83;
  if ( v83 && (unsigned int)v8 > *(_DWORD *)(a1 + 1196) >> 5 )
  {
    v35 = (char *)(v83 + 8LL * (unsigned int)v8);
    v36 = (unsigned int)v8;
    v105 = v8 & (v8 - 1);
    if ( v105 )
    {
      v37 = v8;
      for ( i = -1; v37; v37 >>= 1 )
        ++i;
      v36 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v36 > 0x4000000 )
      v36 = 0x4000000LL;
    v39 = (unsigned int)v36;
    if ( v35 > &v35[8 * v36] )
      v39 = 0LL;
    if ( v39 )
    {
      memset64(v35, (a1 + 1208) | 1, v39);
      v34 = (char *)v83;
    }
    v40 = *(_DWORD *)(a1 + 1212);
    v89 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
    v41 = 0;
    if ( (v40 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v42 = *(_QWORD *)(a1 + 1216);
        for ( j = v42; ; v42 = j )
        {
          v43 = *(_QWORD **)(v42 + 8LL * v41);
          v91 = v43;
          if ( ((unsigned __int8)v43 & 1) != 0 )
            break;
          *(_QWORD *)(j + 8LL * v41) = *v43;
          v85 = v89 & v43[1];
          v44 = (37
               * (BYTE6(v85)
                + 37
                * (BYTE5(v85)
                 + 37
                 * (BYTE4(v85)
                  + 37 * (BYTE3(v85) + 37 * (BYTE2(v85) + 37 * (BYTE1(v85) + 37 * ((unsigned __int8)v85 + 11623883)))))))
               + HIBYTE(v85)) & (unsigned int)(v36 - 1);
          *v91 = *(_QWORD *)&v35[8 * v44];
          *(_QWORD *)&v35[8 * v44] = v91;
          v34 = (char *)v83;
        }
        ++v41;
        v40 = *(_DWORD *)(a1 + 1212);
      }
      while ( v41 < v40 >> 5 );
    }
    *(_QWORD *)(a1 + 1216) = v35;
    *(_DWORD *)(a1 + 1212) = (32 * v36) | v40 & 0x1F;
    if ( v105 )
    {
      for ( k = -1; (_DWORD)v8; LODWORD(v8) = (unsigned int)v8 >> 1 )
        ++k;
      v8 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v8 > 0x4000000 )
      v8 = 0x4000000LL;
    v46 = (unsigned int)v8;
    if ( v34 > &v34[8 * v8] )
      v46 = 0LL;
    if ( v46 )
    {
      memset64(v34, (a1 + 1192) | 1, v46);
      v34 = (char *)v83;
    }
    v47 = *(_DWORD *)(a1 + 1196);
    v48 = -1LL << (*(_BYTE *)(a1 + 1196) & 0x1F);
    v49 = 0;
    if ( (v47 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v50 = *(_QWORD *)(a1 + 1200);
        for ( m = v50; ; v50 = m )
        {
          v51 = *(_QWORD **)(v50 + 8LL * v49);
          if ( ((unsigned __int8)v51 & 1) != 0 )
            break;
          *(_QWORD *)(v50 + 8LL * v49) = *v51;
          v86 = v48 & v51[1];
          v52 = (37
               * (BYTE6(v86)
                + 37
                * (BYTE5(v86)
                 + 37
                 * (BYTE4(v86)
                  + 37 * (BYTE3(v86) + 37 * (BYTE2(v86) + 37 * (BYTE1(v86) + 37 * ((unsigned __int8)v86 + 11623883)))))))
               + HIBYTE(v86)) & (unsigned int)(v8 - 1);
          *v51 = *(_QWORD *)&v34[8 * v52];
          *(_QWORD *)&v34[8 * v52] = v51;
        }
        ++v49;
        v47 = *(_DWORD *)(a1 + 1196);
      }
      while ( v49 < v47 >> 5 );
    }
    v53 = *(_QWORD *)(a1 + 1200);
    *(_QWORD *)(a1 + 1200) = v34;
    *(_DWORD *)(a1 + 1196) = v47 & 0x1F | (32 * v8);
    v83 = v53;
  }
  if ( *(_DWORD *)(a1 + 1196) >= 0x20u )
  {
    v54 = EtwpCovSampContextFastFindModule(a1, &v92, a6);
    if ( v54 )
    {
      if ( v54 == *a6 )
      {
        ProcessForExeModule(a1, a3, *a6, v77);
LABEL_96:
        Name = 0;
        goto LABEL_92;
      }
      *(_DWORD *)(v54 + 120) |= 0x40000u;
      v55 = *(_DWORD *)(a1 + 1196);
      v96 = *(_QWORD *)(v54 + 8) & (-1LL << (v55 & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(a1 + 1200)
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
                           + HIBYTE(v96)) & ((v55 >> 5) - 1))); (*n & 1) == 0; n = (_QWORD *)*n )
      {
        if ( *n == v54 )
        {
          *n = *(_QWORD *)v54;
          --*(_DWORD *)(a1 + 1192);
          break;
        }
      }
      *(_QWORD *)v54 = 0LL;
      v57 = (_QWORD *)(v54 + 16);
      if ( *(_QWORD *)(v54 + 16) )
      {
        v58 = *(_DWORD *)(a1 + 1212);
        v97 = *(_QWORD *)(v54 + 24) & (-1LL << (v58 & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                            + 8LL
                            * ((37
                              * (BYTE6(v97)
                               + 37
                               * (BYTE5(v97)
                                + 37
                                * (BYTE4(v97)
                                 + 37
                                 * (BYTE3(v97)
                                  + 37 * (BYTE2(v97) + 37 * (BYTE1(v97) + 37 * ((unsigned __int8)v97 + 11623883)))))))
                              + HIBYTE(v97)) & ((v58 >> 5) - 1))); (*ii & 1) == 0; ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v57 )
          {
            *ii = *v57;
            --*(_DWORD *)(a1 + 1208);
            break;
          }
        }
        *(_QWORD *)(v54 + 16) = 0LL;
      }
    }
    v60 = v77;
    *((_DWORD *)v10 + 30) = (v77 << 20) | *((_DWORD *)v10 + 30) & 0xFFEFFFFF;
    *((_DWORD *)v10 + 32) = (*(_DWORD *)(a1 + 1632))++;
    v84 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F));
    v61 = (37
         * (BYTE6(v84)
          + 37
          * (BYTE5(v84)
           + 37
           * (BYTE4(v84)
            + 37 * (BYTE3(v84) + 37 * (BYTE2(v84) + 37 * (BYTE1(v84) + 37 * ((unsigned __int8)v84 + 11623883)))))))
         + HIBYTE(v84)) & (unsigned int)((*(_DWORD *)(a1 + 1196) >> 5) - 1);
    v62 = *(_QWORD *)(a1 + 1200);
    *(_QWORD *)v10 = *(_QWORD *)(v62 + 8 * v61);
    *(_QWORD *)(v62 + 8 * v61) = v10;
    ++*(_DWORD *)(a1 + 1192);
    v63 = v10 + 72;
    v64 = (_QWORD *)(a1 + 1224);
    v65 = *(_QWORD *)(a1 + 1224);
    if ( *(_QWORD *)(v65 + 8) != a1 + 1224 )
      __fastfail(3u);
    *v63 = v65;
    *((_QWORD *)v10 + 10) = v64;
    *(_QWORD *)(v65 + 8) = v63;
    *v64 = v63;
    *((_DWORD *)v10 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 1240);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1244), 1u);
    v66 = *((_DWORD *)v10 + 30);
    if ( (v66 & 0x10000) != 0 || v77 )
    {
      v67 = *((unsigned int *)v10 + 31);
      *((_QWORD *)v10 + 3) = v67;
      v68 = -1LL << (*(_BYTE *)(a1 + 1212) & 0x1F);
      v69 = v67 & v68;
      v70 = *(_DWORD *)(a1 + 1212) >> 5;
      if ( v70 )
      {
        v98 = v67 & (-1LL << (*(_BYTE *)(a1 + 1212) & 0x1F));
        v107 = v67 & v68;
        v71 = *(_QWORD *)(a1 + 1216)
            + 8LL
            * ((37
              * (BYTE6(v107)
               + 37
               * (BYTE5(v107)
                + 37
                * (BYTE4(v107)
                 + 37 * (BYTE3(v107) + 37 * (BYTE2(v107) + 37 * (BYTE1(v107) + 37 * ((unsigned __int8)v69 + 11623883)))))))
              + HIBYTE(v107)) & (unsigned int)(v70 - 1));
        while ( 1 )
        {
          v71 = *(_QWORD *)v71;
          if ( (v71 & 1) != 0 )
            break;
          if ( v69 == (v68 & *(_QWORD *)(v71 + 8)) )
            goto LABEL_119;
        }
      }
      v71 = 0LL;
LABEL_119:
      if ( v71 )
      {
        if ( *(_DWORD *)(v71 + 16) != *((_DWORD *)v10 + 8)
          || *(_DWORD *)(v71 + 20) != *((_DWORD *)v10 + 9)
          || *(_QWORD *)(v71 + 24) != *((_QWORD *)v10 + 5)
          || !(unsigned int)EtwpCheckDebugInfoEqual(*(_QWORD *)(v71 + 32), *((_QWORD *)v10 + 6)) )
        {
          *((_DWORD *)v10 + 30) = v66 & 0xFFFEFFFF;
          *((_DWORD *)v10 + 31) = 0;
        }
        *((_DWORD *)v10 + 30) |= 0x80000u;
        EtwpCovSampModuleNameInfoCleanup(v10 + 104);
        *((_QWORD *)v10 + 14) = 0LL;
        *((_WORD *)v10 + 60) = 0;
        v74 = (void *)*((_QWORD *)v10 + 6);
        if ( v74 )
          ExFreePoolWithTag(v74, 0);
        *((_QWORD *)v10 + 6) = 0LL;
        *((_DWORD *)v10 + 14) = 0;
        v60 = v77;
      }
      else
      {
        v78 = v68 & *((_QWORD *)v10 + 3);
        v72 = (37
             * (BYTE6(v78)
              + 37
              * (BYTE5(v78)
               + 37
               * (BYTE4(v78)
                + 37 * (BYTE3(v78) + 37 * (BYTE2(v78) + 37 * (BYTE1(v78) + 37 * ((unsigned __int8)v78 + 11623883)))))))
             + HIBYTE(v78)) & (unsigned int)(v70 - 1);
        v73 = *(_QWORD *)(a1 + 1216);
        *((_QWORD *)v10 + 2) = *(_QWORD *)(v73 + 8 * v72);
        *(_QWORD *)(v73 + 8 * v72) = v10 + 16;
        ++*(_DWORD *)(a1 + 1208);
      }
      if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
      {
        ProcessForExeModule(a1, a3, (__int64)v10, v60);
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
  v9 = (void *)v83;
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
