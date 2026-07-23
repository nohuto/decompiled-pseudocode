/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x1408232B0
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140824848 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140458B30 (EtwpCovSampCaptureQueueBuffer.c)
 *     RtlStringCchCopyNW @ 0x140468EBC (RtlStringCchCopyNW.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1404BCA64 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140ACF23C (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x140ACF5C8 (EtwpCovSampContextPruneModules.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  ULONG_PTR v6; // r12
  PVOID v7; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rsi
  struct _KTHREAD *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 *v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // esi
  struct _KTHREAD *v22; // rax
  __int64 *v23; // rdi
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // r11d
  unsigned int v27; // ecx
  unsigned int v28; // eax
  int v29; // r11d
  _QWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  void *Pool2; // rax
  __int64 v41; // rsi
  struct _KTHREAD *v42; // rcx
  __int64 *v43; // rax
  __int64 *v44; // rdi
  ULONG_PTR v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _KTHREAD *v49; // rcx
  __int64 *v50; // rax
  __int64 *v51; // rsi
  ULONG_PTR v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r10
  _OWORD *v57; // rdx
  _OWORD *v58; // rcx
  char *v59; // rdx
  _OWORD *v60; // rax
  __int64 v61; // r8
  char *v62; // rdx
  char *v63; // rsi
  __int64 *i; // r9
  unsigned int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rcx
  char *v68; // r13
  char *v69; // rsi
  __int64 v70; // r8
  void *v71; // r9
  unsigned int v72; // ecx
  unsigned int v73; // esi
  __int128 *v74; // rdi
  int v75; // edx
  NTSTRSAFE_PWSTR v76; // r13
  struct _KTHREAD *v77; // rcx
  __int64 *v78; // rax
  __int64 *v79; // r13
  unsigned int v80; // edx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  _OWORD *v84; // rdi
  __int128 *v85; // rsi
  __int128 *v86; // rdi
  __int128 **v87; // rax
  void *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 *v101; // rbx
  __int64 v102; // rax
  void *v103; // rcx
  unsigned __int64 v104; // rtt
  unsigned int v106; // [rsp+30h] [rbp-1A8h]
  unsigned int v107; // [rsp+34h] [rbp-1A4h]
  __int128 *v108; // [rsp+38h] [rbp-1A0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+40h] [rbp-198h]
  char *v110; // [rsp+48h] [rbp-190h]
  unsigned int v111; // [rsp+50h] [rbp-188h]
  unsigned int v112; // [rsp+54h] [rbp-184h]
  PVOID P; // [rsp+58h] [rbp-180h]
  int v114; // [rsp+60h] [rbp-178h]
  unsigned int v115; // [rsp+64h] [rbp-174h]
  __int128 v116; // [rsp+68h] [rbp-170h] BYREF
  __int64 v117; // [rsp+78h] [rbp-160h]
  ULONG_PTR v118; // [rsp+80h] [rbp-158h]
  unsigned int v119; // [rsp+88h] [rbp-150h]
  int v120; // [rsp+8Ch] [rbp-14Ch]
  NTSTRSAFE_PWSTR pszDest; // [rsp+90h] [rbp-148h]
  unsigned __int64 v122; // [rsp+98h] [rbp-140h]
  __int64 v123; // [rsp+A0h] [rbp-138h]
  ULONG_PTR v124; // [rsp+A8h] [rbp-130h]
  unsigned __int64 v125; // [rsp+B0h] [rbp-128h]
  char *v126; // [rsp+B8h] [rbp-120h]
  _OWORD *v127; // [rsp+C0h] [rbp-118h]
  _DWORD *v128; // [rsp+C8h] [rbp-110h]
  __int64 v129; // [rsp+D0h] [rbp-108h]
  ULONG_PTR v130; // [rsp+D8h] [rbp-100h]
  ULONG_PTR v131; // [rsp+E0h] [rbp-F8h]
  int v132; // [rsp+E8h] [rbp-F0h]
  char *v133; // [rsp+F0h] [rbp-E8h]
  wchar_t *v134; // [rsp+F8h] [rbp-E0h]
  __int64 *v135; // [rsp+100h] [rbp-D8h]
  __int64 v136; // [rsp+108h] [rbp-D0h]
  _SLIST_ENTRY v137; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v138; // [rsp+120h] [rbp-B8h]
  __int64 v139; // [rsp+128h] [rbp-B0h]
  __int128 v140; // [rsp+130h] [rbp-A8h]
  _BYTE Event[32]; // [rsp+140h] [rbp-98h] BYREF
  _OWORD *v142; // [rsp+160h] [rbp-78h]
  char *v143; // [rsp+168h] [rbp-70h]
  __int128 v144; // [rsp+170h] [rbp-68h] BYREF
  __int128 v145; // [rsp+180h] [rbp-58h]

  v128 = (_DWORD *)a4;
  v119 = a3;
  v129 = a2;
  v131 = BugCheckParameter2;
  v118 = 0LL;
  v5 = qword_140EFE908;
  v117 = qword_140EFE908;
  v144 = 0LL;
  v145 = 0LL;
  v6 = BugCheckParameter2 + 16;
  v130 = BugCheckParameter2 + 16;
  v110 = 0LL;
  v123 = 0LL;
  v116 = 0LL;
  v106 = 0;
  v7 = 0LL;
  P = 0LL;
  v127 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&stru_140EFE900);
  v9 = stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140EFE900,
               (stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&stru_140EFE900) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, a3, a4);
    v12 = -1073741431;
    v13 = 0LL;
    goto LABEL_121;
  }
  v11 = qword_140EFE8F8;
  v118 = qword_140EFE8F8;
  v124 = qword_140EFE8F8;
  if ( qword_140EFE8F8 != BugCheckParameter2 )
  {
    v12 = -1073741431;
    v13 = 0LL;
    goto LABEL_121;
  }
  EtwpCovSampCaptureFlushSampleBuffers(v5);
  *((_QWORD *)&v137.Next + 1) = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  memset(Event, 0, sizeof(Event));
  v138 = 4054171642LL;
  v137.Next = (_SLIST_ENTRY *)6941;
  KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(v5, &v137);
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  v15 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v15, BugCheckParameter2);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v17 = *(__int64 **)(BugCheckParameter2 + 1680);
  v108 = (__int128 *)v17;
  if ( v17 != (__int64 *)(BugCheckParameter2 + 1680) )
  {
    do
    {
      LODWORD(v7) = *((_DWORD *)v17 + 4) + (_DWORD)v7;
      v17 = (__int64 *)*v17;
    }
    while ( v17 != (__int64 *)(BugCheckParameter2 + 1680) );
    v108 = (__int128 *)v17;
  }
  v18 = 8LL * (unsigned int)v7;
  a3 = 0xFFFFFFFFLL;
  v19 = -1;
  if ( v18 <= 0xFFFFFFFF )
    v19 = 8 * (_DWORD)v7;
  v11 = 3221225621LL;
  if ( v18 > 0xFFFFFFFF )
  {
    v12 = -1073741675;
LABEL_119:
    v13 = v106;
    goto LABEL_120;
  }
  v20 = v19 + 1232;
  v21 = -1;
  if ( v19 + 1232 >= v19 )
    v21 = v19 + 1232;
  v12 = v20 < v19 ? 0xC0000095 : 0;
  if ( v20 < v19 )
    goto LABEL_119;
  v106 = 0;
  v114 = 0;
  v107 = 0;
  v112 = 0;
  v111 = 0;
  *((_QWORD *)&v116 + 1) = &v116;
  *(_QWORD *)&v116 = &v116;
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v23 = KeAbPreAcquire(v6 + 1176, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1176), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 1176), 0, v23, v6 + 1176);
  if ( v23 )
    *((_BYTE *)v23 + 10) = 1;
  a3 = *(_QWORD *)(v6 + 1224);
  v108 = (__int128 *)a3;
  if ( a3 != v6 + 1224 )
  {
    a4 = *((_QWORD *)&v116 + 1);
    do
    {
      v11 = a3;
      a3 = *(_QWORD *)a3;
      v108 = (__int128 *)a3;
      if ( *(_DWORD *)(v11 + 60) || (*(_DWORD *)(v11 + 48) & 0x100000) != 0 )
      {
        if ( *(_QWORD *)(v11 + 32) )
        {
          v114 = ++v106;
          ++v107;
          v24 = 2 * (unsigned __int16)*(_DWORD *)(v11 + 48) + 2;
          v25 = v24 + v112;
          v26 = -1;
          if ( v24 + v112 >= v24 )
            v26 = v24 + v112;
          v112 = v26;
          v12 = v25 < v24 ? 0xC0000095 : 0;
          if ( v25 < v24 )
            goto LABEL_119;
          v27 = *(_DWORD *)(v11 - 16) - (((unsigned __int8)*(_DWORD *)(v11 - 16) - 1) & 3) + 3;
          v28 = v27 + v111;
          v29 = -1;
          if ( v27 + v111 >= v27 )
            v29 = v27 + v111;
          v111 = v29;
          v12 = v28 < v27 ? 0xC0000095 : 0;
          if ( v28 < v27 )
            goto LABEL_119;
          v30 = (_QWORD *)(v11 + 72);
          if ( *(__int128 **)a4 != &v116 )
LABEL_118:
            __fastfail(3u);
          *v30 = &v116;
          v30[1] = a4;
          *(_QWORD *)a4 = v30;
          a4 = (__int64)v30;
          *((_QWORD *)&v116 + 1) = v30;
        }
        else
        {
          if ( *(_QWORD *)(v11 - 8) == 1LL )
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 1636));
          _InterlockedExchange((volatile __int32 *)(v11 + 60), 0);
          a3 = (__int64)v108;
          a4 = *((_QWORD *)&v116 + 1);
        }
      }
    }
    while ( a3 != v6 + 1224 );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1176), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 1176));
  KeAbPostRelease(v6 + 1176);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v31, v32, v33);
  v34 = 48LL * v107;
  a4 = 0xFFFFFFFFLL;
  v35 = -1;
  if ( v34 <= 0xFFFFFFFF )
    v35 = 48 * v107;
  a3 = 3221225621LL;
  if ( v34 > 0xFFFFFFFF )
  {
    v12 = -1073741675;
    goto LABEL_119;
  }
  v36 = v21 + v35;
  v11 = 0xFFFFFFFFLL;
  if ( v36 >= v21 )
    v11 = v36;
  v12 = v36 < v21 ? 0xC0000095 : 0;
  if ( v36 < v21 )
    goto LABEL_119;
  v37 = v11 + v112;
  v38 = -1;
  if ( (unsigned int)v11 + v112 >= (unsigned int)v11 )
    v38 = v11 + v112;
  v12 = v37 < (unsigned int)v11 ? 0xC0000095 : 0;
  if ( v37 < (unsigned int)v11 )
    goto LABEL_119;
  v39 = v38 + v111;
  v11 = 0xFFFFFFFFLL;
  if ( v38 + v111 >= v38 )
    v11 = v39;
  v132 = v11;
  v12 = v39 < v38 ? 0xC0000095 : 0;
  if ( v39 < v38 )
    goto LABEL_119;
  v13 = v106;
  if ( v119 < (unsigned int)v11 )
  {
    *v128 = v11;
    v12 = -1073741789;
LABEL_120:
    v7 = 0LL;
    goto LABEL_121;
  }
  if ( v106 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    P = Pool2;
    if ( !Pool2 )
    {
      v12 = -1073741670;
      v7 = 0LL;
      goto LABEL_121;
    }
    memset_0(Pool2, 0, 8 * v106);
  }
  if ( (*(_DWORD *)(v129 + 16) & 1) != 0 )
  {
    v41 = v117;
    if ( *(_QWORD *)(v117 + 1320) )
    {
      BugCheckParameter2a = *(_QWORD *)(v117 + 1320);
      v42 = KeGetCurrentThread();
      --v42->KernelApcDisable;
      v43 = KeAbPreAcquire(BugCheckParameter2a, 0LL);
      v44 = v43;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2a, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2a, v43, BugCheckParameter2a);
      if ( v44 )
        *((_BYTE *)v44 + 10) = 1;
      v45 = BugCheckParameter2a;
      *(_QWORD *)(BugCheckParameter2a + 8) = KeGetCurrentThread();
      memset_0((void *)(v45 + 24), 0, 4LL * *(unsigned int *)(v45 + 20));
      *(_QWORD *)(v45 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2a);
      KeAbPostRelease(BugCheckParameter2a);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v46, v47, v48);
    }
    if ( *(_QWORD *)(v41 + 1328) )
    {
      BugCheckParameter2a = *(_QWORD *)(v41 + 1328);
      v49 = KeGetCurrentThread();
      --v49->KernelApcDisable;
      v50 = KeAbPreAcquire(BugCheckParameter2a, 0LL);
      v51 = v50;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2a, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2a, v50, BugCheckParameter2a);
      if ( v51 )
        *((_BYTE *)v51 + 10) = 1;
      v52 = BugCheckParameter2a;
      *(_QWORD *)(BugCheckParameter2a + 8) = KeGetCurrentThread();
      memset_0((void *)(v52 + 24), 0, 4LL * *(unsigned int *)(v52 + 20));
      *(_QWORD *)(v52 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2a);
      KeAbPostRelease(BugCheckParameter2a);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v53, v54, v55);
    }
  }
  v56 = v129 + 20;
  v123 = v129 + 20;
  v57 = (_OWORD *)(v129 + 64);
  v110 = (char *)(v129 + 64);
  *(_OWORD *)(v129 + 20) = 0LL;
  *(_OWORD *)(v56 + 16) = 0LL;
  *(_QWORD *)(v56 + 32) = 0LL;
  *(_DWORD *)(v56 + 40) = 0;
  *(_DWORD *)v56 = 44;
  *(_DWORD *)(v56 + 8) = *(_DWORD *)(BugCheckParameter2 + 1724);
  *(_DWORD *)(v56 + 16) = 1108;
  *(_DWORD *)(v56 + 12) = (_DWORD)v57 - v56;
  v58 = v57;
  v142 = v57;
  v59 = (char *)v57 + 1108;
  v110 = v59;
  v60 = (_OWORD *)(v6 + 8);
  v61 = 8LL;
  do
  {
    *v58 = *v60;
    v58[1] = v60[1];
    v58[2] = v60[2];
    v58[3] = v60[3];
    v58[4] = v60[4];
    v58[5] = v60[5];
    v58[6] = v60[6];
    v58 += 8;
    *(v58 - 1) = v60[7];
    v60 += 8;
    --v61;
  }
  while ( v61 );
  *v58 = *v60;
  v58[1] = v60[1];
  v58[2] = v60[2];
  v58[3] = v60[3];
  v58[4] = v60[4];
  *((_DWORD *)v58 + 20) = *((_DWORD *)v60 + 20);
  *(_DWORD *)(v56 + 24) = 60;
  *(_DWORD *)(v56 + 20) = (_DWORD)v59 - v56;
  v127 = v59;
  v62 = v59 + 60;
  *(_DWORD *)(v56 + 32) = (_DWORD)v7;
  *(_DWORD *)(v56 + 28) = (_DWORD)v62 - v56;
  v133 = v62;
  v63 = &v62[8 * (unsigned int)v7];
  v110 = v63;
  v143 = v63;
  for ( i = *(__int64 **)(BugCheckParameter2 + 1680); ; i = (__int64 *)*i )
  {
    v108 = (__int128 *)i;
    if ( i == (__int64 *)(BugCheckParameter2 + 1680) )
      break;
    v135 = i;
    v65 = 0;
    v120 = 0;
    while ( v65 < *((_DWORD *)i + 5) )
    {
      v66 = i[3] + 8LL * v65;
      v136 = v66;
      if ( *(_QWORD *)v66 )
      {
        if ( v62 >= v63 )
          break;
        *(_DWORD *)v62 = *(_QWORD *)v66;
        *((_DWORD *)v62 + 1) = *(_DWORD *)(v66 + 4);
        v62 += 8;
        v133 = v62;
        v120 = ++v65;
      }
      else
      {
        v120 = ++v65;
      }
    }
  }
  v67 = v107;
  *(_DWORD *)(v56 + 40) = v107;
  *(_DWORD *)(v56 + 36) = (_DWORD)v63 - v56;
  v68 = v63;
  v126 = v63;
  v69 = &v63[48 * v67];
  memset_0(v68, 0, v69 - v68);
  v71 = v69;
  v122 = (unsigned __int64)v69;
  v134 = (wchar_t *)&v69[v111];
  v72 = v111 + (_DWORD)v69;
  pszDest = v134;
  v73 = v112 + (_DWORD)v134;
  v110 = (char *)v134 + v112;
  v125 = (unsigned __int64)v110;
  v115 = 0;
  v74 = (__int128 *)v116;
  v108 = (__int128 *)v116;
  while ( v74 != &v116 )
  {
    v108 = *(__int128 **)v74;
    v75 = v123;
    *((_DWORD *)v68 + 2) = (_DWORD)v71 - v123;
    *((_DWORD *)v68 + 3) = *((_DWORD *)v74 - 22);
    *(_DWORD *)v68 = v72 - v75;
    *((_DWORD *)v68 + 1) = (unsigned __int16)*((_DWORD *)v74 - 6);
    *((_DWORD *)v68 + 4) = *((_DWORD *)v74 - 27);
    *((_DWORD *)v68 + 5) = *((_DWORD *)v74 - 28);
    *((_DWORD *)v68 + 6) = *((_DWORD *)v74 - 26);
    *((_DWORD *)v68 + 7) = *((_DWORD *)v74 - 5);
    *((_DWORD *)v68 + 8) = *((_DWORD *)v74 - 4);
    *((_DWORD *)v68 + 9) = *((_DWORD *)v74 + 4);
    *((_DWORD *)v68 + 10) = *((_DWORD *)v74 + 5);
    *((_DWORD *)v68 + 11) = *((_DWORD *)v74 + 6);
    v126 = v68 + 48;
    memmove(v71, *((const void **)v74 - 12), *((unsigned int *)v74 - 22));
    v122 = (*((unsigned int *)v74 - 22) + v122 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v122 > (unsigned __int64)v134 )
      break;
    v76 = pszDest;
    RtlStringCchCopyNW(
      pszDest,
      (__int64)(v125 - (_QWORD)pszDest) >> 1,
      *((STRSAFE_PCNZWCH *)v74 - 4),
      (unsigned __int16)*((_DWORD *)v74 - 6));
    pszDest = &v76[(unsigned __int16)*((_DWORD *)v74 - 6) + 1];
    if ( (unsigned __int64)pszDest > v125 )
      break;
    v77 = KeGetCurrentThread();
    --v77->KernelApcDisable;
    v78 = KeAbPreAcquire(v6 + 1176, 0LL);
    v79 = v78;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 1176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 1176), v78, v6 + 1176);
    if ( v79 )
      *((_BYTE *)v79 + 10) = 1;
    *(_QWORD *)(v6 + 1184) = KeGetCurrentThread();
    v80 = v115;
    *((_QWORD *)P + v115) = *((_QWORD *)v74 - 5);
    v115 = v80 + 1;
    *((_QWORD *)v74 - 5) = 0LL;
    *((_QWORD *)v74 - 4) = 0LL;
    *((_DWORD *)v74 - 6) &= 0xFFFF0000;
    *((_DWORD *)v74 - 6) |= 0x80000u;
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v81, v82, v83);
    --v107;
    if ( *((_QWORD *)v74 - 10) == 1LL )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 1636));
    _InterlockedExchange((volatile __int32 *)v74 - 3, 0);
    v73 = (unsigned int)v110;
    v74 = v108;
    v68 = v126;
    v72 = (unsigned int)pszDest;
    v71 = (void *)v122;
  }
  v84 = v127;
  *v127 = *(_OWORD *)(v6 + 1116);
  v84[1] = *(_OWORD *)(v6 + 1132);
  v84[2] = *(_OWORD *)(v6 + 1148);
  *((_QWORD *)v84 + 6) = *(_QWORD *)(v6 + 1164);
  *((_DWORD *)v84 + 14) = *(_DWORD *)(v6 + 1172);
  *(_OWORD *)(v6 + 1116) = 0LL;
  *(_OWORD *)(v6 + 1132) = 0LL;
  *(_OWORD *)(v6 + 1148) = 0LL;
  *(_QWORD *)(v6 + 1164) = 0LL;
  *(_DWORD *)(v6 + 1172) = 0;
  v144 = 0LL;
  v145 = 0LL;
  EtwpCovSampCaptureFlushStats(v117, &v144, v70, v71);
  *(_OWORD *)((char *)v84 + 28) = v144;
  *(_OWORD *)((char *)v84 + 44) = v145;
  *(_DWORD *)(v123 + 4) = v73 - v123;
  v85 = *(__int128 **)(BugCheckParameter2 + 1680);
  v108 = v85;
  while ( v85 != (__int128 *)(BugCheckParameter2 + 1680) )
  {
    v86 = v85;
    v135 = (__int64 *)v85;
    v85 = *(__int128 **)v85;
    v108 = v85;
    if ( v86 == *(__int128 **)(BugCheckParameter2 + 1664) )
    {
      memset_0(*((void **)v86 + 3), 0, 8LL * *((unsigned int *)v86 + 5));
      *((_DWORD *)v86 + 4) = 0;
    }
    else
    {
      v87 = (__int128 **)*((_QWORD *)v86 + 1);
      if ( *((__int128 **)v85 + 1) != v86 || *v87 != v86 )
        goto LABEL_118;
      *v87 = v85;
      *((_QWORD *)v85 + 1) = v87;
      --*(_DWORD *)(BugCheckParameter2 + 1696);
      v88 = (void *)*((_QWORD *)v86 + 3);
      if ( v88 )
      {
        ExFreePoolWithTag(v88, 0x56777445u);
        *((_QWORD *)v86 + 3) = 0LL;
      }
      ExFreePoolWithTag(v86, 0x56777445u);
    }
  }
  ++*(_DWORD *)(BugCheckParameter2 + 1724);
  v89 = v117;
  if ( *(_DWORD *)(v117 + 1284) )
  {
    *(_DWORD *)(v117 + 1284) = 0;
    v90 = v89 + 944;
    v91 = *(__int64 **)(v89 + 944);
    if ( v91 != (__int64 *)(v89 + 944) )
    {
      do
      {
        *((_DWORD *)v91 + 7) = *(_DWORD *)(v89 + 1284);
        v91 = (__int64 *)*v91;
        v89 = v117;
      }
      while ( v91 != (__int64 *)v90 );
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v92, v93, v94);
  EtwpCovSampContextPruneModules(v6);
  *v128 = v132;
  v12 = 0;
  v13 = v106;
  v7 = P;
LABEL_121:
  if ( *(struct _KTHREAD **)(v6 + 1184) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v95, v96, v97);
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v98, v99, v100);
  }
  if ( v7 )
  {
    if ( (_DWORD)v13 )
    {
      v101 = (__int64 *)v7;
      do
      {
        v102 = *v101;
        if ( *v101 )
        {
          v103 = (void *)(v102 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (v102 & 1) != 0 )
          {
            guard_dispatch_icall_no_overrides(v103);
          }
          else if ( v103 )
          {
            ExFreePool(v103);
          }
          *v101 = 0LL;
        }
        ++v101;
        --v13;
      }
      while ( v13 );
    }
    ExFreePoolWithTag(v7, 0x56777445u);
  }
  if ( v118 )
  {
    _m_prefetchw(&stru_140EFE900);
    v104 = stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v104 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&stru_140EFE900,
                   (stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   stru_140EFE900.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_140EFE900);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, a3, a4);
  }
  return v12;
}
