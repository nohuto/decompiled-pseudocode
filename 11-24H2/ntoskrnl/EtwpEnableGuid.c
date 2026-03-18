/*
 * XREFs of EtwpEnableGuid @ 0x14083B040
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x140A4882C (EtwpEnableTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentThreadProcessId @ 0x1404296F0 (PsGetCurrentThreadProcessId.c)
 *     EtwpEnableMetaProviderGuid @ 0x140430E80 (EtwpEnableMetaProviderGuid.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpEventWriteProviderAccessCheckStatus @ 0x1407A7424 (EtwpEventWriteProviderAccessCheckStatus.c)
 *     EtwpPreallocateApcPool @ 0x1408303A0 (EtwpPreallocateApcPool.c)
 *     EtwpUnreferenceDataBlock @ 0x140835FF0 (EtwpUnreferenceDataBlock.c)
 *     EtwpApplyTransientFilters @ 0x140837304 (EtwpApplyTransientFilters.c)
 *     EtwpFreeFilterInfo @ 0x140837394 (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x1408381B0 (EtwpValidateEnableNotification.c)
 *     EtwpCheckGuidAccess @ 0x14083848C (EtwpCheckGuidAccess.c)
 *     EtwpProviderArrivalCallback @ 0x140838564 (EtwpProviderArrivalCallback.c)
 *     EtwpAddGuidEntry @ 0x140838B30 (EtwpAddGuidEntry.c)
 *     EtwpIsGuidAllowed @ 0x14083A0B4 (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x14083A3F4 (EtwpSendDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14083A9D0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x14083D8B0 (EtwpApplyScopeFilters.c)
 *     EtwpCopySchematizedFilters @ 0x14083DD00 (EtwpCopySchematizedFilters.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140841CCC (EtwpEventWriteTemplateSessAndProv.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409F39DC (EtwpUpdateGuidEnableInfo.c)
 *     EtwpBuildNotificationPacket @ 0x1409F6588 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x1409F6F3C (EtwpAllocDataBlock.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140A1584C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpTrackDecodeGuidForSession @ 0x140A62114 (EtwpTrackDecodeGuidForSession.c)
 *     EtwpReferenceStackLookasideList @ 0x140A67A98 (EtwpReferenceStackLookasideList.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140A6CE48 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteProviderEnabled @ 0x140A6EB7C (EtwpEventWriteProviderEnabled.c)
 *     EtwpCreateUmReplyObject @ 0x140A762A0 (EtwpCreateUmReplyObject.c)
 *     EtwpEventWriteCaptureState @ 0x140A8A214 (EtwpEventWriteCaptureState.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140AB5A1C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140AB5B80 (EtwpCheckCurrentUserProcessAccess.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r14
  ULONG_PTR v7; // rsi
  int v8; // r12d
  int UmReplyObject; // r15d
  unsigned int *v10; // rbx
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r13
  _QWORD *v14; // rax
  struct _KTHREAD *v15; // rax
  __int64 v16; // rbx
  unsigned __int64 *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rsi
  volatile signed __int32 *v21; // r15
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // edi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  int v28; // edi
  unsigned int *v29; // r13
  unsigned __int16 v30; // si
  _WORD *v31; // rdi
  __int16 v32; // ax
  __int16 v33; // dx
  unsigned __int16 v34; // cx
  __int32 v35; // edi
  __int64 v36; // rax
  int v37; // edx
  __int128 v38; // xmm0
  __int64 v39; // rcx
  unsigned int v40; // r9d
  __int64 v41; // r10
  _DWORD *v42; // r8
  __int64 v43; // rsi
  int v44; // r12d
  __int64 v45; // rax
  __int64 v46; // r9
  unsigned int v47; // r8d
  _DWORD *v48; // rdx
  unsigned int v49; // r14d
  int v50; // esi
  volatile signed __int32 *v51; // rax
  volatile signed __int32 *v52; // rdi
  unsigned int v53; // r14d
  __int64 *v54; // rbx
  signed __int64 v55; // rax
  signed __int64 v56; // rdx
  __int64 v57; // rtt
  int v58; // eax
  _QWORD *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rbx
  const EVENT_DESCRIPTOR *v62; // rdi
  __int64 v63; // r8
  __int64 v64; // r15
  struct _KTHREAD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rdi
  __int16 v68; // cx
  int updated; // eax
  signed __int64 v70; // rax
  signed __int64 v71; // rdx
  __int64 v72; // rtt
  __int64 v73; // rcx
  __m256i *Pool2; // rax
  __int16 v75; // dx
  __int64 v76; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int ProcessId; // eax
  __int16 v82; // di
  struct _KTHREAD *v83; // rax
  unsigned __int64 *v84; // rbx
  __int64 v85; // rcx
  _QWORD *v86; // rax
  _QWORD *v87; // rdi
  _QWORD *v88; // rcx
  __int64 v89; // rax
  _QWORD *v90; // rcx
  _QWORD *v91; // rax
  int v92; // eax
  int v93; // r14d
  _DWORD *v94; // rdx
  unsigned __int8 i; // cl
  __int64 v96; // rcx
  unsigned int v97; // esi
  int v98; // r15d
  unsigned int v99; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v101; // r8d
  __int128 *v102; // rsi
  int CurrentThreadProcessId; // eax
  char v104; // r14
  __int128 *v105; // rdx
  unsigned int v106; // r15d
  unsigned int v107; // r8d
  _QWORD *GuidEntryByGuid; // rax
  unsigned int v109; // r14d
  __int64 v110; // rcx
  __int64 v111; // r10
  _BYTE *v112; // rdx
  _DWORD *v113; // r9
  __int64 v114; // rcx
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rbx
  signed __int32 v118; // eax
  signed __int32 v119; // ett
  volatile signed __int64 *v120; // rbx
  signed __int64 v121; // rax
  signed __int64 v122; // rdx
  const EVENT_DESCRIPTOR *v123; // rdi
  __int64 v124; // r8
  __int64 *v125; // rbx
  signed __int64 v126; // rax
  signed __int64 v127; // rdx
  __int64 v128; // rtt
  unsigned int v129; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v130; // [rsp+50h] [rbp-B0h]
  char v131; // [rsp+51h] [rbp-AFh]
  unsigned __int16 v132; // [rsp+54h] [rbp-ACh] BYREF
  char v133; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int8 v134; // [rsp+59h] [rbp-A7h]
  unsigned __int16 v135; // [rsp+5Ch] [rbp-A4h] BYREF
  int v136; // [rsp+60h] [rbp-A0h]
  void *Source1; // [rsp+68h] [rbp-98h]
  unsigned int *v138; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v139; // [rsp+78h] [rbp-88h]
  unsigned int v140; // [rsp+80h] [rbp-80h]
  __int16 v141; // [rsp+84h] [rbp-7Ch] BYREF
  int v142; // [rsp+88h] [rbp-78h]
  int v143; // [rsp+8Ch] [rbp-74h]
  int v144; // [rsp+90h] [rbp-70h]
  volatile signed __int32 *v145; // [rsp+98h] [rbp-68h]
  _QWORD *v146; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v148; // [rsp+B0h] [rbp-50h] BYREF
  int v149; // [rsp+C0h] [rbp-40h]
  _QWORD *v150; // [rsp+C8h] [rbp-38h]
  _QWORD *v151; // [rsp+D0h] [rbp-30h]
  __int64 v152; // [rsp+D8h] [rbp-28h]
  PVOID Object; // [rsp+E0h] [rbp-20h]
  _QWORD *v154; // [rsp+E8h] [rbp-18h]
  __int64 v155; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v156; // [rsp+F8h] [rbp-8h]
  __int64 v157; // [rsp+100h] [rbp+0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v159[14]; // [rsp+130h] [rbp+30h] BYREF
  __int128 Source2; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v161; // [rsp+1B0h] [rbp+B0h]
  __m256i v162; // [rsp+1C0h] [rbp+C0h]
  _OWORD v163[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v164; // [rsp+200h] [rbp+100h]
  __int64 v165; // [rsp+210h] [rbp+110h]
  struct _KAPC_STATE ApcState; // [rsp+218h] [rbp+118h] BYREF
  _BYTE v167[4]; // [rsp+248h] [rbp+148h] BYREF
  _BYTE v168[8]; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v169; // [rsp+254h] [rbp+154h]

  v152 = a2;
  v139 = 0LL;
  v3 = a2 + 72;
  v157 = a2 + 40;
  v155 = 0LL;
  Object = 0LL;
  Src = 0LL;
  v144 = 0;
  v149 = 0;
  v7 = 0LL;
  v156 = a2 + 72;
  v131 = 0;
  LOWORD(v143) = 0;
  v135 = 0;
  v148 = 0LL;
  v133 = 0;
  v138 = 0LL;
  Source1 = 0LL;
  memset_0(v159, 0, 0x68uLL);
  v8 = *(_DWORD *)(v3 + 8) & 0x20;
  v141 = 0;
  v142 = v8;
  v134 = v8 != 0 ? 2 : 0;
  UmReplyObject = EtwpValidateEnableNotification(a1, a2, a3, (__int64)&v148, (__int64 *)&v138, (__int64)v159);
  if ( UmReplyObject < 0 )
    goto LABEL_2;
  v97 = *(_DWORD *)v3;
  v140 = v97;
  if ( v97 == 2 )
  {
    v98 = a2 + 40;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE) )
      EtwpEventWriteCaptureState(v116, v3, a2 + 40);
  }
  else
  {
    v98 = a2 + 40;
  }
  v99 = *(_DWORD *)(a2 + 116);
  if ( v99 - 1 <= 1 )
  {
    v111 = *(unsigned int *)(a2 + 116);
    v112 = &v167[-a2 - 120];
    v113 = (_DWORD *)(a2 + 128);
    do
    {
      v114 = *((_QWORD *)v113 - 1);
      *(_DWORD *)&v168[(_QWORD)v113 - 120 - a2] = v113[1];
      v115 = *v113;
      *(_QWORD *)((char *)v113 + (_QWORD)v112 - 8) = a2 + v114;
      *(_DWORD *)((char *)v113 + (_QWORD)v112) = v115;
      v113 += 4;
      --v111;
    }
    while ( v111 );
  }
  else
  {
    v99 = 0;
    v169 = 0;
  }
  if ( v8 )
  {
    v10 = v138;
    v102 = (__int128 *)(a2 + 40);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    UmReplyObject = EtwpEnableDisableSpecialGuids(
                      a1,
                      v98,
                      *(unsigned __int16 *)(v3 + 6),
                      v97,
                      *(_DWORD *)(v3 + 16),
                      (__int64)v167,
                      v99,
                      (__int64)&v133);
    KeLeaveCriticalRegionThread();
    if ( v133 )
    {
      v7 = (ULONG_PTR)v139;
      goto LABEL_2;
    }
    v129 = v99;
    v101 = v97;
    v10 = v138;
    v102 = (__int128 *)(a2 + 40);
    UmReplyObject = EtwpEnableMetaProviderGuid((__int64)v138, a2 + 40, v101, *(_QWORD *)(v3 + 16), (__int64)v167, v129);
    if ( UmReplyObject != -1073741163 )
    {
      v7 = (ULONG_PTR)v139;
      goto LABEL_3;
    }
  }
  if ( (*(_WORD *)(v3 + 6) & 0xFFFD) == 0 )
  {
    v7 = (ULONG_PTR)v139;
    UmReplyObject = -1073741790;
    goto LABEL_3;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v104 = BYTE2(v149);
  v105 = &PrivateLoggerNotificationGuid;
  v106 = v134;
  v22 = BYTE2(v149) == 0;
  v107 = v134;
  *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
  if ( v22 )
    v105 = v102;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v105, v107);
  v7 = (ULONG_PTR)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    v109 = v140;
    if ( v140 != 1 )
    {
      v139 = GuidEntryByGuid;
      if ( v140 )
        goto LABEL_118;
    }
    v139 = GuidEntryByGuid;
    if ( !v10 )
      goto LABEL_118;
    v139 = GuidEntryByGuid;
    v110 = *(_QWORD *)&EventTracingProvGuid.Data1 - *(_QWORD *)(a2 + 40);
    if ( *(_QWORD *)&EventTracingProvGuid.Data1 == *(_QWORD *)(a2 + 40) )
      v110 = *(_QWORD *)EventTracingProvGuid.Data4 - *(_QWORD *)(a2 + 48);
    if ( v110 )
    {
LABEL_118:
      v7 = (ULONG_PTR)GuidEntryByGuid;
    }
    else
    {
      v139 = GuidEntryByGuid;
      v123 = (const EVENT_DESCRIPTOR *)ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING;
      if ( v140 != 1 )
        v123 = &ETW_EVENT_TRACING_PROVIDER_DISABLING;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v123) )
      {
        if ( v109 == 1 )
        {
          v64 = a2 + 72;
          EtwpEventWriteProviderEnabled(
            (unsigned int)&EventTracingProvGuid,
            (_DWORD)v123,
            v124,
            (_DWORD)v10 + 136,
            (__int64)&EventTracingProvGuid,
            *(_QWORD *)(a2 + 88),
            *(_QWORD *)(a2 + 96),
            *(_DWORD *)(a2 + 80),
            *(_BYTE *)(a2 + 76));
          v139 = (_QWORD *)v7;
          goto LABEL_120;
        }
        EtwpEventWriteTemplateSessAndProv(&EventTracingProvGuid, v123, v124, 2LL, v10 + 34, &EventTracingProvGuid);
        v139 = (_QWORD *)v7;
      }
    }
  }
  else
  {
    if ( v104 || (v109 = v140, v140 != 1) )
    {
      UmReplyObject = -1073741163;
      v7 = 0LL;
      goto LABEL_3;
    }
    v139 = EtwpAddGuidEntry(a1, (_DWORD *)(a2 + 40), v106);
    v7 = (ULONG_PTR)v139;
    if ( !v139 )
    {
      UmReplyObject = -1073741801;
      goto LABEL_3;
    }
  }
  v64 = a2 + 72;
LABEL_120:
  v65 = KeGetCurrentThread();
  --v65->KernelApcDisable;
  v66 = KeAbPreAcquire(v7 + 664, 0LL);
  v67 = v66;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 664), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 664), (__int64)v66, v7 + 664);
  if ( v67 )
    *((_BYTE *)v67 + 10) = 1;
  *(_QWORD *)(v7 + 672) = KeGetCurrentThread();
  if ( v109 == 1 && (*(_BYTE *)(v7 + 91) & 1) != 0 && !v8 && *(_WORD *)(v64 + 6) != *(_WORD *)(v7 + 88) )
  {
    v73 = 0x4719A4EB910C653DLL - *(_QWORD *)(v7 + 40);
    if ( *(_QWORD *)(v7 + 40) == 0x4719A4EB910C653DLL )
      v73 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v7 + 48);
    if ( !v73 )
    {
      UmReplyObject = -1073741053;
      goto LABEL_138;
    }
  }
  if ( v138 && (v138[204] & 0x40) != 0 )
  {
    UmReplyObject = -1073741162;
    goto LABEL_138;
  }
  if ( v8 )
  {
    updated = EtwpAcquireTokenAccessInformation(v138);
    if ( updated )
    {
LABEL_137:
      UmReplyObject = updated;
      goto LABEL_138;
    }
  }
  v22 = BYTE2(v149) == 0;
  *(_DWORD *)(a2 + 112) = v109;
  v68 = *(_WORD *)(v64 + 6);
  *(_WORD *)(a2 + 104) = v68;
  *(_BYTE *)(a2 + 106) = *(_BYTE *)(v64 + 4);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(v64 + 16);
  if ( !v22 )
  {
    *(_BYTE *)(a2 + 107) = 1;
    *(_WORD *)(a2 + 104) = v68 & 0x7FFF;
  }
  if ( !*(_QWORD *)(v64 + 16) )
    *(_QWORD *)(v64 + 16) = -1LL;
  if ( !*(_BYTE *)(v64 + 4) )
    *(_BYTE *)(v64 + 4) = -1;
  if ( v109 != 2 && !BYTE2(v149) )
  {
    updated = EtwpUpdateGuidEnableInfo(v7, (__int64)&v135);
    if ( updated < 0 )
      goto LABEL_137;
    *(_OWORD *)v64 = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(v64 + 16) = *(_OWORD *)(v7 + 112);
    if ( (*(_DWORD *)(v64 + 8) & 4) != 0 )
    {
      v117 = (__int64)v138;
      EtwpPreallocateApcPool((__int64)(v138 + 208));
      _m_prefetchw((const void *)(v117 + 816));
      v118 = *(_DWORD *)(v117 + 816);
      do
      {
        v119 = v118;
        v118 = _InterlockedCompareExchange((volatile signed __int32 *)(v117 + 816), v118 | 0x2000, v118);
      }
      while ( v119 != v118 );
      if ( (v118 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList();
    }
  }
  if ( *(_QWORD *)(v7 + 56) == v7 + 56 && (*(_QWORD *)(v7 + 656) || *(_QWORD *)(v7 + 16) == v7 + 16) )
  {
    UmReplyObject = 0;
    goto LABEL_138;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    UmReplyObject = EtwpCreateUmReplyObject(v7, (__int64)&v155);
    if ( UmReplyObject < 0 )
      goto LABEL_138;
    *(_QWORD *)(a2 + 24) = Object;
  }
  if ( (int)EtwpBuildNotificationPacket(v7, a2, 255LL, &Src) < 0 )
  {
    UmReplyObject = -1073741801;
    goto LABEL_115;
  }
  v92 = EtwpAllocDataBlock(*((unsigned int *)Src + 1), Src);
  v21 = (volatile signed __int32 *)Source1;
  if ( v92 < 0 )
  {
    v136 = -1073741801;
    goto LABEL_112;
  }
  v93 = v143;
  v94 = (_DWORD *)(v7 + 128);
  v145 = (volatile signed __int32 *)Source1;
  for ( i = 0; i < 0x10u; ++i )
  {
    if ( *v94 )
      v93 = (unsigned __int16)v93 | (1 << i);
    v94 += 8;
  }
  v19 = 0LL;
  v143 = v93;
  v53 = v140;
  v130 = 0;
  v150 = 0LL;
  if ( !*(_QWORD *)(v7 + 656) )
  {
    v96 = *(_QWORD *)(v7 + 16);
    if ( v96 != v7 + 16 )
      v150 = (_QWORD *)(v96 - 16);
  }
  v12 = v7;
  v136 = -1073741801;
  v151 = (_QWORD *)v7;
  while ( 2 )
  {
    v13 = *(_QWORD **)(v12 + 56);
    v14 = (_QWORD *)(v12 + 56);
    v154 = (_QWORD *)(v12 + 56);
    while ( v13 != v14 )
    {
      if ( v8 )
      {
        v15 = KeGetCurrentThread();
        v16 = (__int64)(v13 - 2);
        --v15->KernelApcDisable;
        v17 = (unsigned __int64 *)(v13[2] + 664LL);
        v18 = KeAbPreAcquire((__int64)v17, 0LL);
        v20 = v18;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
          ExfAcquirePushLockExclusiveEx(v17, (__int64)v18, (__int64)v17);
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        v21 = (volatile signed __int32 *)Source1;
        v131 = 1;
        *(_QWORD *)(v13[2] + 672LL) = KeGetCurrentThread();
      }
      else
      {
        v16 = (__int64)v13;
      }
      v22 = (*(_BYTE *)(v16 + 98) & 1) == 0;
      v23 = v152;
      v13 = (_QWORD *)*v13;
      v24 = (__int64)v138;
      v146 = v13;
      v25 = *(_DWORD *)(v152 + 72);
      if ( !v22 && *(_WORD *)((char *)&v149 + 1) )
        goto LABEL_74;
      if ( v25 == 2 || BYTE2(v149) )
      {
        if ( !EtwpApplyTransientFilters(v16, v159) )
          goto LABEL_74;
        v23 = v152;
      }
      if ( (*(_BYTE *)(v16 + 98) & 8) != 0
        && (v8 || v130 || !v25 && *(_WORD *)(v23 + 104) != *(_WORD *)(*(_QWORD *)(v16 + 32) + 88LL)) )
      {
        goto LABEL_74;
      }
      if ( BYTE2(v149) )
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(v16 + 80)) )
          goto LABEL_74;
      }
      else
      {
        if ( v8 && !EtwpIsGuidAllowed((__int64)v138, (const void *)(*(_QWORD *)(v16 + 32) + 40LL)) )
          goto LABEL_74;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        if ( (_BYTE)v149 && (*(_BYTE *)(v16 + 98) & 1) == 0 )
        {
          v26 = *(_QWORD *)(v16 + 80);
          SubjectContext.ProcessAuditId = *(PVOID *)(v26 + 464);
          SubjectContext.ClientToken = 0LL;
          v27 = (_QWORD *)PsReferencePrimaryTokenWithTag(v26, 0x75536553u);
          SubjectContext.PrimaryToken = v27;
          if ( SeTokenLeakTracking )
          {
            if ( v27 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v27[143] + 284LL));
              if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
                __debugbreak();
              v21 = (volatile signed __int32 *)Source1;
            }
            if ( SubjectContext.ClientToken )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext.ClientToken + 143) + 284LL));
              if ( SubjectContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
                __debugbreak();
              v21 = (volatile signed __int32 *)Source1;
            }
          }
          v28 = EtwpCheckGuidAccess((__int64)&v148, 0x200u, &SubjectContext);
          SeReleaseSubjectContext(&SubjectContext);
          if ( v28 )
          {
            if ( v28 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_ACCESS_DENIED) )
              EtwpEventWriteProviderAccessCheckStatus(v80, v79, v19, v16, v24, v28);
            goto LABEL_74;
          }
        }
      }
      v29 = (unsigned int *)Src;
      if ( BYTE2(v149) )
      {
        ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v16 + 80));
        if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(v156 + 6) & 0x7FFF, &v141) )
        {
LABEL_93:
          v13 = v146;
          goto LABEL_74;
        }
        v82 = v141;
        if ( v141 != *((_WORD *)v21 + 39) )
        {
          if ( (int)EtwpAllocDataBlock(v29[1], Src) < 0 )
          {
            v21 = v145;
            Source1 = (void *)v145;
            if ( v131 )
            {
              *(_QWORD *)(*(_QWORD *)(v16 + 32) + 672LL) = 0LL;
              v125 = (__int64 *)(*(_QWORD *)(v16 + 32) + 664LL);
              _m_prefetchw(v125);
              v126 = *v125;
              v127 = *v125 - 16;
              if ( (*v125 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v127 = 0LL;
              if ( (v126 & 2) != 0 || (v128 = *v125, v128 != _InterlockedCompareExchange64(v125, v127, v126)) )
                ExfReleasePushLock(v125);
              KeAbPostRelease((ULONG_PTR)v125);
              KeLeaveCriticalRegionThread();
              v21 = (volatile signed __int32 *)Source1;
            }
            v7 = (ULONG_PTR)v139;
            goto LABEL_112;
          }
          EtwpUnreferenceDataBlock(v145);
          v21 = (volatile signed __int32 *)Source1;
          v145 = (volatile signed __int32 *)Source1;
          *((_WORD *)Source1 + 39) = v82 | 0x8000;
          *((_WORD *)v21 + 52) = v82;
        }
        v29 = (unsigned int *)v21;
        goto LABEL_71;
      }
      if ( v53 == 2 )
      {
LABEL_175:
        v75 = *(_WORD *)(v16 + 98);
        if ( (v75 & 8) != 0 || (v75 & 0x10) != 0 || (v138[204] & 0x2000000) != 0 )
        {
          if ( (v75 & 1) != 0 )
          {
            EtwpProviderArrivalCallback((__int64)v138, 0, v16);
          }
          else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v16 + 80) + 488LL)) )
          {
            v76 = *(_QWORD *)(v16 + 80);
            memset(&ApcState, 0, sizeof(ApcState));
            ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v76);
            v78 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KeStackAttachProcess(*(PRKPROCESS *)(v16 + 80), &ApcState);
            EtwpProviderArrivalCallback((__int64)v138, 1, v16);
            KiUnstackDetachProcess((__int64)&ApcState, 0);
            PsDetachSiloFromCurrentThread(v78);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v16 + 80) + 488LL));
          }
        }
        goto LABEL_71;
      }
      if ( v130 )
      {
        if ( v8 )
          v30 = *(_WORD *)(v16 + 106);
        else
          v30 = *(_WORD *)(v16 + 104);
        v132 = 0;
        if ( v8 )
          v31 = (_WORD *)(v16 + 106);
        else
          v31 = (_WORD *)(v16 + 104);
      }
      else
      {
        v132 = 0;
        if ( v8 )
        {
          v30 = *(_WORD *)(v16 + 102);
          v31 = (_WORD *)(v16 + 102);
        }
        else
        {
          v30 = *(_WORD *)(v16 + 100);
          v31 = (_WORD *)(v16 + 100);
        }
      }
      if ( v53 == 1 )
      {
        v132 = v135;
        EtwpApplyScopeFilters(v16, 1, v134, v130, (__int64)&v132);
        v32 = *(_WORD *)(v16 + 98);
        if ( (v32 & 8) != 0 )
        {
          *(_WORD *)(v16 + 100) = v132;
        }
        else
        {
          if ( (v32 & 0x200) != 0 && v132 && !(unsigned __int8)EtwpTrackDecodeGuidForSession(v138, v16) )
          {
            _InterlockedAnd16((volatile signed __int16 *)(v16 + 98), 0xFDFFu);
            v21 = (volatile signed __int32 *)Source1;
          }
          *v31 = v132 | *v31 & ~v135;
        }
      }
      else if ( !v53 && (*(_BYTE *)(v16 + 98) & 8) == 0 )
      {
        *v31 &= ~v135;
      }
      memset_0(&Source2, 0, 0x78uLL);
      if ( v8 )
      {
        if ( v130 )
          v34 = *(_WORD *)(v16 + 106);
        else
          v34 = *(_WORD *)(v16 + 102);
        v35 = 0;
        v33 = 0;
      }
      else
      {
        v33 = *(_WORD *)(v16 + 100);
        v34 = *(_WORD *)(v16 + 104);
        v19 = v130;
        if ( !v130 )
        {
          v34 = *(_WORD *)(v16 + 100);
          v33 = *(_WORD *)(v16 + 104);
        }
        v35 = 0;
      }
      if ( (*(_BYTE *)(v16 + 98) & 8) != 0 )
      {
        if ( v34 || v53 != 1 )
          goto LABEL_90;
        if ( !v30 )
          goto LABEL_165;
      }
      else
      {
        if ( (v30 & v135) == 0 && (v34 & v135) == 0 )
          goto LABEL_165;
        if ( (_WORD)v143 == v34 && !v8 && !v33 && !*(_WORD *)(v16 + 102) && !*(_WORD *)(v16 + 106) )
        {
LABEL_90:
          v21 = v145;
          Source1 = (void *)v145;
          goto LABEL_70;
        }
      }
      v36 = *(_QWORD *)(v16 + 32);
      v37 = 0;
      Source2 = *(_OWORD *)v21;
      v161 = *((_OWORD *)v21 + 1);
      v162 = *(__m256i *)((_BYTE *)v21 + 1);
      *(_QWORD *)&v163[0] = *((_QWORD *)v21 + 8);
      v38 = *(_OWORD *)(v36 + 40);
      *(_QWORD *)((char *)&Source2 + 4) = 0x100000078LL;
      *(_OWORD *)&v162.m256i_u64[1] = v38;
      v39 = *(_QWORD *)(v36 + 640);
      if ( v39 )
      {
        v40 = 0;
        v41 = v39 + 88;
        v42 = (_DWORD *)(v36 + 128);
        do
        {
          if ( *v42 )
          {
            if ( *(_QWORD *)v41 )
            {
              v58 = *(unsigned __int16 *)(v16 + 100);
              if ( _bittest(&v58, (unsigned __int8)v40) )
                v37 += (*(_DWORD *)(*(_QWORD *)v41 + 16LL) + 7) & 0xFFFFFFF8;
            }
          }
          ++v40;
          v42 += 8;
          v41 += 104LL;
        }
        while ( v40 < 0x10 );
        if ( v37 )
          DWORD1(Source2) = v37 + 136;
      }
      EtwpComputeRegEntryEnableInfo(v16, (__int64)v163 + 8);
      if ( (*(_BYTE *)(v16 + 98) & 8) != 0 )
      {
        LODWORD(v165) = 0;
        *((_QWORD *)&v164 + 1) = 0LL;
      }
      if ( v21 )
      {
        if ( *((_DWORD *)v21 + 1) == DWORD1(Source2) && RtlCompareMemory((const void *)v21, &Source2, 0x78uLL) == 120 )
          goto LABEL_67;
        v21 = 0LL;
        Source1 = 0LL;
      }
      v43 = *(_QWORD *)(v16 + 32);
      v45 = *(_QWORD *)(v43 + 640);
      if ( !v45 )
        goto LABEL_63;
      v46 = v45 + 88;
      v47 = 0;
      v48 = (_DWORD *)(v43 + 128);
      do
      {
        if ( *v48 )
        {
          if ( *(_QWORD *)v46 )
          {
            v44 = *(unsigned __int16 *)(v16 + 100);
            if ( _bittest(&v44, (unsigned __int8)v47) )
              v35 += (*(_DWORD *)(*(_QWORD *)v46 + 16LL) + 7) & 0xFFFFFFF8;
          }
        }
        ++v47;
        v48 += 8;
        v46 += 104LL;
      }
      while ( v47 < 0x10 );
      if ( v35 )
      {
        Pool2 = (__m256i *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          goto LABEL_164;
        Pool2->m256i_i32[2] = 1;
        Source1 = Pool2;
        v21 = (volatile signed __int32 *)Pool2;
        *(_OWORD *)Pool2->m256i_i8 = Source2;
        *(_OWORD *)&Pool2->m256i_u64[2] = v161;
        Pool2[1] = v162;
        *(_OWORD *)Pool2[2].m256i_i8 = v163[0];
        *(_OWORD *)&Pool2[2].m256i_u64[2] = v163[1];
        *(_OWORD *)Pool2[3].m256i_i8 = v164;
        Pool2[3].m256i_i64[2] = v165;
        Pool2[3].m256i_i32[5] = 1;
        Pool2->m256i_i32[2] = 1;
        Pool2->m256i_i32[1] = v35 + 136;
        Pool2[4].m256i_i32[1] = 0x80000000;
        Pool2[4].m256i_i32[0] = v35;
        Pool2[3].m256i_i64[3] = 136LL;
        EtwpCopySchematizedFilters(&Pool2[4].m256i_u64[1]);
      }
      else
      {
LABEL_63:
        v49 = DWORD1(Source2);
        Source1 = 0LL;
        v50 = 0;
        v21 = 0LL;
        v51 = (volatile signed __int32 *)ExAllocatePool2(0x100uLL);
        v52 = v51;
        if ( v51 )
        {
          memmove((void *)v51, &Source2, v49);
          *((_DWORD *)v52 + 2) = 1;
          v21 = v52;
          Source1 = (void *)v52;
        }
        else
        {
          v50 = v136;
        }
        if ( v50 < 0 )
        {
LABEL_164:
          v53 = v140;
          v8 = v142;
LABEL_165:
          v13 = v146;
          if ( !v21 )
          {
            v21 = v145;
            Source1 = (void *)v145;
          }
          goto LABEL_74;
        }
      }
      v53 = v140;
      v8 = v142;
LABEL_67:
      if ( !v21 )
        goto LABEL_90;
      v29 = (unsigned int *)v21;
      if ( v21 != v145 )
      {
        EtwpUnreferenceDataBlock(v145);
        v145 = v21;
      }
LABEL_70:
      if ( v53 == 1 )
        goto LABEL_175;
LABEL_71:
      if ( (int)EtwpSendDataBlock(v16, (__int64)v29, v19) < 0 )
        goto LABEL_93;
      v13 = v146;
      if ( (*(_BYTE *)(v16 + 98) & 2) != 0 )
        ++v144;
LABEL_74:
      v14 = v154;
      if ( v131 )
      {
        *(_QWORD *)(*(_QWORD *)(v16 + 32) + 672LL) = 0LL;
        v54 = (__int64 *)(*(_QWORD *)(v16 + 32) + 664LL);
        _m_prefetchw(v54);
        v55 = *v54;
        v56 = *v54 - 16;
        if ( (*v54 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v56 = 0LL;
        if ( (v55 & 2) != 0 || (v57 = *v54, v57 != _InterlockedCompareExchange64(v54, v56, v55)) )
          ExfReleasePushLock(v54);
        KeAbPostRelease((ULONG_PTR)v54);
        KeLeaveCriticalRegionThread();
        v14 = v154;
        v21 = (volatile signed __int32 *)Source1;
        v131 = 0;
      }
    }
    v7 = (ULONG_PTR)v139;
    v59 = v151;
    if ( v151 != v139 )
    {
      v151[84] = 0LL;
      v120 = v59 + 83;
      _m_prefetchw(v59 + 83);
      v121 = v59[83];
      v122 = v121 - 16;
      if ( (v121 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v122 = 0LL;
      if ( (v121 & 2) != 0 || v121 != _InterlockedCompareExchange64(v120, v122, v121) )
        ExfReleasePushLock(v120);
      KeAbPostRelease((ULONG_PTR)v120);
      KeLeaveCriticalRegionThread();
      v21 = (volatile signed __int32 *)Source1;
    }
    if ( v150 )
    {
      v83 = KeGetCurrentThread();
      v84 = v150 + 83;
      v130 = 1;
      v151 = v150;
      v85 = (__int64)(v150 + 83);
      --v83->KernelApcDisable;
      v86 = KeAbPreAcquire(v85, 0LL);
      v87 = v86;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v84, 0LL) )
        ExfAcquirePushLockExclusiveEx(v84, (__int64)v86, (__int64)v84);
      if ( v87 )
        *((_BYTE *)v87 + 10) = 1;
      v88 = v150;
      v21 = (volatile signed __int32 *)Source1;
      v150[84] = KeGetCurrentThread();
      v89 = v88[2];
      v90 = 0LL;
      v91 = (_QWORD *)(v89 - 16);
      if ( v91 != (_QWORD *)v7 )
        v90 = v91;
      v150 = v90;
      v12 = (ULONG_PTR)v151;
      continue;
    }
    break;
  }
  v60 = v152;
  v61 = (__int64)v138;
  v136 = 0;
  *(_DWORD *)(v152 + 20) = v144;
  *(_QWORD *)(v60 + 24) = v155;
  if ( v61 && v53 <= 1 )
  {
    v62 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
    if ( v53 != 1 )
      v62 = &ETW_EVENT_PROVIDER_DISABLED;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v62) )
    {
      if ( v53 == 1 )
        EtwpEventWriteProviderEnabled(
          v156,
          (_DWORD)v62,
          v63,
          v61 + 136,
          v157,
          *(_QWORD *)(v156 + 16),
          *(_QWORD *)(v156 + 24),
          *(_DWORD *)(v156 + 8),
          *(_BYTE *)(v156 + 4));
      else
        EtwpEventWriteTemplateSessAndProv(v157, v62, v63, 2LL, v138 + 34, v157);
    }
  }
LABEL_112:
  if ( v21 )
    EtwpUnreferenceDataBlock(v21);
  UmReplyObject = v136;
LABEL_115:
  if ( Src )
    EtwpUnreferenceDataBlock((volatile signed __int32 *)Src);
LABEL_138:
  *(_QWORD *)(v7 + 672) = 0LL;
  _m_prefetchw((const void *)(v7 + 664));
  v70 = *(_QWORD *)(v7 + 664);
  v71 = v70 - 16;
  if ( (v70 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v71 = 0LL;
  if ( (v70 & 2) != 0
    || (v72 = *(_QWORD *)(v7 + 664),
        v72 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 664), v71, v70)) )
  {
    ExfReleasePushLock((_QWORD *)(v7 + 664));
  }
  KeAbPostRelease(v7 + 664);
  KeLeaveCriticalRegionThread();
LABEL_2:
  v10 = v138;
LABEL_3:
  if ( v10 )
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 170) + 704LL) + 8LL * *v10),
      1u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry(v7);
  EtwpFreeFilterInfo(v159);
  return (unsigned int)UmReplyObject;
}
