/*
 * XREFs of EtwpEnableGuid @ 0x14089BB2C
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     EtwpEnableTrace @ 0x140A43BDC (EtwpEnableTrace.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PsGetCurrentThreadProcessId @ 0x140431FB0 (PsGetCurrentThreadProcessId.c)
 *     EtwpEnableMetaProviderGuid @ 0x140434684 (EtwpEnableMetaProviderGuid.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpEventWriteProviderAccessCheckStatus @ 0x140798054 (EtwpEventWriteProviderAccessCheckStatus.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140845A08 (EtwpEventWriteTemplateSessAndProv.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     EtwpUnreferenceDataBlock @ 0x140896A38 (EtwpUnreferenceDataBlock.c)
 *     EtwpApplyTransientFilters @ 0x140897D84 (EtwpApplyTransientFilters.c)
 *     EtwpFreeFilterInfo @ 0x140897E14 (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x140898C50 (EtwpValidateEnableNotification.c)
 *     EtwpCheckGuidAccess @ 0x140898F2C (EtwpCheckGuidAccess.c)
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 *     EtwpIsGuidAllowed @ 0x14089AB9C (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x14089AEF8 (EtwpSendDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14089B4A0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x14089E4C0 (EtwpApplyScopeFilters.c)
 *     EtwpCopySchematizedFilters @ 0x14089E8F4 (EtwpCopySchematizedFilters.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E53C0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpBuildNotificationPacket @ 0x1409EF2A0 (EtwpBuildNotificationPacket.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1409EF4E0 (EtwpTrackDecodeGuidForSession.c)
 *     EtwpAllocDataBlock @ 0x1409FB358 (EtwpAllocDataBlock.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140A11470 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpPreallocateApcPool @ 0x140A39284 (EtwpPreallocateApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x140A64F7C (EtwpReferenceStackLookasideList.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140A6A938 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpEventWriteProviderEnabled @ 0x140A6C92C (EtwpEventWriteProviderEnabled.c)
 *     EtwpCreateUmReplyObject @ 0x140A74164 (EtwpCreateUmReplyObject.c)
 *     EtwpEventWriteCaptureState @ 0x140A85894 (EtwpEventWriteCaptureState.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140AB0B54 (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140AB0CB8 (EtwpCheckCurrentUserProcessAccess.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  ULONG_PTR v7; // r13
  volatile signed __int32 *v8; // rsi
  int v9; // eax
  int updated; // r14d
  unsigned __int16 *v11; // rdi
  __int64 v13; // r12
  volatile signed __int32 *v14; // rax
  __int64 v15; // r8
  int v16; // r9d
  volatile signed __int32 *v17; // rbx
  int v18; // eax
  volatile signed __int32 *v19; // rax
  char v20; // dl
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  _QWORD **v23; // rax
  signed __int64 *v24; // rbx
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt
  struct _KTHREAD *v28; // rax
  __int64 v29; // r15
  unsigned __int64 *v30; // rbx
  __int64 *v31; // rax
  __int64 *v32; // rdi
  bool v33; // zf
  int v34; // ebx
  int v35; // edx
  int v36; // ebx
  unsigned __int8 v37; // al
  _BYTE *v38; // rbx
  __int16 v39; // ax
  unsigned __int8 v40; // al
  unsigned __int8 v41; // dl
  unsigned __int8 v42; // cl
  __int64 v43; // rax
  __int128 v44; // xmm0
  int v45; // ebx
  __int64 v46; // r11
  unsigned int v47; // r8d
  _DWORD *v48; // r9
  __int64 v49; // r11
  __int64 v50; // rcx
  __int32 v51; // ebx
  __int64 v52; // rax
  __int64 v53; // r11
  unsigned int v54; // r8d
  _DWORD *v55; // r9
  __int64 v56; // rcx
  _QWORD *v57; // rax
  int v58; // ebx
  ULONG_PTR v59; // rax
  _QWORD *v60; // r15
  unsigned int v61; // r15d
  const EVENT_DESCRIPTOR *v62; // rbx
  int v63; // ecx
  __int64 v64; // r8
  char v65; // si
  __m256i *Pool2; // rax
  __int16 v67; // cx
  __int64 v68; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v70; // rbx
  bool v71; // al
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct _KTHREAD *v74; // rax
  volatile signed __int32 *v75; // rbx
  __int64 *v76; // rax
  __int64 *v77; // rdi
  __int64 v78; // rcx
  ULONG_PTR v79; // rax
  unsigned int ProcessId; // eax
  __int16 v81; // bx
  struct _KTHREAD *v82; // rax
  __int64 *v83; // rax
  __int64 *v84; // rdi
  int v85; // ecx
  __int16 v86; // cx
  __int64 v87; // r8
  signed __int64 v88; // rax
  signed __int64 v89; // rdx
  __int64 v90; // rtt
  __int64 v91; // rcx
  int v92; // eax
  int v93; // r12d
  _DWORD *v94; // rdx
  unsigned __int8 i; // cl
  __int64 v96; // rcx
  unsigned int v97; // r11d
  int v98; // r14d
  unsigned int v99; // ebx
  struct _KTHREAD *CurrentThread; // rax
  GUID *v101; // rbx
  int CurrentThreadProcessId; // eax
  char v103; // si
  unsigned int v104; // r14d
  unsigned int v105; // r8d
  GUID *v106; // rdx
  _QWORD *GuidEntryByGuid; // rax
  unsigned int v108; // r15d
  __int64 v109; // rcx
  _QWORD *v110; // rax
  __int64 v111; // r10
  _BYTE *v112; // r8
  _DWORD *v113; // rdx
  __int64 v114; // rcx
  int v115; // eax
  __int64 v116; // rcx
  signed __int32 v117; // eax
  __int64 v118; // rcx
  signed __int32 v119; // ett
  volatile signed __int64 *v120; // rbx
  signed __int64 v121; // rax
  signed __int64 v122; // rdx
  const EVENT_DESCRIPTOR *v123; // rsi
  __int64 v124; // r8
  signed __int64 *v125; // rbx
  signed __int64 v126; // rax
  signed __int64 v127; // rdx
  signed __int64 v128; // rtt
  unsigned int v129; // [rsp+28h] [rbp-D8h]
  char v130; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v131; // [rsp+51h] [rbp-AFh]
  unsigned __int8 v132; // [rsp+51h] [rbp-AFh]
  char v133; // [rsp+52h] [rbp-AEh] BYREF
  _WORD v134[6]; // [rsp+53h] [rbp-ADh] BYREF
  void *Source1; // [rsp+60h] [rbp-A0h]
  unsigned int v136; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v137; // [rsp+70h] [rbp-90h] BYREF
  __int16 v138; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v139; // [rsp+80h] [rbp-80h]
  __int64 v140; // [rsp+88h] [rbp-78h]
  int v141; // [rsp+90h] [rbp-70h]
  int v142; // [rsp+94h] [rbp-6Ch]
  volatile signed __int32 *v143; // [rsp+98h] [rbp-68h]
  GUID *v144; // [rsp+A0h] [rbp-60h]
  _QWORD *v145; // [rsp+A8h] [rbp-58h]
  void *v146; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v147; // [rsp+B8h] [rbp-48h] BYREF
  int v148; // [rsp+C8h] [rbp-38h]
  __int64 v149; // [rsp+D0h] [rbp-30h]
  __int64 v150; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v151; // [rsp+E0h] [rbp-20h]
  PVOID Object; // [rsp+E8h] [rbp-18h]
  _QWORD **v153; // [rsp+F0h] [rbp-10h]
  __int64 v154; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+100h] [rbp+0h] BYREF
  __int64 v156; // [rsp+120h] [rbp+20h]
  size_t Size; // [rsp+128h] [rbp+28h]
  _QWORD v158[14]; // [rsp+130h] [rbp+30h] BYREF
  __int128 Src; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v160; // [rsp+1B0h] [rbp+B0h]
  __m256i v161; // [rsp+1C0h] [rbp+C0h]
  _OWORD v162[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v163; // [rsp+200h] [rbp+100h]
  __int64 v164; // [rsp+210h] [rbp+110h]
  struct _KAPC_STATE ApcState; // [rsp+218h] [rbp+118h] BYREF
  _BYTE v166[4]; // [rsp+248h] [rbp+148h] BYREF
  _BYTE v167[8]; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v168; // [rsp+254h] [rbp+154h]

  v140 = a2;
  v154 = 0LL;
  v3 = a2 + 72;
  v144 = (GUID *)(a2 + 40);
  Object = 0LL;
  v146 = 0LL;
  v142 = 0;
  v134[1] = 0;
  v130 = 0;
  v148 = 0;
  v156 = a2 + 72;
  LOBYTE(v141) = 0;
  v7 = 0LL;
  LOBYTE(v134[0]) = 0;
  v147 = 0LL;
  v8 = 0LL;
  v137 = 0LL;
  Source1 = 0LL;
  memset_0(v158, 0, 0x68uLL);
  v9 = *(_DWORD *)(v3 + 8) & 0x20;
  v138 = 0;
  *(_DWORD *)((char *)&v134[2] + 1) = v9;
  LOBYTE(v134[2]) = v9 != 0 ? 2 : 0;
  updated = EtwpValidateEnableNotification(a1, a2, a3, (__int64)&v147, (__int64 *)&v137, (__int64)v158);
  if ( updated < 0 )
  {
LABEL_2:
    v11 = v137;
    goto LABEL_3;
  }
  v97 = *(_DWORD *)v3;
  v136 = v97;
  if ( v97 == 2 )
  {
    v98 = a2 + 40;
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE) )
      EtwpEventWriteCaptureState(v116, v3, a2 + 40);
    v97 = v136;
  }
  else
  {
    v98 = a2 + 40;
  }
  v99 = *(_DWORD *)(a2 + 116);
  if ( v99 - 1 <= 1 )
  {
    v111 = *(unsigned int *)(a2 + 116);
    v112 = &v166[-a2 - 120];
    v113 = (_DWORD *)(a2 + 128);
    do
    {
      v114 = a2 + *((_QWORD *)v113 - 1);
      *(_DWORD *)&v167[(_QWORD)v113 - 120 - a2] = v113[1];
      v115 = *v113;
      *(_QWORD *)((char *)v113 + (_QWORD)v112 - 8) = v114;
      *(_DWORD *)((char *)v113 + (_QWORD)v112) = v115;
      v113 += 4;
      --v111;
    }
    while ( v111 );
  }
  else
  {
    v99 = 0;
    v168 = 0;
  }
  if ( *(_DWORD *)((char *)&v134[2] + 1) )
  {
    v11 = v137;
    v101 = v144;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    updated = EtwpEnableDisableSpecialGuids(
                a1,
                v98,
                *(unsigned __int16 *)(v3 + 6),
                v97,
                *(_DWORD *)(v3 + 16),
                (__int64)v166,
                v99,
                (__int64)&v134[1] + 1);
    KeLeaveCriticalRegion();
    v11 = v137;
    if ( HIBYTE(v134[1]) )
      goto LABEL_3;
    v129 = v99;
    v101 = v144;
    updated = EtwpEnableMetaProviderGuid((__int64)v137, (__int64)v144, v136, *(_QWORD *)(v3 + 16), (__int64)v166, v129);
    if ( updated != -1073741163 )
      goto LABEL_3;
    v8 = (volatile signed __int32 *)Source1;
  }
  if ( (*(_WORD *)(v3 + 6) & 0xFFFD) == 0 )
  {
    updated = -1073741790;
    goto LABEL_116;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v103 = BYTE2(v148);
  v104 = LOBYTE(v134[2]);
  v33 = BYTE2(v148) == 0;
  v105 = LOBYTE(v134[2]);
  *(_DWORD *)(v140 + 36) = CurrentThreadProcessId;
  v106 = (GUID *)&PrivateLoggerNotificationGuid;
  if ( v33 )
    v106 = v101;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v106, v105);
  if ( GuidEntryByGuid )
  {
    v108 = v136;
    updated = 0;
    if ( v136 == 1 || (v7 = (ULONG_PTR)GuidEntryByGuid, !v136) )
    {
      v7 = (ULONG_PTR)GuidEntryByGuid;
      if ( v11 )
      {
        v109 = *(_QWORD *)&EventTracingProvGuid.Data1 - *(_QWORD *)&v144->Data1;
        if ( *(_QWORD *)&EventTracingProvGuid.Data1 == *(_QWORD *)&v144->Data1 )
          v109 = *(_QWORD *)EventTracingProvGuid.Data4 - *(_QWORD *)v144->Data4;
        if ( !v109 )
        {
          v123 = (const EVENT_DESCRIPTOR *)ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING;
          if ( v136 != 1 )
            v123 = &ETW_EVENT_TRACING_PROVIDER_DISABLING;
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v123) )
          {
            if ( v108 == 1 )
              EtwpEventWriteProviderEnabled(
                (unsigned int)&EventTracingProvGuid,
                (_DWORD)v123,
                v124,
                (_DWORD)v11 + 136,
                (__int64)&EventTracingProvGuid,
                *(_QWORD *)(v3 + 16),
                *(_QWORD *)(v3 + 24),
                *(_DWORD *)(v3 + 8),
                *(_BYTE *)(v3 + 4));
            else
              EtwpEventWriteTemplateSessAndProv(
                (__int64)&EventTracingProvGuid,
                v123,
                v124,
                2,
                v11 + 68,
                (ULONGLONG)&EventTracingProvGuid);
          }
        }
      }
    }
  }
  else
  {
    if ( v103 || v136 != 1 )
    {
      updated = -1073741163;
      goto LABEL_3;
    }
    v110 = EtwpAddGuidEntry(a1, v144, v104);
    updated = 0;
    v7 = (ULONG_PTR)v110;
    if ( !v110 )
    {
      updated = -1073741801;
      goto LABEL_3;
    }
    v108 = v136;
  }
  v82 = KeGetCurrentThread();
  --v82->KernelApcDisable;
  v83 = KeAbPreAcquire(v7 + 408, 0LL);
  v84 = v83;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 408), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 408), v83, v7 + 408);
  if ( v84 )
    *((_BYTE *)v84 + 10) = 1;
  v65 = 1;
  v85 = *(_DWORD *)((char *)&v134[2] + 1);
  *(_QWORD *)(v7 + 416) = KeGetCurrentThread();
  LOBYTE(v134[1]) = 1;
  if ( v108 == 1 && (*(_BYTE *)(v7 + 91) & 1) != 0 && !v85 && *(_WORD *)(v3 + 6) != *(_WORD *)(v7 + 88) )
  {
    v91 = 0x4719A4EB910C653DLL - *(_QWORD *)(v7 + 40);
    if ( *(_QWORD *)(v7 + 40) == 0x4719A4EB910C653DLL )
      v91 = 0x91ECBAE3884509B9uLL - *(_QWORD *)(v7 + 48);
    if ( !v91 )
    {
      updated = -1073741053;
      goto LABEL_201;
    }
    v85 = *(_DWORD *)((char *)&v134[2] + 1);
  }
  v11 = v137;
  if ( v137 && (*((_DWORD *)v137 + 204) & 0x40) != 0 )
  {
    updated = -1073741162;
    goto LABEL_201;
  }
  if ( v85 )
  {
    updated = EtwpAcquireTokenAccessInformation(v137);
    if ( updated )
      goto LABEL_201;
    updated = 0;
  }
  v21 = v140;
  *(_DWORD *)(v140 + 112) = v108;
  v86 = *(_WORD *)(v3 + 6);
  *(_WORD *)(v21 + 104) = v86;
  *(_BYTE *)(v21 + 106) = *(_BYTE *)(v3 + 4);
  *(_DWORD *)(v21 + 108) = *(_DWORD *)(v3 + 16);
  v87 = *(_QWORD *)(v3 + 16);
  if ( BYTE2(v148) )
  {
    *(_BYTE *)(v21 + 107) = 1;
    *(_WORD *)(v21 + 104) = v86 & 0x7FFF;
  }
  if ( !*(_QWORD *)(v3 + 16) )
    *(_QWORD *)(v3 + 16) = -1LL;
  if ( !*(_BYTE *)(v3 + 4) )
    *(_BYTE *)(v3 + 4) = -1;
  if ( v108 != 2 && !BYTE2(v148) )
  {
    updated = EtwpUpdateGuidEnableInfo((PVOID)v7, (__int64)v134);
    if ( updated < 0 )
      goto LABEL_201;
    *(_OWORD *)v3 = *(_OWORD *)(v7 + 96);
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v7 + 112);
    if ( (*(_DWORD *)(v3 + 8) & 4) != 0 )
    {
      EtwpPreallocateApcPool(v11 + 416);
      _m_prefetchw(v11 + 408);
      v117 = *((_DWORD *)v11 + 204);
      do
      {
        v118 = v117 | 0x2000u;
        v119 = v117;
        v117 = _InterlockedCompareExchange((volatile signed __int32 *)v11 + 204, v118, v117);
      }
      while ( v119 != v117 );
      if ( (v117 & 0x2000) == 0 )
        EtwpReferenceStackLookasideList(v118, 0x2000LL);
      v11 = v137;
    }
    updated = 0;
  }
  if ( *(_QWORD *)(v7 + 56) == v7 + 56 && (*(_QWORD *)(v7 + 400) || *(_QWORD *)(v7 + 16) == v7 + 16) )
  {
LABEL_201:
    *(_QWORD *)(v7 + 416) = 0LL;
    _m_prefetchw((const void *)(v7 + 408));
    v88 = *(_QWORD *)(v7 + 408);
    v89 = v88 - 16;
    if ( (v88 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v89 = 0LL;
    if ( (v88 & 2) != 0
      || (v90 = *(_QWORD *)(v7 + 408),
          v90 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 408), v89, v88)) )
    {
      ExfReleasePushLock((_QWORD *)(v7 + 408));
    }
    KeAbPostRelease(v7 + 408);
    KeLeaveCriticalRegion();
    goto LABEL_2;
  }
  if ( *(_BYTE *)(v21 + 12) )
  {
    updated = EtwpCreateUmReplyObject(v7, (__int64)&v154);
    if ( updated < 0 )
      goto LABEL_201;
    *(_QWORD *)(v21 + 24) = Object;
  }
  LOBYTE(v87) = -1;
  if ( (int)EtwpBuildNotificationPacket(v7, v21, v87, &v146) < 0 )
  {
    updated = -1073741801;
    goto LABEL_119;
  }
  v92 = EtwpAllocDataBlock(*((unsigned int *)v146 + 1), v146);
  v8 = (volatile signed __int32 *)Source1;
  if ( v92 < 0 )
  {
    updated = -1073741801;
    goto LABEL_116;
  }
  v93 = v141;
  v94 = (_DWORD *)(v7 + 128);
  v143 = (volatile signed __int32 *)Source1;
  for ( i = 0; i < 8u; ++i )
  {
    if ( *v94 )
      v93 = (unsigned __int8)v93 | (1 << i);
    v94 += 8;
  }
  v141 = v93;
  v13 = v21 + 72;
  HIBYTE(v134[0]) = 0;
  v150 = 0LL;
  if ( !*(_QWORD *)(v7 + 400) )
  {
    v96 = *(_QWORD *)(v7 + 16);
    if ( v96 != v7 + 16 )
      v150 = v96 - 16;
  }
  v79 = v7;
  updated = -1073741801;
  v151 = v7;
  while ( 2 )
  {
    v20 = v130;
    v23 = (_QWORD **)(v79 + 56);
    v153 = v23;
    v22 = *v23;
    v145 = *v23;
    while ( v22 != v23 )
    {
      if ( *(_DWORD *)((char *)&v134[2] + 1) )
      {
        v28 = KeGetCurrentThread();
        v29 = (__int64)(v22 - 2);
        --v28->KernelApcDisable;
        v30 = (unsigned __int64 *)(v22[2] + 408LL);
        v31 = KeAbPreAcquire((__int64)v30, 0LL);
        v32 = v31;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v30, 0LL) )
          ExfAcquirePushLockExclusiveEx(v30, v31, (__int64)v30);
        if ( v32 )
          *((_BYTE *)v32 + 10) = 1;
        v20 = 1;
        v11 = v137;
        v8 = (volatile signed __int32 *)Source1;
        v21 = v140;
        v130 = 1;
        *(_QWORD *)(v145[2] + 416LL) = KeGetCurrentThread();
        v22 = v145;
      }
      else
      {
        v29 = (__int64)v22;
      }
      v33 = (*(_BYTE *)(v29 + 98) & 1) == 0;
      v34 = *(_DWORD *)(v21 + 72);
      v145 = (_QWORD *)*v22;
      v139 = (volatile signed __int32 *)v11;
      if ( !v33 && *(_WORD *)((char *)&v148 + 1) )
        goto LABEL_22;
      if ( v34 == 2 || (v35 = 0, BYTE2(v148)) )
      {
        v71 = EtwpApplyTransientFilters(v29, v158);
        v35 = 0;
        if ( !v71 )
          goto LABEL_95;
      }
      if ( (*(_BYTE *)(v29 + 98) & 8) != 0 )
      {
        if ( *(_DWORD *)((char *)&v134[2] + 1) )
          goto LABEL_95;
        if ( HIBYTE(v134[0]) )
          goto LABEL_95;
        if ( !v34 )
        {
          v35 = v140;
          if ( *(_WORD *)(v140 + 104) != *(_WORD *)(*(_QWORD *)(v29 + 32) + 88LL) )
            goto LABEL_95;
        }
      }
      if ( BYTE2(v148) )
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(v29 + 80)) )
          goto LABEL_95;
LABEL_83:
        v36 = *(_DWORD *)((char *)&v134[2] + 1);
        goto LABEL_43;
      }
      v36 = *(_DWORD *)((char *)&v134[2] + 1);
      if ( *(_DWORD *)((char *)&v134[2] + 1)
        && !EtwpIsGuidAllowed((__int64)v11, (const void *)(*(_QWORD *)(v29 + 32) + 40LL)) )
      {
        goto LABEL_95;
      }
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      if ( (_BYTE)v148 && (*(_BYTE *)(v29 + 98) & 1) == 0 )
      {
        v56 = *(_QWORD *)(v29 + 80);
        SubjectContext.ProcessAuditId = *(PVOID *)(v56 + 464);
        SubjectContext.ClientToken = 0LL;
        v57 = (_QWORD *)PsReferencePrimaryTokenWithTag(v56, 0x75536553u);
        SubjectContext.PrimaryToken = v57;
        if ( SeTokenLeakTracking )
        {
          if ( v57 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v57[143] + 284LL));
            if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
              __debugbreak();
            v8 = (volatile signed __int32 *)Source1;
            v11 = v137;
          }
          if ( SubjectContext.ClientToken )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext.ClientToken + 143) + 284LL));
            if ( SubjectContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
              __debugbreak();
            v8 = (volatile signed __int32 *)Source1;
            v11 = v137;
          }
        }
        v58 = EtwpCheckGuidAccess((__int64)&v147, 0x200u, &SubjectContext);
        SeReleaseSubjectContext(&SubjectContext);
        if ( v58 )
        {
          if ( v58 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_ACCESS_DENIED) )
            EtwpEventWriteProviderAccessCheckStatus(v73, v72, v15, v29, (__int64)v139, v58);
LABEL_95:
          v20 = v130;
          goto LABEL_22;
        }
        goto LABEL_83;
      }
LABEL_43:
      v139 = (volatile signed __int32 *)v146;
      if ( BYTE2(v148) )
      {
        ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v29 + 80));
        if ( (unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(v13 + 6) & 0x7FFF, &v138) )
          goto LABEL_95;
        v81 = v138;
        if ( v138 != *((_WORD *)v8 + 39) )
        {
          if ( (int)EtwpAllocDataBlock(*((unsigned int *)v139 + 1), v146) < 0 )
          {
            v8 = v143;
            Source1 = (void *)v143;
            if ( v130 )
            {
              *(_QWORD *)(*(_QWORD *)(v29 + 32) + 416LL) = 0LL;
              v125 = (signed __int64 *)(*(_QWORD *)(v29 + 32) + 408LL);
              _m_prefetchw(v125);
              v126 = *v125;
              v127 = *v125 - 16;
              if ( (*v125 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v127 = 0LL;
              if ( (v126 & 2) != 0 || (v128 = *v125, v128 != _InterlockedCompareExchange64(v125, v127, v126)) )
                ExfReleasePushLock(v125);
              KeAbPostRelease((ULONG_PTR)v125);
              KeLeaveCriticalRegion();
              v11 = v137;
              v8 = (volatile signed __int32 *)Source1;
            }
            goto LABEL_116;
          }
          EtwpUnreferenceDataBlock(v143);
          v8 = (volatile signed __int32 *)Source1;
          v143 = (volatile signed __int32 *)Source1;
          *((_WORD *)Source1 + 39) = v81 | 0x8000;
          *((_WORD *)v8 + 52) = v81;
        }
        v19 = v8;
        goto LABEL_19;
      }
      if ( v136 == 2 )
      {
LABEL_138:
        v67 = *(_WORD *)(v29 + 98);
        if ( (v67 & 8) != 0 || (v67 & 0x10) != 0 || (*((_DWORD *)v11 + 204) & 0x2000000) != 0 )
        {
          if ( (v67 & 1) != 0 )
          {
            EtwpProviderArrivalCallback((__int64)v11, 0, v29);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v29 + 80) + 488LL)) )
          {
            v68 = *(_QWORD *)(v29 + 80);
            memset(&ApcState, 0, sizeof(ApcState));
            ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v68);
            v70 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KeStackAttachProcess(*(PRKPROCESS *)(v29 + 80), &ApcState);
            EtwpProviderArrivalCallback((__int64)v11, 1, v29);
            KiUnstackDetachProcess((__int64)&ApcState, 0LL);
            PsDetachSiloFromCurrentThread(v70);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v29 + 80) + 488LL));
          }
        }
        goto LABEL_18;
      }
      if ( !HIBYTE(v134[0]) )
      {
        v133 = 0;
        if ( v36 )
        {
          v37 = *(_BYTE *)(v29 + 101);
          v38 = (_BYTE *)(v29 + 101);
        }
        else
        {
          v37 = *(_BYTE *)(v29 + 100);
          v38 = (_BYTE *)(v29 + 100);
        }
        goto LABEL_48;
      }
      if ( v36 )
        v37 = *(_BYTE *)(v29 + 103);
      else
        v37 = *(_BYTE *)(v29 + 102);
      LODWORD(v15) = 0;
      v131 = v37;
      v133 = 0;
      if ( v36 )
      {
        v38 = (_BYTE *)(v29 + 103);
LABEL_48:
        v131 = v37;
        goto LABEL_49;
      }
      v38 = (_BYTE *)(v29 + 102);
LABEL_49:
      if ( v136 == 1 )
      {
        LOBYTE(v16) = HIBYTE(v134[0]);
        LOBYTE(v15) = v134[2];
        LOBYTE(v35) = 1;
        v133 = v134[0];
        EtwpApplyScopeFilters(v29, v35, v15, v16, (__int64)&v133);
        v39 = *(_WORD *)(v29 + 98);
        if ( (v39 & 8) != 0 )
        {
          *(_BYTE *)(v29 + 100) = v133;
        }
        else
        {
          if ( (v39 & 0x200) != 0 && v133 && !(unsigned __int8)EtwpTrackDecodeGuidForSession(v11, v29) )
          {
            _InterlockedAnd16((volatile signed __int16 *)(v29 + 98), 0xFDFFu);
            v11 = v137;
            v8 = (volatile signed __int32 *)Source1;
          }
          *v38 = v133 | *v38 & ~LOBYTE(v134[0]);
        }
      }
      else if ( !v136 && (*(_BYTE *)(v29 + 98) & 8) == 0 )
      {
        *v38 &= ~LOBYTE(v134[0]);
      }
      memset_0(&Src, 0, 0x78uLL);
      LODWORD(v15) = *(_DWORD *)((char *)&v134[2] + 1);
      if ( *(_DWORD *)((char *)&v134[2] + 1) )
      {
        if ( HIBYTE(v134[0]) )
          v42 = *(_BYTE *)(v29 + 103);
        else
          v42 = *(_BYTE *)(v29 + 101);
        v41 = 0;
      }
      else
      {
        v40 = *(_BYTE *)(v29 + 102);
        v41 = *(_BYTE *)(v29 + 100);
        v42 = v40;
        if ( !HIBYTE(v134[0]) )
        {
          v42 = *(_BYTE *)(v29 + 100);
          v41 = v40;
        }
      }
      if ( (*(_BYTE *)(v29 + 98) & 8) != 0 )
      {
        if ( v42 || v136 != 1 )
          goto LABEL_92;
        if ( !v131 )
          goto LABEL_133;
      }
      else
      {
        if ( (v134[0] & v131) == 0 && (v42 & v134[0]) == 0 )
          goto LABEL_133;
        if ( (_BYTE)v141 == v42
          && !*(_DWORD *)((char *)&v134[2] + 1)
          && !v41
          && !*(_BYTE *)(v29 + 101)
          && !*(_BYTE *)(v29 + 103) )
        {
          goto LABEL_92;
        }
      }
      v43 = *(_QWORD *)(v29 + 32);
      Src = *(_OWORD *)v8;
      v160 = *((_OWORD *)v8 + 1);
      v161 = *(__m256i *)((_BYTE *)v8 + 1);
      *(_QWORD *)&v162[0] = *((_QWORD *)v8 + 8);
      v44 = *(_OWORD *)(v43 + 40);
      *(_QWORD *)((char *)&Src + 4) = 0x100000078LL;
      v45 = 0;
      *(_OWORD *)&v161.m256i_u64[1] = v44;
      v46 = *(_QWORD *)(v43 + 384);
      if ( v46 )
      {
        v47 = 0;
        v48 = (_DWORD *)(v43 + 128);
        v49 = v46 + 88;
        do
        {
          if ( *v48 && *(_QWORD *)v49 && ((unsigned __int8)(1 << v47) & *(_BYTE *)(v29 + 100)) != 0 )
            v45 += (*(_DWORD *)(*(_QWORD *)v49 + 16LL) + 7) & 0xFFFFFFF8;
          ++v47;
          v48 += 8;
          v49 += 104LL;
        }
        while ( v47 < 8 );
        if ( v45 )
          DWORD1(Src) = v45 + 136;
      }
      EtwpComputeRegEntryEnableInfo(v29, (__int64)v162 + 8);
      if ( (*(_BYTE *)(v29 + 98) & 8) != 0 )
      {
        LODWORD(v164) = 0;
        *((_QWORD *)&v163 + 1) = 0LL;
      }
      if ( !v8 )
        goto LABEL_14;
      if ( *((_DWORD *)v8 + 1) != DWORD1(Src) || RtlCompareMemory((const void *)v8, &Src, 0x78uLL) != 120 )
      {
        v8 = 0LL;
        Source1 = 0LL;
      }
      if ( !v8 )
      {
LABEL_14:
        v50 = *(_QWORD *)(v29 + 32);
        v51 = 0;
        v132 = *(_BYTE *)(v29 + 100);
        v149 = v50;
        v52 = *(_QWORD *)(v50 + 384);
        if ( !v52 )
          goto LABEL_11;
        v53 = v52 + 88;
        v54 = 0;
        v55 = (_DWORD *)(v50 + 128);
        do
        {
          if ( *v55 && *(_QWORD *)v53 && ((unsigned __int8)(1 << v54) & v132) != 0 )
            v51 += (*(_DWORD *)(*(_QWORD *)v53 + 16LL) + 7) & 0xFFFFFFF8;
          ++v54;
          v55 += 8;
          v53 += 104LL;
        }
        while ( v54 < 8 );
        v13 = v156;
        if ( v51 )
        {
          Pool2 = (__m256i *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
            goto LABEL_133;
          v8 = (volatile signed __int32 *)Pool2;
          Pool2->m256i_i32[2] = 1;
          Source1 = Pool2;
          *(_OWORD *)Pool2->m256i_i8 = Src;
          *(_OWORD *)&Pool2->m256i_u64[2] = v160;
          Pool2[1] = v161;
          *(_OWORD *)Pool2[2].m256i_i8 = v162[0];
          *(_OWORD *)&Pool2[2].m256i_u64[2] = v162[1];
          *(_OWORD *)Pool2[3].m256i_i8 = v163;
          Pool2[3].m256i_i64[2] = v164;
          Pool2[3].m256i_i32[5] = 1;
          Pool2->m256i_i32[2] = 1;
          Pool2->m256i_i32[1] = v51 + 136;
          Pool2[4].m256i_i32[1] = 0x80000000;
          Pool2[4].m256i_i32[0] = v51;
          Pool2[3].m256i_i64[3] = 136LL;
          EtwpCopySchematizedFilters(&Pool2[4].m256i_u64[1]);
        }
        else
        {
LABEL_11:
          v8 = 0LL;
          LODWORD(v149) = 0;
          Source1 = 0LL;
          Size = DWORD1(Src);
          v14 = (volatile signed __int32 *)ExAllocatePool2(0x100uLL);
          v17 = v14;
          if ( v14 )
          {
            memmove((void *)v14, &Src, Size);
            v18 = v149;
            v8 = v17;
            *((_DWORD *)v17 + 2) = 1;
            Source1 = (void *)v17;
          }
          else
          {
            v18 = -1073741801;
          }
          if ( v18 < 0 )
          {
LABEL_133:
            v20 = v130;
            if ( !v8 )
            {
              v8 = v143;
              Source1 = (void *)v143;
            }
            goto LABEL_22;
          }
        }
        if ( !v8 )
        {
LABEL_92:
          v8 = v143;
          Source1 = (void *)v143;
          goto LABEL_17;
        }
      }
      v139 = v8;
      if ( v8 != v143 )
      {
        EtwpUnreferenceDataBlock(v143);
        v143 = v8;
      }
LABEL_17:
      if ( v136 == 1 )
        goto LABEL_138;
LABEL_18:
      v19 = v139;
LABEL_19:
      if ( (int)EtwpSendDataBlock(v29, v19) < 0 )
        goto LABEL_95;
      v20 = v130;
      if ( (*(_BYTE *)(v29 + 98) & 2) != 0 )
        ++v142;
LABEL_22:
      v21 = v140;
      v22 = v145;
      v23 = v153;
      if ( v20 )
      {
        *(_QWORD *)(*(_QWORD *)(v29 + 32) + 416LL) = 0LL;
        v24 = (signed __int64 *)(*(_QWORD *)(v29 + 32) + 408LL);
        _m_prefetchw(v24);
        v25 = *v24;
        v26 = *v24 - 16;
        if ( (*v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v26 = 0LL;
        if ( (v25 & 2) != 0 || (v27 = *v24, v27 != _InterlockedCompareExchange64(v24, v26, v25)) )
          ExfReleasePushLock(v24);
        KeAbPostRelease((ULONG_PTR)v24);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v11 = v137;
        v20 = 0;
        v8 = (volatile signed __int32 *)Source1;
        v21 = v140;
        v22 = v145;
        v23 = v153;
        v130 = 0;
      }
    }
    v59 = v151;
    if ( v151 != v7 )
    {
      *(_QWORD *)(v151 + 416) = 0LL;
      v120 = (volatile signed __int64 *)(v59 + 408);
      _m_prefetchw((const void *)(v59 + 408));
      v121 = *(_QWORD *)(v59 + 408);
      v122 = v121 - 16;
      if ( (v121 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v122 = 0LL;
      if ( (v121 & 2) != 0 || v121 != _InterlockedCompareExchange64(v120, v122, v121) )
        ExfReleasePushLock(v120);
      KeAbPostRelease((ULONG_PTR)v120);
      KeLeaveCriticalRegion();
      v11 = v137;
      v8 = (volatile signed __int32 *)Source1;
      v21 = v140;
    }
    v60 = (_QWORD *)v150;
    if ( v150 )
    {
      v74 = KeGetCurrentThread();
      v75 = (volatile signed __int32 *)(v150 + 408);
      HIBYTE(v134[0]) = 1;
      v151 = v150;
      --v74->KernelApcDisable;
      v76 = KeAbPreAcquire((__int64)(v60 + 51), 0LL);
      v77 = v76;
      if ( _interlockedbittestandset64(v75, 0LL) )
        ExfAcquirePushLockExclusiveEx(v60 + 51, v76, (__int64)(v60 + 51));
      if ( v77 )
        *((_BYTE *)v77 + 10) = 1;
      v11 = v137;
      v8 = (volatile signed __int32 *)Source1;
      v21 = v140;
      v60[52] = KeGetCurrentThread();
      v78 = 0LL;
      if ( v60[2] - 16LL != v7 )
        v78 = v60[2] - 16LL;
      v79 = v151;
      v150 = v78;
      continue;
    }
    break;
  }
  updated = 0;
  *(_DWORD *)(v21 + 20) = v142;
  *(_QWORD *)(v21 + 24) = v154;
  if ( v11 )
  {
    v61 = v136;
    if ( v136 <= 1 )
    {
      v62 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
      if ( v136 != 1 )
        v62 = &ETW_EVENT_PROVIDER_DISABLED;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v62) )
      {
        if ( v61 == 1 )
          EtwpEventWriteProviderEnabled(
            v63,
            (_DWORD)v62,
            v64,
            (_DWORD)v11 + 136,
            (__int64)v144,
            *(_QWORD *)(v13 + 16),
            *(_QWORD *)(v13 + 24),
            *(_DWORD *)(v13 + 8),
            *(_BYTE *)(v13 + 4));
        else
          EtwpEventWriteTemplateSessAndProv((__int64)v144, v62, v64, 2, v11 + 68, (ULONGLONG)v144);
      }
    }
  }
LABEL_116:
  if ( v8 )
    EtwpUnreferenceDataBlock(v8);
  v65 = v134[1];
LABEL_119:
  if ( v146 )
    EtwpUnreferenceDataBlock((volatile signed __int32 *)v146);
  if ( v65 )
    goto LABEL_201;
LABEL_3:
  if ( v11 )
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v11 + 170) + 448LL) + 8LL * *(unsigned int *)v11),
      1u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
    EtwpUnreferenceGuidEntry((PVOID)v7);
  EtwpFreeFilterInfo(v158);
  return (unsigned int)updated;
}
