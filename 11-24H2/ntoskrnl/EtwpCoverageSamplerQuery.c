/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x1409454F0
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140946A88 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14044E3F8 (EtwpCovSampCaptureQueueBuffer.c)
 *     RtlStringCchCopyNW @ 0x14045EEEC (RtlStringCchCopyNW.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1404B6AD4 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140ADB670 (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x140ADB9FC (EtwpCovSampContextPruneModules.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v5; // rbx
  ULONG_PTR v6; // r12
  PVOID v7; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rtt
  ULONG_PTR v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rsi
  struct _KTHREAD *v13; // rax
  char *v14; // rax
  char *v15; // rbx
  __int64 *v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // esi
  struct _KTHREAD *v21; // rax
  char *v22; // rdi
  __int64 *v23; // r8
  _OWORD **v24; // r9
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // r11d
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // r11d
  _QWORD *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  void *Pool2; // rax
  __int64 v38; // rsi
  struct _KTHREAD *v39; // rcx
  char *v40; // rax
  char *v41; // rdi
  ULONG_PTR v42; // rdi
  struct _KTHREAD *v43; // rcx
  char *v44; // rax
  char *v45; // rsi
  ULONG_PTR v46; // rdi
  __int64 v47; // r10
  _OWORD *v48; // rdx
  _OWORD *v49; // rcx
  char *v50; // rdx
  _OWORD *v51; // rax
  __int64 v52; // r8
  char *v53; // rdx
  char *v54; // rsi
  __int64 *i; // r9
  unsigned int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rcx
  char *v59; // r13
  char *v60; // rsi
  __int64 v61; // r8
  void *v62; // r9
  unsigned int v63; // ecx
  unsigned int v64; // esi
  __int128 *v65; // rdi
  int v66; // edx
  NTSTRSAFE_PWSTR v67; // r13
  struct _KTHREAD *v68; // rcx
  char *v69; // rax
  char *v70; // r13
  unsigned int v71; // edx
  _OWORD *v72; // rdi
  __int64 *v73; // rsi
  __int64 *v74; // rdi
  __int64 **v75; // rax
  void *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 *v79; // rcx
  __int64 *v80; // rbx
  __int64 v81; // rax
  void *v82; // rcx
  unsigned __int64 v83; // rtt
  unsigned int v85; // [rsp+30h] [rbp-1A8h]
  unsigned int v86; // [rsp+34h] [rbp-1A4h]
  __int64 *v87; // [rsp+38h] [rbp-1A0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+40h] [rbp-198h]
  char *v89; // [rsp+48h] [rbp-190h]
  unsigned int v90; // [rsp+50h] [rbp-188h]
  unsigned int v91; // [rsp+54h] [rbp-184h]
  PVOID P; // [rsp+58h] [rbp-180h]
  int v93; // [rsp+60h] [rbp-178h]
  unsigned int v94; // [rsp+64h] [rbp-174h]
  __int128 v95; // [rsp+68h] [rbp-170h] BYREF
  __int64 v96; // [rsp+78h] [rbp-160h]
  ULONG_PTR v97; // [rsp+80h] [rbp-158h]
  unsigned int v98; // [rsp+88h] [rbp-150h]
  int v99; // [rsp+8Ch] [rbp-14Ch]
  NTSTRSAFE_PWSTR pszDest; // [rsp+90h] [rbp-148h]
  unsigned __int64 v101; // [rsp+98h] [rbp-140h]
  __int64 v102; // [rsp+A0h] [rbp-138h]
  ULONG_PTR v103; // [rsp+A8h] [rbp-130h]
  unsigned __int64 v104; // [rsp+B0h] [rbp-128h]
  char *v105; // [rsp+B8h] [rbp-120h]
  _OWORD *v106; // [rsp+C0h] [rbp-118h]
  _DWORD *v107; // [rsp+C8h] [rbp-110h]
  __int64 v108; // [rsp+D0h] [rbp-108h]
  ULONG_PTR v109; // [rsp+D8h] [rbp-100h]
  ULONG_PTR v110; // [rsp+E0h] [rbp-F8h]
  int v111; // [rsp+E8h] [rbp-F0h]
  char *v112; // [rsp+F0h] [rbp-E8h]
  wchar_t *v113; // [rsp+F8h] [rbp-E0h]
  __int64 *v114; // [rsp+100h] [rbp-D8h]
  __int64 v115; // [rsp+108h] [rbp-D0h]
  _SLIST_ENTRY v116; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v117; // [rsp+120h] [rbp-B8h]
  __int64 v118; // [rsp+128h] [rbp-B0h]
  __int128 v119; // [rsp+130h] [rbp-A8h]
  _BYTE Event[32]; // [rsp+140h] [rbp-98h] BYREF
  _OWORD *v121; // [rsp+160h] [rbp-78h]
  char *v122; // [rsp+168h] [rbp-70h]
  __int128 v123; // [rsp+170h] [rbp-68h] BYREF
  __int128 v124; // [rsp+180h] [rbp-58h]

  v107 = a4;
  v98 = a3;
  v108 = a2;
  v110 = BugCheckParameter2;
  v97 = 0LL;
  v5 = qword_140EFEFA8;
  v96 = qword_140EFEFA8;
  v123 = 0LL;
  v124 = 0LL;
  v6 = BugCheckParameter2 + 16;
  v109 = BugCheckParameter2 + 16;
  v89 = 0LL;
  v102 = 0LL;
  v95 = 0LL;
  v85 = 0;
  v7 = 0LL;
  P = 0LL;
  v106 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&stru_140EFEFA0);
  v9 = stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140EFEFA0,
               (stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&stru_140EFEFA0) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v11 = -1073741431;
    v12 = 0LL;
    goto LABEL_119;
  }
  v10 = qword_140EFEF98;
  v97 = qword_140EFEF98;
  v103 = qword_140EFEF98;
  if ( qword_140EFEF98 != BugCheckParameter2 )
  {
    v11 = -1073741431;
    v12 = 0LL;
    goto LABEL_119;
  }
  EtwpCovSampCaptureFlushSampleBuffers(v5);
  *((_QWORD *)&v116.Next + 1) = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  memset(Event, 0, sizeof(Event));
  v117 = 4054171642LL;
  v116.Next = (_SLIST_ENTRY *)6941;
  KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(v5, &v116);
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v14, BugCheckParameter2);
  if ( v15 )
    v15[10] = 1;
  *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
  v16 = *(__int64 **)(BugCheckParameter2 + 1680);
  v87 = v16;
  if ( v16 != (__int64 *)(BugCheckParameter2 + 1680) )
  {
    do
    {
      LODWORD(v7) = *((_DWORD *)v16 + 4) + (_DWORD)v7;
      v16 = (__int64 *)*v16;
    }
    while ( v16 != (__int64 *)(BugCheckParameter2 + 1680) );
    v87 = v16;
  }
  v17 = 8LL * (unsigned int)v7;
  v18 = -1;
  if ( v17 <= 0xFFFFFFFF )
    v18 = 8 * (_DWORD)v7;
  v10 = 3221225621LL;
  if ( v17 > 0xFFFFFFFF )
  {
    v11 = -1073741675;
LABEL_117:
    v12 = v85;
    goto LABEL_118;
  }
  v19 = v18 + 1232;
  v20 = -1;
  if ( v18 + 1232 >= v18 )
    v20 = v18 + 1232;
  v11 = v19 < v18 ? 0xC0000095 : 0;
  if ( v19 < v18 )
    goto LABEL_117;
  v85 = 0;
  v93 = 0;
  v86 = 0;
  v91 = 0;
  v90 = 0;
  *((_QWORD *)&v95 + 1) = &v95;
  *(_QWORD *)&v95 = &v95;
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v22 = (char *)KeAbPreAcquire(v6 + 1176, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1176), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 1176), 0, v22, v6 + 1176);
  if ( v22 )
    v22[10] = 1;
  v23 = *(__int64 **)(v6 + 1224);
  v87 = v23;
  if ( v23 != (__int64 *)(v6 + 1224) )
  {
    v24 = (_OWORD **)*((_QWORD *)&v95 + 1);
    do
    {
      v10 = (ULONG_PTR)v23;
      v23 = (__int64 *)*v23;
      v87 = v23;
      if ( *(_DWORD *)(v10 + 60) || (*(_DWORD *)(v10 + 48) & 0x100000) != 0 )
      {
        if ( *(_QWORD *)(v10 + 32) )
        {
          v93 = ++v85;
          ++v86;
          v25 = 2 * (unsigned __int16)*(_DWORD *)(v10 + 48) + 2;
          v26 = v25 + v91;
          v27 = -1;
          if ( v25 + v91 >= v25 )
            v27 = v25 + v91;
          v91 = v27;
          v11 = v26 < v25 ? 0xC0000095 : 0;
          if ( v26 < v25 )
            goto LABEL_117;
          v28 = *(_DWORD *)(v10 - 16) - (((unsigned __int8)*(_DWORD *)(v10 - 16) - 1) & 3) + 3;
          v29 = v28 + v90;
          v30 = -1;
          if ( v28 + v90 >= v28 )
            v30 = v28 + v90;
          v90 = v30;
          v11 = v29 < v28 ? 0xC0000095 : 0;
          if ( v29 < v28 )
            goto LABEL_117;
          v31 = (_QWORD *)(v10 + 72);
          if ( *v24 != &v95 )
LABEL_116:
            __fastfail(3u);
          *v31 = &v95;
          v31[1] = v24;
          *v24 = v31;
          v24 = (_OWORD **)v31;
          *((_QWORD *)&v95 + 1) = v31;
        }
        else
        {
          if ( *(_QWORD *)(v10 - 8) == 1LL )
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 1636));
          _InterlockedExchange((volatile __int32 *)(v10 + 60), 0);
          v23 = v87;
          v24 = (_OWORD **)*((_QWORD *)&v95 + 1);
        }
      }
    }
    while ( v23 != (__int64 *)(v6 + 1224) );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1176), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v6 + 1176));
  KeAbPostRelease(v6 + 1176);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v32 = 48LL * v86;
  if ( v32 > 0xFFFFFFFF )
  {
    v11 = -1073741675;
    goto LABEL_117;
  }
  v33 = v20 + v32;
  v10 = 0xFFFFFFFFLL;
  if ( v20 + (unsigned int)v32 >= v20 )
    v10 = v33;
  v11 = v33 < v20 ? 0xC0000095 : 0;
  if ( v33 < v20 )
    goto LABEL_117;
  v34 = v10 + v91;
  v35 = -1;
  if ( (unsigned int)v10 + v91 >= (unsigned int)v10 )
    v35 = v10 + v91;
  v11 = v34 < (unsigned int)v10 ? 0xC0000095 : 0;
  if ( v34 < (unsigned int)v10 )
    goto LABEL_117;
  v36 = v35 + v90;
  v10 = 0xFFFFFFFFLL;
  if ( v35 + v90 >= v35 )
    v10 = v36;
  v111 = v10;
  v11 = v36 < v35 ? 0xC0000095 : 0;
  if ( v36 < v35 )
    goto LABEL_117;
  v12 = v85;
  if ( v98 < (unsigned int)v10 )
  {
    *v107 = v10;
    v11 = -1073741789;
LABEL_118:
    v7 = 0LL;
    goto LABEL_119;
  }
  if ( v85 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 8 * v85, 0x56777445u);
    P = Pool2;
    if ( !Pool2 )
    {
      v11 = -1073741670;
      v7 = 0LL;
      goto LABEL_119;
    }
    memset_0(Pool2, 0, 8 * v85);
  }
  if ( (*(_DWORD *)(v108 + 16) & 1) != 0 )
  {
    v38 = v96;
    if ( *(_QWORD *)(v96 + 1320) )
    {
      BugCheckParameter2a = *(_QWORD *)(v96 + 1320);
      v39 = KeGetCurrentThread();
      --v39->KernelApcDisable;
      v40 = (char *)KeAbPreAcquire(BugCheckParameter2a, 0LL);
      v41 = v40;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2a, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2a, v40, BugCheckParameter2a);
      if ( v41 )
        v41[10] = 1;
      v42 = BugCheckParameter2a;
      *(_QWORD *)(BugCheckParameter2a + 8) = KeGetCurrentThread();
      memset_0((void *)(v42 + 24), 0, 4LL * *(unsigned int *)(v42 + 20));
      *(_QWORD *)(v42 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v42, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2a);
      KeAbPostRelease(BugCheckParameter2a);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( *(_QWORD *)(v38 + 1328) )
    {
      BugCheckParameter2a = *(_QWORD *)(v38 + 1328);
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      v44 = (char *)KeAbPreAcquire(BugCheckParameter2a, 0LL);
      v45 = v44;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2a, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2a, v44, BugCheckParameter2a);
      if ( v45 )
        v45[10] = 1;
      v46 = BugCheckParameter2a;
      *(_QWORD *)(BugCheckParameter2a + 8) = KeGetCurrentThread();
      memset_0((void *)(v46 + 24), 0, 4LL * *(unsigned int *)(v46 + 20));
      *(_QWORD *)(v46 + 8) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2a);
      KeAbPostRelease(BugCheckParameter2a);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  v47 = v108 + 20;
  v102 = v108 + 20;
  v48 = (_OWORD *)(v108 + 64);
  v89 = (char *)(v108 + 64);
  *(_OWORD *)(v108 + 20) = 0LL;
  *(_OWORD *)(v47 + 16) = 0LL;
  *(_QWORD *)(v47 + 32) = 0LL;
  *(_DWORD *)(v47 + 40) = 0;
  *(_DWORD *)v47 = 44;
  *(_DWORD *)(v47 + 8) = *(_DWORD *)(BugCheckParameter2 + 1724);
  *(_DWORD *)(v47 + 16) = 1108;
  *(_DWORD *)(v47 + 12) = (_DWORD)v48 - v47;
  v49 = v48;
  v121 = v48;
  v50 = (char *)v48 + 1108;
  v89 = v50;
  v51 = (_OWORD *)(v6 + 8);
  v52 = 8LL;
  do
  {
    *v49 = *v51;
    v49[1] = v51[1];
    v49[2] = v51[2];
    v49[3] = v51[3];
    v49[4] = v51[4];
    v49[5] = v51[5];
    v49[6] = v51[6];
    v49 += 8;
    *(v49 - 1) = v51[7];
    v51 += 8;
    --v52;
  }
  while ( v52 );
  *v49 = *v51;
  v49[1] = v51[1];
  v49[2] = v51[2];
  v49[3] = v51[3];
  v49[4] = v51[4];
  *((_DWORD *)v49 + 20) = *((_DWORD *)v51 + 20);
  *(_DWORD *)(v47 + 24) = 60;
  *(_DWORD *)(v47 + 20) = (_DWORD)v50 - v47;
  v106 = v50;
  v53 = v50 + 60;
  *(_DWORD *)(v47 + 32) = (_DWORD)v7;
  *(_DWORD *)(v47 + 28) = (_DWORD)v53 - v47;
  v112 = v53;
  v54 = &v53[8 * (unsigned int)v7];
  v89 = v54;
  v122 = v54;
  for ( i = *(__int64 **)(BugCheckParameter2 + 1680); ; i = (__int64 *)*i )
  {
    v87 = i;
    if ( i == (__int64 *)(BugCheckParameter2 + 1680) )
      break;
    v114 = i;
    v56 = 0;
    v99 = 0;
    while ( v56 < *((_DWORD *)i + 5) )
    {
      v57 = i[3] + 8LL * v56;
      v115 = v57;
      if ( *(_QWORD *)v57 )
      {
        if ( v53 >= v54 )
          break;
        *(_DWORD *)v53 = *(_QWORD *)v57;
        *((_DWORD *)v53 + 1) = *(_DWORD *)(v57 + 4);
        v53 += 8;
        v112 = v53;
        v99 = ++v56;
      }
      else
      {
        v99 = ++v56;
      }
    }
  }
  v58 = v86;
  *(_DWORD *)(v47 + 40) = v86;
  *(_DWORD *)(v47 + 36) = (_DWORD)v54 - v47;
  v59 = v54;
  v105 = v54;
  v60 = &v54[48 * v58];
  memset_0(v59, 0, v60 - v59);
  v62 = v60;
  v101 = (unsigned __int64)v60;
  v113 = (wchar_t *)&v60[v90];
  v63 = v90 + (_DWORD)v60;
  pszDest = v113;
  v64 = v91 + (_DWORD)v113;
  v89 = (char *)v113 + v91;
  v104 = (unsigned __int64)v89;
  v94 = 0;
  v65 = (__int128 *)v95;
  v87 = (__int64 *)v95;
  while ( v65 != &v95 )
  {
    v87 = *(__int64 **)v65;
    v66 = v102;
    *((_DWORD *)v59 + 2) = (_DWORD)v62 - v102;
    *((_DWORD *)v59 + 3) = *((_DWORD *)v65 - 22);
    *(_DWORD *)v59 = v63 - v66;
    *((_DWORD *)v59 + 1) = (unsigned __int16)*((_DWORD *)v65 - 6);
    *((_DWORD *)v59 + 4) = *((_DWORD *)v65 - 27);
    *((_DWORD *)v59 + 5) = *((_DWORD *)v65 - 28);
    *((_DWORD *)v59 + 6) = *((_DWORD *)v65 - 26);
    *((_DWORD *)v59 + 7) = *((_DWORD *)v65 - 5);
    *((_DWORD *)v59 + 8) = *((_DWORD *)v65 - 4);
    *((_DWORD *)v59 + 9) = *((_DWORD *)v65 + 4);
    *((_DWORD *)v59 + 10) = *((_DWORD *)v65 + 5);
    *((_DWORD *)v59 + 11) = *((_DWORD *)v65 + 6);
    v105 = v59 + 48;
    memmove(v62, *((const void **)v65 - 12), *((unsigned int *)v65 - 22));
    v101 = (*((unsigned int *)v65 - 22) + v101 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v101 > (unsigned __int64)v113 )
      break;
    v67 = pszDest;
    RtlStringCchCopyNW(
      pszDest,
      (__int64)(v104 - (_QWORD)pszDest) >> 1,
      *((STRSAFE_PCNZWCH *)v65 - 4),
      (unsigned __int16)*((_DWORD *)v65 - 6));
    pszDest = &v67[(unsigned __int16)*((_DWORD *)v65 - 6) + 1];
    if ( (unsigned __int64)pszDest > v104 )
      break;
    v68 = KeGetCurrentThread();
    --v68->KernelApcDisable;
    v69 = (char *)KeAbPreAcquire(v6 + 1176, 0LL);
    v70 = v69;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 1176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 1176), v69, v6 + 1176);
    if ( v70 )
      v70[10] = 1;
    *(_QWORD *)(v6 + 1184) = KeGetCurrentThread();
    v71 = v94;
    *((_QWORD *)P + v94) = *((_QWORD *)v65 - 5);
    v94 = v71 + 1;
    *((_QWORD *)v65 - 5) = 0LL;
    *((_QWORD *)v65 - 4) = 0LL;
    *((_DWORD *)v65 - 6) &= 0xFFFF0000;
    *((_DWORD *)v65 - 6) |= 0x80000u;
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    --v86;
    if ( *((_QWORD *)v65 - 10) == 1LL )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 1636));
    _InterlockedExchange((volatile __int32 *)v65 - 3, 0);
    v64 = (unsigned int)v89;
    v65 = (__int128 *)v87;
    v59 = v105;
    v63 = (unsigned int)pszDest;
    v62 = (void *)v101;
  }
  v72 = v106;
  *v106 = *(_OWORD *)(v6 + 1116);
  v72[1] = *(_OWORD *)(v6 + 1132);
  v72[2] = *(_OWORD *)(v6 + 1148);
  *((_QWORD *)v72 + 6) = *(_QWORD *)(v6 + 1164);
  *((_DWORD *)v72 + 14) = *(_DWORD *)(v6 + 1172);
  *(_OWORD *)(v6 + 1116) = 0LL;
  *(_OWORD *)(v6 + 1132) = 0LL;
  *(_OWORD *)(v6 + 1148) = 0LL;
  *(_QWORD *)(v6 + 1164) = 0LL;
  *(_DWORD *)(v6 + 1172) = 0;
  v123 = 0LL;
  v124 = 0LL;
  EtwpCovSampCaptureFlushStats(v96, &v123, v61, v62);
  *(_OWORD *)((char *)v72 + 28) = v123;
  *(_OWORD *)((char *)v72 + 44) = v124;
  *(_DWORD *)(v102 + 4) = v64 - v102;
  v73 = *(__int64 **)(BugCheckParameter2 + 1680);
  v87 = v73;
  while ( v73 != (__int64 *)(BugCheckParameter2 + 1680) )
  {
    v74 = v73;
    v114 = v73;
    v73 = (__int64 *)*v73;
    v87 = v73;
    if ( v74 == *(__int64 **)(BugCheckParameter2 + 1664) )
    {
      memset_0((void *)v74[3], 0, 8LL * *((unsigned int *)v74 + 5));
      *((_DWORD *)v74 + 4) = 0;
    }
    else
    {
      v75 = (__int64 **)v74[1];
      if ( (__int64 *)v73[1] != v74 || *v75 != v74 )
        goto LABEL_116;
      *v75 = v73;
      v73[1] = (__int64)v75;
      --*(_DWORD *)(BugCheckParameter2 + 1696);
      v76 = (void *)v74[3];
      if ( v76 )
      {
        ExFreePoolWithTag(v76, 0x56777445u);
        v74[3] = 0LL;
      }
      ExFreePoolWithTag(v74, 0x56777445u);
    }
  }
  ++*(_DWORD *)(BugCheckParameter2 + 1724);
  v77 = v96;
  if ( *(_DWORD *)(v96 + 1284) )
  {
    *(_DWORD *)(v96 + 1284) = 0;
    v78 = v77 + 944;
    v79 = *(__int64 **)(v77 + 944);
    if ( v79 != (__int64 *)(v77 + 944) )
    {
      do
      {
        *((_DWORD *)v79 + 7) = *(_DWORD *)(v77 + 1284);
        v79 = (__int64 *)*v79;
        v77 = v96;
      }
      while ( v79 != (__int64 *)v78 );
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  EtwpCovSampContextPruneModules(v6);
  *v107 = v111;
  v11 = 0;
  v12 = v85;
  v7 = P;
LABEL_119:
  if ( *(struct _KTHREAD **)(v6 + 1184) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 1184) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1176));
    KeAbPostRelease(v6 + 1176);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v7 )
  {
    if ( (_DWORD)v12 )
    {
      v80 = (__int64 *)v7;
      do
      {
        v81 = *v80;
        if ( *v80 )
        {
          v82 = (void *)(v81 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (v81 & 1) != 0 )
          {
            guard_dispatch_icall_no_overrides(v82, v10);
          }
          else if ( v82 )
          {
            ExFreePool(v82);
          }
          *v80 = 0LL;
        }
        ++v80;
        --v12;
      }
      while ( v12 );
    }
    ExFreePoolWithTag(v7, 0x56777445u);
  }
  if ( v97 )
  {
    _m_prefetchw(&stru_140EFEFA0);
    v83 = stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v83 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&stru_140EFEFA0,
                  (stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  stru_140EFEFA0.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_140EFEFA0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v11;
}
