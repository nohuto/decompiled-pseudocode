/*
 * XREFs of EtwpEnableGuid @ 0x140A3EA20
 * Callers:
 *     EtwpEnableTrace @ 0x140A3E5DC (EtwpEnableTrace.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     EtwpEnableMetaProviderGuid @ 0x1404233C0 (EtwpEnableMetaProviderGuid.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpBuildNotificationPacket @ 0x1408321B8 (EtwpBuildNotificationPacket.c)
 *     EtwpAllocDataBlock @ 0x140832D04 (EtwpAllocDataBlock.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140832DA0 (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpIsRegEntryAllowed @ 0x140832F04 (EtwpIsRegEntryAllowed.c)
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140834F58 (EtwpFreeFilterInfo.c)
 *     EtwpValidateEnableNotification @ 0x1408361F8 (EtwpValidateEnableNotification.c)
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x1408376F0 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140838494 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14083DF8C (EtwpEventWriteTemplateSessAndProv.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     EtwpPreallocateApcPool @ 0x1409CF784 (EtwpPreallocateApcPool.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E7D3C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpEnableDisableSpecialGuids @ 0x140A0EA2C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 *     EtwpReferenceStackLookasideList @ 0x140A60F90 (EtwpReferenceStackLookasideList.c)
 *     EtwpEventWriteProviderEnabled @ 0x140A68000 (EtwpEventWriteProviderEnabled.c)
 *     EtwpCreateUmReplyObject @ 0x140A703BC (EtwpCreateUmReplyObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpEnableGuid(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  int v4; // esi
  ULONG_PTR v6; // r12
  unsigned __int8 v8; // r14
  int InformationToken; // edi
  unsigned int v10; // r12d
  _QWORD *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // r8
  _BYTE *v15; // r10
  _BYTE *v16; // r9
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v21; // rbx
  int CurrentThreadProcessId; // eax
  char v24; // si
  GUID *v25; // rdx
  _QWORD *GuidEntryByGuid; // rax
  ULONG_PTR v27; // rdi
  unsigned int v28; // r15d
  const EVENT_DESCRIPTOR *v29; // rsi
  __int64 v30; // r8
  struct _KTHREAD *v31; // rax
  char *v32; // rax
  char *v33; // rdi
  int v34; // r14d
  unsigned __int64 *v35; // rsi
  char *v36; // rax
  char *v37; // rbx
  __int64 v38; // rdi
  void *v39; // rcx
  void *v40; // rbx
  __int16 v41; // cx
  char v42; // al
  __int64 v43; // r8
  __int64 v44; // rbx
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  volatile signed __int32 *v47; // rsi
  _DWORD *v48; // rdx
  int v49; // r15d
  unsigned __int8 i; // cl
  char v51; // di
  unsigned int v52; // r15d
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  _QWORD *v55; // r12
  __int64 v56; // rbx
  struct _KTHREAD *v57; // rax
  unsigned __int64 *v58; // rdi
  char *v59; // rax
  char *v60; // r14
  __int64 v61; // r9
  void *v62; // r14
  unsigned __int16 v63; // r15
  __int16 v64; // ax
  struct _EX_RUNDOWN_REF *v65; // rcx
  unsigned __int64 v66; // rtt
  __int64 v67; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v69; // rdi
  __int64 v70; // r9
  __int64 v71; // r8
  __int64 v72; // r9
  struct _EX_RUNDOWN_REF *v73; // rcx
  unsigned __int64 v74; // rtt
  unsigned int ProcessId; // eax
  unsigned int v76; // r15d
  _DWORD *Pool2; // rax
  _DWORD *v78; // rdi
  unsigned __int16 v79; // cx
  signed __int64 *v80; // rbx
  signed __int64 v81; // rax
  signed __int64 v82; // rdx
  signed __int64 v83; // rtt
  volatile signed __int64 *v84; // rbx
  signed __int64 v85; // rax
  signed __int64 v86; // rdx
  struct _KTHREAD *v87; // rax
  unsigned __int64 *v88; // rbx
  __int64 v89; // rcx
  char *v90; // rax
  char *v91; // rdi
  _QWORD *v92; // rcx
  __int64 v93; // rax
  _QWORD *v94; // rcx
  _QWORD *v95; // rax
  signed __int64 *v96; // rbx
  signed __int64 v97; // rax
  signed __int64 v98; // rdx
  signed __int64 v99; // rtt
  __int64 v100; // rbx
  const EVENT_DESCRIPTOR *v101; // rsi
  int v102; // ecx
  __int64 v103; // r8
  signed __int64 v104; // rax
  signed __int64 v105; // rdx
  __int64 v106; // rtt
  unsigned int v107; // [rsp+28h] [rbp-D8h]
  char v108; // [rsp+50h] [rbp-B0h]
  char v109; // [rsp+51h] [rbp-AFh]
  char v110; // [rsp+52h] [rbp-AEh]
  char v111; // [rsp+53h] [rbp-ADh] BYREF
  unsigned int v112; // [rsp+54h] [rbp-ACh]
  unsigned int *v113; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v114[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v115; // [rsp+64h] [rbp-9Ch]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-90h]
  unsigned __int16 v118; // [rsp+78h] [rbp-88h] BYREF
  int v119; // [rsp+7Ch] [rbp-84h]
  int v120; // [rsp+80h] [rbp-80h]
  void *Src; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v122; // [rsp+98h] [rbp-68h]
  _QWORD *v123; // [rsp+A0h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp-58h]
  __int64 v125; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v126; // [rsp+B8h] [rbp-48h] BYREF
  int v127; // [rsp+C8h] [rbp-38h]
  _DWORD *v128; // [rsp+D0h] [rbp-30h]
  _OWORD v129[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v130; // [rsp+140h] [rbp+40h]
  struct _EVENT_DATA_DESCRIPTOR v131[3]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+180h] [rbp+80h] BYREF
  __int64 v133; // [rsp+190h] [rbp+90h]
  __int64 v134; // [rsp+198h] [rbp+98h]
  __int64 v135; // [rsp+1A0h] [rbp+A0h]
  __int64 v136; // [rsp+1A8h] [rbp+A8h]
  __int64 v137; // [rsp+1B0h] [rbp+B0h]
  __int64 v138; // [rsp+1B8h] [rbp+B8h]
  __int64 v139; // [rsp+1C0h] [rbp+C0h]
  __int64 v140; // [rsp+1C8h] [rbp+C8h]
  __int64 v141; // [rsp+1D0h] [rbp+D0h]
  __int64 v142; // [rsp+1D8h] [rbp+D8h]
  _BYTE v143[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v144[8]; // [rsp+1E4h] [rbp+E4h] BYREF
  int v145; // [rsp+1ECh] [rbp+ECh]

  v3 = a2 + 80;
  v4 = *(_DWORD *)(a2 + 80) & 0x20;
  v109 = 0;
  v115 = v4;
  BugCheckParameter2 = 0LL;
  v127 = 0;
  v6 = 0LL;
  v111 = 0;
  v130 = 0LL;
  v125 = 0LL;
  Object = 0LL;
  Src = 0LL;
  v120 = 0;
  v8 = v4 != 0 ? 2 : 0;
  LOWORD(v119) = 0;
  v118 = 0;
  v113 = 0LL;
  P = 0LL;
  v114[0] = 0;
  v110 = v8;
  v126 = 0LL;
  memset(v129, 0, sizeof(v129));
  InformationToken = EtwpValidateEnableNotification(a1, a2, a3, (__int64)&v126, (__int64 *)&v113, (__int64)v129);
  if ( InformationToken < 0 )
    goto LABEL_17;
  v10 = *(_DWORD *)(a2 + 72);
  v112 = v10;
  if ( v10 == 2 )
  {
    v11 = (_QWORD *)(a2 + 40);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE) )
    {
      v133 = a2 + 78;
      UserData.Ptr = a2 + 40;
      v135 = a2 + 88;
      *(_QWORD *)&UserData.Size = 16LL;
      v137 = a2 + 96;
      v134 = 2LL;
      v139 = a2 + 76;
      v136 = 8LL;
      v138 = 8LL;
      v140 = 1LL;
      v141 = v3;
      v142 = 4LL;
      EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_CAPTURE_STATE, 0LL, 6u, &UserData);
    }
  }
  else
  {
    v11 = (_QWORD *)(a2 + 40);
  }
  v12 = *(_DWORD *)(a2 + 116);
  if ( v12 - 1 > 1 )
  {
    v12 = 0;
    v145 = 0;
  }
  else
  {
    v13 = a2 + 120;
    if ( v12 )
    {
      v14 = v12;
      v15 = &v144[-v13];
      v16 = &v143[-v13];
      v17 = (_DWORD *)(a2 + 128);
      do
      {
        v18 = *((_QWORD *)v17 - 1);
        *(_DWORD *)((char *)v17 + (_QWORD)v15) = v17[1];
        v19 = *v17;
        *(_QWORD *)((char *)v17 + (_QWORD)v16 - 8) = a2 + v18;
        *(_DWORD *)((char *)v17 + (_QWORD)v16) = v19;
        v17 += 4;
        --v14;
      }
      while ( v14 );
    }
  }
  if ( v4 )
  {
    v21 = (unsigned __int16 *)v113;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    InformationToken = EtwpEnableDisableSpecialGuids(
                         a1,
                         v11,
                         *(_WORD *)(a2 + 78),
                         v10,
                         *(_DWORD *)(a2 + 88),
                         (__int64)v143,
                         v12,
                         &v111);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v111 )
    {
      v6 = BugCheckParameter2;
      goto LABEL_17;
    }
    v107 = v12;
    v21 = (unsigned __int16 *)v113;
    InformationToken = EtwpEnableMetaProviderGuid(
                         (__int64)v113,
                         a2 + 40,
                         v10,
                         *(_QWORD *)(a2 + 88),
                         (__int64)v143,
                         v107);
    if ( InformationToken != -1073741163 )
    {
      v6 = BugCheckParameter2;
      goto LABEL_18;
    }
  }
  if ( (*(_WORD *)(a2 + 78) & 0xFFFD) != 0 )
  {
    CurrentThreadProcessId = PsGetCurrentThreadProcessId();
    v24 = BYTE2(v127);
    v25 = (GUID *)&PrivateLoggerNotificationGuid;
    *(_DWORD *)(a2 + 36) = CurrentThreadProcessId;
    if ( !v24 )
      v25 = (GUID *)(a2 + 40);
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v25, v8);
    v27 = (ULONG_PTR)GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      v28 = v10;
      if ( v10 == 1 || (BugCheckParameter2 = (ULONG_PTR)GuidEntryByGuid, v6 = (ULONG_PTR)GuidEntryByGuid, !v28) )
      {
        BugCheckParameter2 = (ULONG_PTR)GuidEntryByGuid;
        v6 = (ULONG_PTR)GuidEntryByGuid;
        if ( v21 )
        {
          BugCheckParameter2 = (ULONG_PTR)GuidEntryByGuid;
          if ( *(_QWORD *)&EventTracingProvGuid.Data1 == *(_QWORD *)(a2 + 40)
            && *(_QWORD *)EventTracingProvGuid.Data4 == *(_QWORD *)(a2 + 48) )
          {
            BugCheckParameter2 = (ULONG_PTR)GuidEntryByGuid;
            v29 = (const EVENT_DESCRIPTOR *)ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING;
            if ( v28 != 1 )
              v29 = &ETW_EVENT_TRACING_PROVIDER_DISABLING;
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v29) )
            {
              if ( v28 == 1 )
                EtwpEventWriteProviderEnabled(
                  (unsigned int)&EventTracingProvGuid,
                  (_DWORD)v29,
                  v30,
                  (_DWORD)v21 + 136,
                  (__int64)&EventTracingProvGuid,
                  *(_QWORD *)(a2 + 88),
                  *(_QWORD *)(a2 + 96),
                  *(_DWORD *)(a2 + 80),
                  *(_BYTE *)(a2 + 76));
              else
                EtwpEventWriteTemplateSessAndProv(
                  (__int64)&EventTracingProvGuid,
                  v29,
                  v30,
                  2,
                  v21 + 68,
                  (ULONGLONG)&EventTracingProvGuid);
              BugCheckParameter2 = v27;
            }
          }
        }
      }
    }
    else
    {
      if ( v24 || v10 != 1 )
      {
        InformationToken = -1073741163;
        v6 = 0LL;
        goto LABEL_18;
      }
      BugCheckParameter2 = (ULONG_PTR)EtwpAddGuidEntry(a1, (_DWORD *)(a2 + 40), v8);
      v6 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
      {
        InformationToken = -1073741801;
        goto LABEL_18;
      }
      v28 = v112;
    }
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v32 = (char *)KeAbPreAcquire(v6 + 664, 0LL);
    v33 = v32;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 664), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 664), v32, v6 + 664);
    if ( v33 )
      v33[10] = 1;
    v34 = v115;
    *(_QWORD *)(v6 + 672) = KeGetCurrentThread();
    if ( v28 == 1
      && (*(_BYTE *)(v6 + 91) & 1) != 0
      && !v34
      && *(_WORD *)(a2 + 78) != *(_WORD *)(v6 + 88)
      && *(_QWORD *)(v6 + 40) == 0x4719A4EB910C653DLL
      && *(_QWORD *)(v6 + 48) == 0x91ECBAE3884509B9uLL )
    {
      InformationToken = -1073741053;
      goto LABEL_199;
    }
    if ( v113 && (v113[204] & 0x40) != 0 )
    {
      InformationToken = -1073741162;
      goto LABEL_199;
    }
    if ( !v34 )
      goto LABEL_72;
    v35 = (unsigned __int64 *)(v113 + 172);
    v36 = (char *)KeAbPreAcquire((__int64)(v113 + 172), 0LL);
    v37 = v36;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0LL) )
      ExfAcquirePushLockExclusiveEx(v35, v36, (__int64)v35);
    if ( v37 )
      v37[10] = 1;
    v38 = (__int64)v113;
    v39 = (void *)*((_QWORD *)v113 + 97);
    if ( v39 )
    {
      ExFreePoolWithTag(v39, 0);
      *(_QWORD *)(v38 + 776) = 0LL;
    }
    v40 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
    InformationToken = SeQueryInformationToken(v40, TokenAccessInformation, (PVOID *)(v38 + 776));
    ObfDereferenceObject(v40);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v35);
    KeAbPostRelease((ULONG_PTR)v35);
    if ( !InformationToken )
    {
LABEL_72:
      *(_DWORD *)(a2 + 112) = v28;
      v41 = *(_WORD *)(a2 + 78);
      *(_WORD *)(a2 + 104) = v41;
      *(_BYTE *)(a2 + 106) = *(_BYTE *)(a2 + 76);
      *(_DWORD *)(a2 + 108) = *(_DWORD *)(a2 + 88);
      v42 = BYTE2(v127);
      v43 = *(_QWORD *)(a2 + 88);
      if ( BYTE2(v127) )
      {
        *(_BYTE *)(a2 + 107) = 1;
        *(_WORD *)(a2 + 104) = v41 & 0x7FFF;
      }
      if ( !v43 )
        *(_QWORD *)(a2 + 88) = -1LL;
      if ( !*(_BYTE *)(a2 + 76) )
        *(_BYTE *)(a2 + 76) = -1;
      if ( v28 != 2 && !v42 )
      {
        InformationToken = EtwpUpdateGuidEnableInfo(v6, a2, v43, (__int64)v129, &v118);
        if ( InformationToken < 0 )
          goto LABEL_199;
        *(_OWORD *)(a2 + 72) = *(_OWORD *)(v6 + 96);
        *(_OWORD *)(a2 + 88) = *(_OWORD *)(v6 + 112);
        if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
        {
          v44 = (__int64)v113;
          EtwpPreallocateApcPool((__int64)(v113 + 208));
          _m_prefetchw((const void *)(v44 + 816));
          v45 = *(_DWORD *)(v44 + 816);
          do
          {
            v46 = v45;
            v45 = _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 816), v45 | 0x2000, v45);
          }
          while ( v46 != v45 );
          if ( (v45 & 0x2000) == 0 )
            EtwpReferenceStackLookasideList();
        }
      }
      if ( *(_QWORD *)(v6 + 56) == v6 + 56 && (*(_QWORD *)(v6 + 656) || *(_QWORD *)(v6 + 16) == v6 + 16) )
      {
        InformationToken = 0;
        goto LABEL_199;
      }
      if ( *(_BYTE *)(a2 + 12) )
      {
        InformationToken = EtwpCreateUmReplyObject(v6, (__int64)&v125);
        if ( InformationToken < 0 )
          goto LABEL_199;
        *(_QWORD *)(a2 + 24) = Object;
      }
      if ( (int)EtwpBuildNotificationPacket(v6, (_OWORD *)a2, 0xFFu, (__int64 *)&Src) < 0 )
      {
        InformationToken = -1073741801;
        goto LABEL_196;
      }
      if ( (int)EtwpAllocDataBlock(*((unsigned int *)Src + 1), Src, &P) < 0 )
      {
        InformationToken = -1073741801;
        goto LABEL_193;
      }
      v47 = (volatile signed __int32 *)P;
      v48 = (_DWORD *)(v6 + 128);
      v49 = v119;
      for ( i = 0; i < 0x10u; ++i )
      {
        if ( *v48 )
          v49 = (unsigned __int16)v49 | (1 << i);
        v48 += 8;
      }
      v51 = 0;
      v119 = v49;
      v52 = v112;
      v108 = 0;
      v122 = 0LL;
      if ( !*(_QWORD *)(v6 + 656) )
      {
        v53 = *(_QWORD *)(v6 + 16);
        if ( v53 != v6 + 16 )
          v122 = (_QWORD *)(v53 - 16);
      }
      v54 = (_QWORD *)v6;
      v123 = (_QWORD *)v6;
      v128 = Src;
      while ( 1 )
      {
        v55 = (_QWORD *)v54[7];
        if ( v55 != v54 + 7 )
          break;
LABEL_162:
        v6 = BugCheckParameter2;
        if ( v54 != (_QWORD *)BugCheckParameter2 )
        {
          v54[84] = 0LL;
          v84 = v54 + 83;
          _m_prefetchw(v54 + 83);
          v85 = v54[83];
          v86 = v85 - 16;
          if ( (v85 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v86 = 0LL;
          if ( (v85 & 2) != 0 || v85 != _InterlockedCompareExchange64(v84, v86, v85) )
            ExfReleasePushLock(v84);
          KeAbPostRelease((ULONG_PTR)v84);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
        if ( !v122 )
        {
          v100 = (__int64)v113;
          InformationToken = 0;
          *(_DWORD *)(a2 + 20) = v120;
          *(_QWORD *)(a2 + 24) = v125;
          if ( v100 && v52 <= 1 )
          {
            v101 = (const EVENT_DESCRIPTOR *)ETW_EVENT_PROVIDER_ENABLED;
            if ( v52 != 1 )
              v101 = &ETW_EVENT_PROVIDER_DISABLED;
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, v101) )
            {
              if ( v52 == 1 )
                EtwpEventWriteProviderEnabled(
                  v102,
                  (_DWORD)v101,
                  v103,
                  v100 + 136,
                  a2 + 40,
                  *(_QWORD *)(a2 + 88),
                  *(_QWORD *)(a2 + 96),
                  *(_DWORD *)(a2 + 80),
                  *(_BYTE *)(a2 + 76));
              else
                EtwpEventWriteTemplateSessAndProv(a2 + 40, v101, v103, 2, (unsigned __int16 *)v113 + 68, a2 + 40);
            }
          }
          goto LABEL_193;
        }
        v87 = KeGetCurrentThread();
        v88 = v122 + 83;
        v123 = v122;
        v108 = 1;
        v89 = (__int64)(v122 + 83);
        --v87->KernelApcDisable;
        v90 = (char *)KeAbPreAcquire(v89, 0LL);
        v91 = v90;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v88, 0LL) )
          ExfAcquirePushLockExclusiveEx(v88, v90, (__int64)v88);
        if ( v91 )
          v91[10] = 1;
        v92 = v122;
        v51 = 1;
        v122[84] = KeGetCurrentThread();
        v93 = v92[2];
        v94 = 0LL;
        v95 = (_QWORD *)(v93 - 16);
        if ( v95 != (_QWORD *)v6 )
          v94 = v95;
        v122 = v94;
        v54 = v123;
      }
      while ( 1 )
      {
        if ( v34 )
        {
          v57 = KeGetCurrentThread();
          v56 = (__int64)(v55 - 2);
          --v57->KernelApcDisable;
          v58 = (unsigned __int64 *)(v55[2] + 664LL);
          v59 = (char *)KeAbPreAcquire((__int64)v58, 0LL);
          v60 = v59;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v58, 0LL) )
            ExfAcquirePushLockExclusiveEx(v58, v59, (__int64)v58);
          if ( v60 )
            v60[10] = 1;
          v51 = v108;
          v109 = 1;
          *(_QWORD *)(v55[2] + 672LL) = KeGetCurrentThread();
        }
        else
        {
          v56 = (__int64)v55;
        }
        v55 = (_QWORD *)*v55;
        if ( !EtwpIsRegEntryAllowed(v56, (__int64)v113, &v126, a2, (__int64)v129, v51, v110) )
          goto LABEL_154;
        v62 = Src;
        if ( BYTE2(v127) )
        {
          ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(v56 + 80));
          if ( !(unsigned int)EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 78) & 0x7FFF, v114) )
          {
            if ( v114[0] != *((_WORD *)P + 39) )
            {
              v76 = v128[1];
              Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v76, 0x44777445u);
              v78 = Pool2;
              if ( !Pool2 )
              {
                P = (PVOID)v47;
                if ( v109 )
                {
                  *(_QWORD *)(*(_QWORD *)(v56 + 32) + 672LL) = 0LL;
                  v96 = (signed __int64 *)(*(_QWORD *)(v56 + 32) + 664LL);
                  _m_prefetchw(v96);
                  v97 = *v96;
                  v98 = *v96 - 16;
                  if ( (*v96 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v98 = 0LL;
                  if ( (v97 & 2) != 0 || (v99 = *v96, v99 != _InterlockedCompareExchange64(v96, v98, v97)) )
                    ExfReleasePushLock(v96);
                  KeAbPostRelease((ULONG_PTR)v96);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                }
                v6 = BugCheckParameter2;
                InformationToken = -1073741801;
LABEL_193:
                if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 2, 0xFFFFFFFF) == 1 )
                  ExFreePoolWithTag(P, 0);
LABEL_196:
                if ( Src && _InterlockedExchangeAdd((volatile signed __int32 *)Src + 2, 0xFFFFFFFF) == 1 )
                  ExFreePoolWithTag(Src, 0);
                break;
              }
              memmove(Pool2, v62, v76);
              v78[2] = 1;
              P = v78;
              if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
                ExFreePoolWithTag((PVOID)v47, 0);
              v79 = v114[0];
              v52 = v112;
              v47 = v78;
              *((_WORD *)v78 + 39) = v114[0] | 0x8000;
              *((_WORD *)v78 + 52) = v79;
            }
            v62 = P;
            goto LABEL_151;
          }
        }
        else
        {
          if ( v52 == 2 )
            goto LABEL_133;
          if ( v51 )
          {
            if ( v115 )
              v63 = *(_WORD *)(v56 + 106);
            else
              v63 = *(_WORD *)(v56 + 104);
          }
          else if ( v115 )
          {
            v63 = *(_WORD *)(v56 + 102);
          }
          else
          {
            v63 = *(_WORD *)(v56 + 100);
          }
          EtwpUpdateRegEntryEnableMask(v56, (__int64)v113, v118, v110, v51, v112);
          if ( EtwpCalculateUpdateNotification(v56, v118, v63, v119, v110, v108, v112, (__int64 *)&P) )
          {
            if ( P )
            {
              v62 = P;
              if ( P != v47 )
              {
                if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
                  ExFreePoolWithTag((PVOID)v47, 0);
                v47 = (volatile signed __int32 *)v62;
              }
            }
            else
            {
              P = (PVOID)v47;
            }
            v52 = v112;
            if ( v112 == 1 )
            {
LABEL_133:
              v64 = *(_WORD *)(v56 + 98);
              if ( (v64 & 8) != 0
                || (v64 & 0x10) != 0
                || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
                && _bittest16((const signed __int16 *)(v56 + 98), 0xAu)
                || (v113[204] & 0x2000000) != 0 )
              {
                if ( (*(_BYTE *)(v56 + 98) & 1) != 0 )
                {
                  EtwpProviderArrivalCallback((__int64)v113, 0, v56, v61);
                }
                else
                {
                  v65 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v56 + 80) + 488LL);
                  _m_prefetchw(v65);
                  v66 = v65->Count & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( v66 == _InterlockedCompareExchange64((volatile signed __int64 *)v65, v66 + 2, v66)
                    || ExfAcquireRundownProtection(v65) )
                  {
                    v67 = *(_QWORD *)(v56 + 80);
                    memset(v131, 0, sizeof(v131));
                    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v67);
                    v69 = PsAttachSiloToCurrentThread(ProcessServerSilo);
                    KiStackAttachProcess(*(_KPROCESS **)(v56 + 80), 0, (__int64)v131);
                    EtwpProviderArrivalCallback((__int64)v113, 1, v56, v70);
                    KiUnstackDetachProcess((__int64)v131, 0, v71, v72);
                    PsDetachSiloFromCurrentThread(v69);
                    v73 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v56 + 80) + 488LL);
                    _m_prefetchw(v73);
                    v74 = v73->Count & 0xFFFFFFFFFFFFFFFEuLL;
                    if ( v74 != _InterlockedCompareExchange64((volatile signed __int64 *)v73, v74 - 2, v74) )
                      ExfReleaseRundownProtection(v73);
                  }
                }
              }
            }
LABEL_151:
            v51 = v108;
            if ( (int)EtwpSendDataBlock(v56, (__int64)v62) >= 0 && (*(_BYTE *)(v56 + 98) & 2) != 0 )
              ++v120;
            goto LABEL_154;
          }
          v52 = v112;
          v51 = v108;
          if ( !P )
            P = (PVOID)v47;
        }
LABEL_154:
        if ( v109 )
        {
          *(_QWORD *)(*(_QWORD *)(v56 + 32) + 672LL) = 0LL;
          v80 = (signed __int64 *)(*(_QWORD *)(v56 + 32) + 664LL);
          _m_prefetchw(v80);
          v81 = *v80;
          v82 = *v80 - 16;
          if ( (*v80 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v82 = 0LL;
          if ( (v81 & 2) != 0 || (v83 = *v80, v83 != _InterlockedCompareExchange64(v80, v82, v81)) )
            ExfReleasePushLock(v80);
          KeAbPostRelease((ULONG_PTR)v80);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v109 = 0;
        }
        v54 = v123;
        v34 = v115;
        if ( v55 == v123 + 7 )
          goto LABEL_162;
      }
    }
LABEL_199:
    *(_QWORD *)(v6 + 672) = 0LL;
    _m_prefetchw((const void *)(v6 + 664));
    v104 = *(_QWORD *)(v6 + 664);
    v105 = v104 - 16;
    if ( (v104 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v105 = 0LL;
    if ( (v104 & 2) != 0
      || (v106 = *(_QWORD *)(v6 + 664),
          v106 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), v105, v104)) )
    {
      ExfReleasePushLock((_QWORD *)(v6 + 664));
    }
    KeAbPostRelease(v6 + 664);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_17:
    v21 = (unsigned __int16 *)v113;
    goto LABEL_18;
  }
  v6 = BugCheckParameter2;
  InformationToken = -1073741790;
LABEL_18:
  if ( v21 )
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v21 + 170) + 704LL) + 8LL * *(unsigned int *)v21),
      1u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v6 )
    EtwpUnreferenceGuidEntry((__int64 *)v6);
  EtwpFreeFilterInfo(v129);
  return (unsigned int)InformationToken;
}
