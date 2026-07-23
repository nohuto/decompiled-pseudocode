/*
 * XREFs of NtTraceControl @ 0x140A82250
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0860 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0B5C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82090 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x14042AB70 (EtwpCreateActivityId.c)
 *     EtwpCopyMetaProviderGuids @ 0x140487C1C (EtwpCopyMetaProviderGuids.c)
 *     EtwGetProviderIdFromHandle @ 0x1404A8EF0 (EtwGetProviderIdFromHandle.c)
 *     EtwpMetaProviderCount @ 0x1404AE074 (EtwpMetaProviderCount.c)
 *     WdiUpdateSem @ 0x14064A614 (WdiUpdateSem.c)
 *     EtwpGetPmcOwnership @ 0x14064AF10 (EtwpGetPmcOwnership.c)
 *     EtwpGetPmcSessions @ 0x14064B0B8 (EtwpGetPmcSessions.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTransitionToRealtime @ 0x14064DB08 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x14064FBB0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14064FE3C (EtwpSetCompressionSettings.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpTrackProviderBinaryKm @ 0x1407AA9F0 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x1407AAC88 (EtwpTrackProviderBinaryOld.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD578 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpUpdateDisallowList @ 0x140831B84 (EtwpUpdateDisallowList.c)
 *     EtwpQueueReply @ 0x1408320AC (EtwpQueueReply.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     EtwpAddDataSource @ 0x140834E58 (EtwpAddDataSource.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140835798 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpQueryTrace @ 0x1408360C0 (EtwpQueryTrace.c)
 *     EtwpReceiveNotification @ 0x14083641C (EtwpReceiveNotification.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpGetGuidList @ 0x1408399A0 (EtwpGetGuidList.c)
 *     EtwpGetNextGuidEntry @ 0x140839C10 (EtwpGetNextGuidEntry.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetTraceGroupInfo @ 0x1409948E0 (EtwpGetTraceGroupInfo.c)
 *     EtwpStartTrace @ 0x1409D0104 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 *     EtwpSynchronizeWithLogger @ 0x1409D2650 (EtwpSynchronizeWithLogger.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     EtwpGetTraceGuidInfo @ 0x1409DD060 (EtwpGetTraceGuidInfo.c)
 *     EtwpSetProviderTraitsUm @ 0x1409F67DC (EtwpSetProviderTraitsUm.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A3B628 (EtwpTrackGuidEntryRegistrations.c)
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwpRealtimeConnect @ 0x140A56DA8 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A814E0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  ETWTRACECONTROLCODE v7; // edi
  char *v8; // r12
  unsigned int *v9; // r14
  struct _LIST_ENTRY *Flink; // rsi
  int v11; // r9d
  volatile void *v12; // r10
  NTSTATUS started; // ebx
  char v14; // dl
  __int64 v15; // rbx
  int v16; // eax
  ULONG v17; // r15d
  unsigned int v18; // edi
  ULONG_PTR v19; // rdx
  unsigned int *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v22; // rsi
  void *v23; // rcx
  __int64 v24; // rdx
  PVOID v25; // rdi
  void *v26; // rcx
  __int64 v27; // rdi
  struct _KTHREAD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int v34; // r8d
  int v35; // edx
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  void *v38; // rcx
  PVOID v39; // rdi
  struct _KQUEUE *v40; // rcx
  PLIST_ENTRY v41; // r13
  struct _LIST_ENTRY *v42; // rdi
  ULONG Flink_high; // eax
  unsigned int v44; // r12d
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v46; // edi
  PVOID v47; // rcx
  unsigned __int64 v48; // rdi
  PULONG v49; // r12
  int ProviderIdFromHandle; // edi
  _DWORD *v51; // r8
  unsigned __int16 v52; // dx
  ULONG v53; // edi
  unsigned int v54; // r10d
  unsigned int v55; // r9d
  GUID **v56; // r8
  int v57; // eax
  unsigned int v58; // r10d
  int v59; // edi
  unsigned int *v60; // r13
  ULONG_PTR v61; // rbx
  char *v62; // rsi
  ULONG v63; // eax
  unsigned int v64; // ebx
  unsigned int v65; // edi
  _QWORD *NextGuidEntry; // r9
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r10
  unsigned int v70; // edx
  GUID **v71; // r8
  __int64 v72; // rcx
  unsigned __int8 *v73; // r9
  __int64 v74; // rcx
  unsigned int Blink_low; // edx
  struct _KTHREAD *v76; // rax
  unsigned int *v77; // rax
  void *v78; // rcx
  __int64 v79; // rax
  volatile signed __int64 *v80; // rdx
  unsigned int v81; // r8d
  void *v82; // rcx
  NTSTATUS v83; // eax
  NTSTATUS v84; // edi
  char v85; // al
  __int64 v86; // r8
  unsigned int v87; // edx
  void *v88; // rcx
  NTSTATUS v89; // edi
  PVOID v90; // rcx
  __int16 v91; // ax
  char v92; // di
  __int64 v93; // rax
  unsigned int *v94; // rbx
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  unsigned int v97; // edx
  __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned int *v100; // rcx
  __int64 v101; // rcx
  ETWTRACECONTROLCODE v103; // [rsp+40h] [rbp-D8h]
  ULONG v105; // [rsp+58h] [rbp-C0h] BYREF
  char v106; // [rsp+5Ch] [rbp-BCh]
  unsigned int v107; // [rsp+60h] [rbp-B8h]
  int v108; // [rsp+64h] [rbp-B4h]
  size_t Size; // [rsp+68h] [rbp-B0h]
  void *Src; // [rsp+70h] [rbp-A8h]
  PVOID v111; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v112[2]; // [rsp+80h] [rbp-98h] BYREF
  PVOID v113; // [rsp+90h] [rbp-88h] BYREF
  PVOID v114[2]; // [rsp+98h] [rbp-80h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp-70h] BYREF
  PLIST_ENTRY EntryArray; // [rsp+B0h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-60h]
  void *v118; // [rsp+C0h] [rbp-58h]
  PVOID Object[2]; // [rsp+C8h] [rbp-50h] BYREF

  v7 = FunctionCode;
  v103 = FunctionCode;
  LODWORD(Size) = InputBufferLength;
  v114[1] = OutputBuffer;
  v112[1] = ReturnLength;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  v105 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  started = 0;
  v108 = 0;
  LOBYTE(v107) = 0;
  if ( v14 )
  {
    v107 = (unsigned int)v11 >> 31;
    v7 &= ~0x80000000;
    if ( v11 >= 0 )
      v7 = v11;
    v103 = v7;
    v15 = 0x7FFFFFFF0000LL;
    if ( !InputBuffer )
      LODWORD(Size) = 0;
    if ( v12 )
      ProbeForWrite(v12, OutputBufferLength, 1u);
    else
      OutputBufferLength = 0;
    if ( !ReturnLength )
    {
      started = -1073741811;
      v108 = -1073741811;
      goto LABEL_348;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v15 = (__int64)ReturnLength;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    started = v108;
  }
  if ( (unsigned int)v7 <= EtwAddNotificationEvent && (v16 = 134238208, _bittest(&v16, v7)) )
  {
    v17 = OutputBufferLength;
    v18 = Size;
  }
  else
  {
    v18 = Size;
    v17 = OutputBufferLength;
    if ( (_DWORD)Size || OutputBufferLength )
    {
      v19 = OutputBufferLength;
      if ( (unsigned int)Size > OutputBufferLength )
        v19 = (unsigned int)Size;
      Pool2 = (unsigned int *)ExAllocatePool2(0x101uLL, v19, 0x50777445u);
      v9 = Pool2;
      Src = Pool2;
      if ( !Pool2 )
      {
        started = -1073741801;
        goto LABEL_348;
      }
      if ( InputBuffer )
        memmove(Pool2, InputBuffer, (unsigned int)Size);
    }
  }
  switch ( v103 )
  {
    case EtwStartLoggerCode:
    case EtwStopLoggerCode:
    case EtwQueryLoggerCode:
    case EtwUpdateLoggerCode:
    case EtwFlushLoggerCode:
    case EtwIncrementLoggerFile:
    case EtwRealtimeTransition:
      if ( v18 < 0xB0 || v17 < 0xB0 )
        goto LABEL_35;
      if ( v9 )
      {
        if ( *v9 >= 0xB0 )
        {
          if ( (v9[11] & 0x20000) != 0 )
          {
            if ( *v9 > v18 )
            {
LABEL_35:
              started = -1073741306;
              goto LABEL_334;
            }
            started = 0;
          }
          else
          {
            started = -1073741811;
          }
        }
        else
        {
          started = -1073741306;
        }
      }
      else
      {
        started = -1073741811;
      }
      if ( started >= 0 )
      {
        switch ( v103 )
        {
          case EtwStartLoggerCode:
            *((_QWORD *)v9 + 10) = (unsigned __int8)v107 | *((_QWORD *)v9 + 10) & 0xFFFFFFFFFFFFFFFEuLL;
            started = EtwpStartTrace((__int64)Flink, (__int64)v9);
            v105 = 176;
            break;
          case EtwStopLoggerCode:
            started = EtwpStopTrace((__int64)Flink, v9, 0);
            v105 = 176;
            break;
          case EtwQueryLoggerCode:
            started = EtwpQueryTrace((__int64)Flink, (__int64)v9, 0x140000000LL);
            v105 = 176;
            break;
          case EtwUpdateLoggerCode:
            started = EtwpUpdateTrace(Flink, v9);
            v105 = 176;
            break;
          case EtwFlushLoggerCode:
            started = EtwpFlushTrace((__int64)Flink, (__int64)v9);
            v105 = 176;
            break;
          case EtwIncrementLoggerFile:
            Object[0] = 0LL;
            if ( v9 )
            {
              if ( *v9 >= 0xB0 )
              {
                if ( (v9[11] & 0x20000) != 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  started = EtwpAcquireLoggerContext((__int64)Flink, (__int64)v9, (__int64 *)Object);
                  if ( started >= 0 )
                  {
                    v22 = (unsigned int *)Object[0];
                    if ( (*((_DWORD *)Object[0] + 3) & 8) != 0 )
                    {
                      v22 = (unsigned int *)Object[0];
                      if ( (*((_DWORD *)Object[0] + 206) & 1) == 0 )
                      {
                        EtwpSynchronizeWithLogger((__int64)Object[0], 4u);
                        EtwpGenerateFileName(
                          (unsigned __int16 *)v22 + 84,
                          (volatile signed __int32 *)v22 + 74,
                          (UNICODE_STRING *)(v22 + 46));
                        started = EtwpSynchronizeWithLogger((__int64)v22, 1u);
                      }
                      if ( started >= 0 )
                        started = EtwpGetLoggerInfoFromContext((__int64)v9, (__int64)v22);
                    }
                    else
                    {
                      started = -1073741811;
                    }
                    KeReleaseMutex((PRKMUTEX)(v22 + 158), 0);
                    ExReleaseRundownProtectionCacheAwareEx(
                      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v22 + 170) + 704LL) + 8LL * *v22),
                      1u);
                  }
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v17 = OutputBufferLength;
                  v105 = 176;
                }
                else
                {
                  started = -1073741811;
                  v105 = 176;
                }
              }
              else
              {
                started = -1073741306;
                v105 = 176;
              }
            }
            else
            {
              started = -1073741811;
              v105 = 176;
            }
            break;
          case EtwRealtimeTransition:
            started = EtwpTransitionToRealtime((__int64)Flink, (__int64)v9, 0x140000000LL);
            goto LABEL_60;
          default:
LABEL_60:
            v105 = 176;
            break;
        }
      }
      goto LABEL_334;
    case EtwRealtimeConnectCode:
      if ( v18 != 96 || v17 != 96 )
        goto LABEL_129;
      started = EtwpRealtimeConnect((__int64)v9);
      v105 = 96;
      goto LABEL_334;
    case EtwActivityIdCreate:
      if ( v17 != 16 )
        goto LABEL_129;
      started = 0;
      EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
      v48 = (unsigned int)v103;
      v49 = ReturnLength;
      goto LABEL_336;
    case EtwWdiScenarioCode:
      if ( v18 != 48 || v17 )
        goto LABEL_129;
      *(_OWORD *)Object = 0LL;
      if ( !v9 )
      {
        started = -1073741811;
        goto LABEL_334;
      }
      ProviderIdFromHandle = EtwGetProviderIdFromHandle((ULONG_PTR *)*v9, 1, Object);
      if ( ProviderIdFromHandle < 0 )
        goto LABEL_159;
      v51 = v9 + 6;
      if ( v9 == (unsigned int *)-24LL )
      {
        started = -1073741811;
      }
      else if ( v9 == (unsigned int *)-8LL )
      {
        started = -1073741811;
      }
      else if ( *v51
             || *((_WORD *)v9 + 14)
             || *((_WORD *)v9 + 15)
             || *((_BYTE *)v9 + 32)
             || *((_BYTE *)v9 + 33)
             || *((_BYTE *)v9 + 34)
             || *((_BYTE *)v9 + 35)
             || *((_BYTE *)v9 + 36)
             || *((_BYTE *)v9 + 37)
             || *((_BYTE *)v9 + 38)
             || *((_BYTE *)v9 + 39) )
      {
        v52 = *((_WORD *)v9 + 4);
        if ( v9[10] == 10 )
        {
          if ( WdipSemEnabled )
            started = WdipSemEnableScenario((__int64)Object, v52, (__int64)v51);
          else
            started = -1073741823;
        }
        else if ( WdipSemEnabled )
        {
          ProviderIdFromHandle = WdipSemDisableScenario((__int64)Object, v52, (__int64)v51);
LABEL_159:
          started = ProviderIdFromHandle;
        }
        else
        {
          started = -1073741823;
        }
      }
      else
      {
        started = -1073741811;
      }
      goto LABEL_334;
    case EtwRealtimeDisconnectCode:
      if ( v18 != 8 || v17 )
        goto LABEL_129;
      Handle = (HANDLE)*(unsigned int *)InputBuffer;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      Object[0] = 0LL;
      v46 = ObReferenceObjectByHandle(Handle, 0x400u, EtwpRealTimeConnectionObjectType, PreviousMode, Object, 0LL);
      if ( v46 >= 0 )
      {
        EtwpRealtimeDisconnectConsumer((__int64)Object[0]);
        ObfDereferenceObject(Object[0]);
      }
      started = v46;
      v17 = OutputBufferLength;
      goto LABEL_334;
    case EtwRegisterGuidsCode:
      if ( v18 != 160 || v17 - 160 > 0xFF60 )
        goto LABEL_129;
      started = EtwpRegisterUMProvider((__int64)Flink, (ULONGLONG)v9, v17, v107, (__int64)&v105);
      goto LABEL_334;
    case EtwReceiveNotification:
      if ( v18 || v17 - 72 > 0xFFB8 )
        goto LABEL_129;
      started = EtwpReceiveNotification(v9, v17, v107, &v105);
      goto LABEL_334;
    case EtwSendDataBlock:
      if ( v18 < 0x48 || v17 != 72 || v9[1] != v18 )
        goto LABEL_129;
      if ( *v9 == 3 )
      {
        if ( v18 < 0x78 )
          goto LABEL_129;
        started = EtwpEnableGuid((__int64)Flink, (__int64)v9, 1);
        v105 = 72;
      }
      else
      {
        started = EtwpNotifyGuid((__int64)Flink, (__int64)v9, 1);
        v105 = 72;
      }
      goto LABEL_334;
    case EtwSendReplyDataBlock:
      if ( v18 < 0x48 || v9[1] != v18 )
        goto LABEL_129;
      v9[9] = PsGetCurrentThreadProcessId();
      v26 = (void *)*((_QWORD *)v9 + 3);
      v27 = v9[4];
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v111 = 0LL;
      started = ObReferenceObjectByHandle(v26, 4u, EtwpRegistrationObjectType, 1, &v111, 0LL);
      if ( started >= 0 )
      {
        if ( (*((_BYTE *)v111 + 98) & 2) != 0 )
        {
          if ( (unsigned int)v27 < 4 )
          {
            v29 = _InterlockedExchange64((volatile __int64 *)v111 + v27 + 6, 0LL);
            if ( v29 )
            {
              v30 = *(_QWORD *)(v29 + 32);
              if ( (*(_BYTE *)(v30 + 98) & 0x20) != 0 )
                started = -1073741055;
              else
                started = EtwpQueueReply(*(_QWORD *)(v30 + 48), v9);
              ObfDereferenceObject(*(PVOID *)(v29 + 32));
              v31 = *(_QWORD *)(v29 + 40);
              if ( v31 )
              {
                v32 = *(_QWORD *)(v29 + 40) & 7LL;
                v33 = v31 & 0xFFFFFFFFFFFFFFF8uLL;
                v34 = 0;
                if ( (_DWORD)v32 != 7 )
                  v34 = *(_DWORD *)(v29 + 40) & 7;
                v35 = 2;
                if ( (_DWORD)v32 != 7 )
                  v35 = 0;
                PspChargeProcessWakeCounter(v33, v35, v34, *(_QWORD *)(v29 + 24), -1, 1, 0LL);
              }
              _m_prefetchw((const void *)(v29 + 52));
              v36 = *(_DWORD *)(v29 + 52);
              do
              {
                v37 = v36;
                v36 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 52), v36 & 0xFFFFFFFD, v36);
              }
              while ( v37 != v36 );
              if ( (v36 & 0xFFFFFFFD) == 0 )
                ExFreePoolWithTag((PVOID)v29, 0);
            }
            else
            {
              started = -1073741811;
            }
          }
          else
          {
            started = -1073741811;
          }
        }
        else
        {
          started = -1073741816;
        }
        ObfDereferenceObject(v111);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v17 = OutputBufferLength;
      goto LABEL_334;
    case EtwReceiveReplyDataBlock:
      if ( v18 != 8 )
        goto LABEL_129;
      v38 = (void *)*v9;
      Timeout.QuadPart = EtwpOneMs * v9[1];
      v113 = 0LL;
      started = ObReferenceObjectByHandle(v38, 4u, EtwpRegistrationObjectType, 1, &v113, 0LL);
      if ( started >= 0 )
      {
        v39 = v113;
        if ( (*((_BYTE *)v113 + 98) & 4) != 0 )
        {
          v40 = (struct _KQUEUE *)*((_QWORD *)v113 + 6);
          EntryArray = 0LL;
          KeRemoveQueueEx(v40, 1, 0, &Timeout, &EntryArray, 1u);
          started = (int)EntryArray;
          if ( EntryArray != (PLIST_ENTRY)258 && EntryArray != (PLIST_ENTRY)192 )
          {
            v41 = EntryArray;
            v42 = EntryArray[1].Flink;
            Flink_high = HIDWORD(v42->Flink);
            if ( Flink_high > v17 )
            {
              started = -1073741789;
            }
            else
            {
              memmove(v9, EntryArray[1].Flink, Flink_high);
              started = 0;
            }
            v44 = HIDWORD(v42->Flink);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v42->Blink, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v42, 0);
            ExFreePoolWithTag(v41, 0);
            v17 = OutputBufferLength;
            ObfDereferenceObject(v113);
            v105 = v44;
            goto LABEL_334;
          }
        }
        else
        {
          started = -1073741816;
        }
        ObfDereferenceObject(v39);
        v105 = 0;
        goto LABEL_334;
      }
      v105 = 0;
      goto LABEL_334;
    case EtwWdiSemUpdate:
      if ( v18 || v17 )
        goto LABEL_129;
      started = WdiUpdateSem();
      goto LABEL_334;
    case EtwEnumTraceGuidList:
      v53 = v17 >> 4;
      LODWORD(Object[0]) = 0;
      started = EtwpGetGuidList((__int64)Flink, 0, (__int64)v9, v17 >> 4, (unsigned int *)Object);
      v54 = (unsigned int)Object[0];
      if ( started == -2147483643 )
        goto LABEL_177;
      v55 = 0;
      v56 = &EtwpUmglProviders;
      do
      {
        if ( ++v54 > 0xFFFFFFF )
          goto LABEL_176;
        if ( v54 <= v53 )
          *(GUID *)&v9[4 * v54 - 4] = **v56;
        ++v55;
        v56 += 2;
      }
      while ( v55 < 0xA );
      if ( v53 >= v54 )
        EtwpCopyMetaProviderGuids(&v9[4 * v54], v53 - v54);
      v57 = EtwpMetaProviderCount();
      if ( v58 + v57 < v58 )
      {
        LODWORD(v8) = -1073741675;
        v54 = -1;
      }
      else
      {
        v54 = v58 + v57;
      }
      if ( (int)v8 < 0 || v54 > 0xFFFFFFF )
LABEL_176:
        started = -2147483643;
LABEL_177:
      if ( started >= 0 && v54 > v53 )
        started = -1073741789;
      v105 = 16 * v54;
      goto LABEL_334;
    case EtwGetTraceGuidInfo:
      if ( v18 != 16 )
        goto LABEL_129;
      v105 = v17;
      started = EtwpGetTraceGuidInfo((__int64)Flink, v9, v9, &v105);
      goto LABEL_334;
    case EtwEnumerateTraceGuids:
      v64 = v17 / 0x24;
      v65 = 0;
      NextGuidEntry = EtwpGetNextGuidEntry((__int64)Flink, 0LL, 0);
      if ( !NextGuidEntry )
        goto LABEL_209;
      do
      {
        v67 = v65++;
        if ( v65 > 0x71C71C7 )
        {
LABEL_219:
          LODWORD(v8) = -2147483643;
          goto LABEL_220;
        }
        if ( v65 <= v64 )
        {
          v68 = 9 * v67;
          *(_OWORD *)&v9[v68] = *(_OWORD *)(NextGuidEntry + 5);
          v9[v68 + 7] = *((_DWORD *)NextGuidEntry + 20);
          v9[v68 + 5] = *((unsigned __int16 *)NextGuidEntry + 44);
          v9[v68 + 6] = *((unsigned __int8 *)NextGuidEntry + 90);
          LOBYTE(v9[v68 + 8]) = *((_BYTE *)NextGuidEntry + 91) & 1;
        }
        NextGuidEntry = EtwpGetNextGuidEntry((__int64)Flink, NextGuidEntry, 0);
      }
      while ( NextGuidEntry );
LABEL_209:
      if ( Flink == (struct _LIST_ENTRY *)EtwpHostSiloState )
        v69 = 2147353472LL;
      else
        v69 = (__int64)&Flink->Blink[80].Blink[34].Flink + 6;
      v70 = 0;
      v71 = &EtwpUmglProviders;
      do
      {
        v72 = v65;
        v73 = (unsigned __int8 *)(v69 + 2LL * *((unsigned __int8 *)v71 + 8));
        if ( *v73 )
        {
          if ( ++v65 > 0x71C71C7 )
            goto LABEL_219;
          if ( v65 <= v64 )
          {
            v74 = 9 * v72;
            *(GUID *)&v9[v74] = **v71;
            v9[v74 + 5] = *v73;
            v9[v74 + 7] = v73[1];
            v9[v74 + 6] = 0;
            LOBYTE(v9[v74 + 8]) = 1;
          }
        }
        ++v70;
        v71 += 2;
      }
      while ( v70 < 0xA );
LABEL_220:
      if ( (int)v8 >= 0 && v65 > v64 )
        LODWORD(v8) = -1073741789;
      started = (int)v8;
      v105 = 36 * v65;
      goto LABEL_334;
    case EtwRegisterSecurityProv:
      if ( v18 || v17 )
        goto LABEL_129;
      if ( LODWORD(Flink[271].Blink) )
      {
        started = -1073741790;
      }
      else
      {
        LODWORD(Flink[271].Blink) = PsGetCurrentThreadProcessId();
LABEL_229:
        started = (int)v8;
      }
      goto LABEL_334;
    case EtwReferenceTimeCode:
      if ( v18 != 4 || v17 != 16 )
        goto LABEL_129;
      Blink_low = *v9;
      if ( *v9 == 0xFFFF )
        Blink_low = LOBYTE(Flink[281].Blink);
      v76 = KeGetCurrentThread();
      --v76->KernelApcDisable;
      v77 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, Blink_low, 0);
      if ( v77 )
      {
        *(_OWORD *)v9 = *((_OWORD *)v77 + 19);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v77 + 170) + 704LL) + 8LL * *v77),
          1u);
      }
      else
      {
        LODWORD(v8) = -1073741162;
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      started = (int)v8;
      v105 = 16;
      v17 = OutputBufferLength;
      goto LABEL_334;
    case EtwTrackBinaryCode:
      goto LABEL_65;
    case EtwAddNotificationEvent:
      if ( v18 != 4 )
        goto LABEL_129;
      v78 = (void *)*(unsigned int *)InputBuffer;
      v118 = v78;
      if ( !v78 )
        goto LABEL_129;
      v114[0] = 0LL;
      started = ObReferenceObjectByHandle(v78, 2u, (POBJECT_TYPE)ExEventObjectType, 1, v114, 0LL);
      if ( started < 0 )
        goto LABEL_247;
      v79 = EtwpAddDataSource((__int64)KeGetCurrentThread()->ApcState.Process);
      v80 = (volatile signed __int64 *)v79;
      if ( v79 )
      {
        if ( (_BYTE)v107 )
          v80 = (volatile signed __int64 *)(v79 + 8);
        v17 = OutputBufferLength;
        if ( !_InterlockedCompareExchange64(v80, (signed __int64)v114[0], 0LL) )
          goto LABEL_334;
        started = -1073740008;
      }
      else
      {
        started = -1073741801;
        v17 = OutputBufferLength;
      }
LABEL_247:
      if ( v114[0] )
        ObfDereferenceObject(v114[0]);
      goto LABEL_334;
    case EtwUpdateDisallowList:
      if ( v18 < 8 )
        goto LABEL_129;
      v81 = v9[1];
      if ( 16LL * v81 + 8 != v18 )
        goto LABEL_129;
      if ( v81 )
        v8 = (char *)(v9 + 2);
      started = EtwpUpdateDisallowList((__int64)Flink, *v9, v81, (__int64)v8);
      goto LABEL_334;
    case EtwSetProviderTraitsCode:
      if ( v18 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_129;
      started = EtwpSetProviderTraitsUm((__int64)v9, v17, (int)&v105);
      goto LABEL_334;
    case EtwUseDescriptorTypeCode:
      if ( v18 != 16 || v17 )
        goto LABEL_129;
      v82 = *(void **)v9;
      v112[0] = 0LL;
      v83 = ObReferenceObjectByHandle(v82, 0x800u, EtwpRegistrationObjectType, 1, v112, 0LL);
      v84 = v83;
      if ( v83 >= 0 )
      {
        v85 = *((_BYTE *)v9 + 8);
        if ( v85 == 1 )
        {
          _InterlockedOr16((volatile signed __int16 *)v112[0] + 49, 0x100u);
          v17 = OutputBufferLength;
          ObfDereferenceObject(v112[0]);
          started = v84;
        }
        else if ( v85 )
        {
          ObfDereferenceObject(v112[0]);
          started = -1073741811;
        }
        else
        {
          _InterlockedAnd16((volatile signed __int16 *)v112[0] + 49, 0xFEFFu);
          v17 = OutputBufferLength;
          ObfDereferenceObject(v112[0]);
          started = v84;
        }
      }
      else
      {
        started = v83;
      }
      goto LABEL_334;
    case EtwEnumTraceGroupList:
      started = EtwpGetGuidList((__int64)Flink, 2u, (__int64)v9, v17 >> 4, &v105);
      v105 *= 16;
      goto LABEL_334;
    case EtwGetTraceGroupInfo:
      if ( v18 != 16 )
        goto LABEL_129;
      v105 = v17;
      started = EtwpGetTraceGroupInfo((__int64)Flink, v9, v9, &v105);
      goto LABEL_334;
    case EtwGetDisallowList:
      if ( v18 != 8 )
        goto LABEL_129;
      v105 = v17;
      v59 = 0;
      v106 = 0;
      v60 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId((__int64)Flink, *(unsigned __int16 *)v9, 0);
      if ( v60 )
      {
        memset_0(v9, 0, v105);
        v61 = (ULONG_PTR)(v60 + 172);
        v62 = (char *)KeAbPreAcquire((__int64)(v60 + 172), 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v60 + 86, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v60 + 86, 0, v62, (__int64)(v60 + 172));
        if ( v62 )
          v62[10] = 1;
        v106 = 1;
        v63 = 16 * *((unsigned __int16 *)v60 + 664);
        v107 = v63;
        v17 = OutputBufferLength;
        if ( v63 > OutputBufferLength )
        {
          v59 = -1073741789;
        }
        else
        {
          memmove(v9, *((const void **)v60 + 167), v63);
          v63 = v107;
        }
        v105 = v63;
      }
      else
      {
        v59 = -1073741811;
        v61 = 688LL;
      }
      if ( v106 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v61, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v61);
        KeAbPostRelease(v61);
        v17 = OutputBufferLength;
      }
      if ( v60 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v60 + 170) + 704LL) + 8LL * *v60),
          1u);
      started = v59;
      goto LABEL_334;
    case EtwSetCompressionSettings:
      if ( v18 != 16 || v17 )
        goto LABEL_129;
      started = EtwpSetCompressionSettings(v9);
      goto LABEL_334;
    case EtwGetCompressionSettings:
      if ( v18 != 8 || v17 != 16 )
        goto LABEL_129;
      v105 = 16;
      started = EtwpGetCompressionSettings((unsigned __int16 *)v9, v9);
      goto LABEL_334;
    case EtwUpdatePeriodicCaptureState:
      if ( v18 < 0xC )
        goto LABEL_129;
      v86 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v86 <= 0x10 )
      {
        v87 = v9[1];
        if ( v87 - 1 <= 3 )
        {
          started = -1073741811;
          goto LABEL_334;
        }
        if ( (_WORD)v86 )
        {
          if ( !v87 )
          {
            started = -1073741811;
            goto LABEL_334;
          }
        }
        else if ( v87 )
        {
          goto LABEL_129;
        }
        if ( 16 * v86 + 12 == v18 )
        {
          if ( (_WORD)v86 )
            v8 = (char *)(v9 + 3);
          started = EtwpUpdatePeriodicCaptureState(*v9, v87, v86, v8);
          goto LABEL_334;
        }
LABEL_129:
        started = -1073741811;
        goto LABEL_334;
      }
      started = -1073741811;
LABEL_334:
      v47 = OutputBuffer;
      v48 = (unsigned int)v103;
LABEL_335:
      v49 = ReturnLength;
LABEL_336:
      if ( started >= 0 )
      {
        if ( v105 )
        {
          if ( v105 > v17 )
          {
            started = -1073741789;
            v108 = -1073741789;
          }
          else
          {
            memmove(v47, v9, v105);
          }
        }
        *v49 = v105;
      }
      if ( started == -1073741789 && ((unsigned int)(v48 - 15) <= 1 || (unsigned int)(v48 - 21) <= 1)
        || (unsigned int)v48 <= 0x2E && (v101 = 0x41D700880000LL, _bittest64(&v101, v48)) )
      {
        *v49 = v105;
      }
LABEL_348:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return started;
    case EtwGetPrivateSessionTraceHandle:
      if ( v18 < 8 || (v18 & 7) != 0 || v17 < 2 )
        goto LABEL_129;
      LOWORD(Object[0]) = 0;
      started = EtwpGetPrivateSessionTraceHandle(v9, v18 >> 3, (unsigned __int16 *)Object);
      if ( !started )
      {
        v105 = 2;
        *(_WORD *)v9 = Object[0];
      }
      goto LABEL_334;
    case EtwRegisterPrivateSession:
      if ( v18 < 2 || v17 < 8 )
        goto LABEL_129;
      started = EtwpRegisterPrivateSession((__int64)Flink, *(_WORD *)v9, (_WORD *)v9 + 2, v9);
      if ( !started )
        v105 = 8;
      goto LABEL_334;
    case EtwQuerySessionDemuxObject:
      if ( v18 < 8 || v17 < 2 )
        goto LABEL_129;
      v88 = *(void **)v9;
      Object[0] = 0LL;
      v89 = ObReferenceObjectByHandle(v88, 0, EtwpSessionDemuxObjectType, 1, Object, 0LL);
      v90 = Object[0];
      if ( v89 >= 0 )
      {
        v91 = *((_WORD *)Object[0] + 9);
        if ( v91 )
        {
          *(_WORD *)v9 = v91;
          v89 = 0;
        }
        else
        {
          v89 = -1073741162;
        }
      }
      if ( v90 )
        ObfDereferenceObject(v90);
      started = v89;
      if ( !v89 )
        v105 = 2;
      goto LABEL_334;
    case EtwSetProviderBinaryTracking:
      if ( v18 < 8 )
        goto LABEL_129;
      v92 = *((_BYTE *)v9 + 4);
      v93 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, *v9, 0);
      v94 = (unsigned int *)v93;
      if ( v93 )
      {
        if ( v92 )
        {
          _InterlockedOr((volatile signed __int32 *)(v93 + 816), 0x2000000u);
          for ( i = EtwpGetNextGuidEntry((__int64)Flink, 0LL, 0); i; i = EtwpGetNextGuidEntry((__int64)Flink, i, 0) )
            EtwpTrackGuidEntryRegistrations(v94, i, 0);
          for ( j = EtwpGetNextGuidEntry((__int64)Flink, 0LL, 2u); j; j = EtwpGetNextGuidEntry((__int64)Flink, j, 2u) )
            EtwpTrackGuidEntryRegistrations(v94, j, 2);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(v93 + 816), 0xFDFFFFFF);
        }
        v17 = OutputBufferLength;
      }
      else
      {
        LODWORD(v8) = -1073741811;
      }
      if ( !v94 )
        goto LABEL_229;
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v94 + 170) + 704LL) + 8LL * *v94),
        1u);
      started = (int)v8;
      goto LABEL_334;
    case EtwMaxLoggers:
      v48 = (unsigned int)v103;
      v47 = OutputBuffer;
      if ( v17 < 4 )
      {
        started = -1073741811;
      }
      else
      {
        *v9 = (unsigned int)Flink[1].Flink;
        v105 = 4;
        started = 0;
      }
      goto LABEL_335;
    case EtwMaxPmcCounter:
      v48 = (unsigned int)v103;
      v47 = OutputBuffer;
      if ( v17 < 4 )
      {
        started = -1073741811;
      }
      else
      {
        *v9 = EtwpMaxPmcCounter;
        v105 = 4;
        started = 0;
      }
      goto LABEL_335;
    case EtwQueryUsedProcessorCount:
      if ( v18 != 8 || v17 < 4 )
        goto LABEL_129;
      v97 = *(unsigned __int16 *)v9;
      if ( v97 == 0xFFFF )
        v97 = LOBYTE(Flink[281].Blink);
      v99 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v97, 0);
      if ( v99 )
      {
        v105 = 4;
        *v9 = EtwpQueryUsedProcessorCount(v99, v98);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v100 + 170) + 704LL) + 8LL * *v100),
          1u);
      }
      else
      {
        started = -1073741811;
      }
      goto LABEL_334;
    case EtwGetPmcOwnership:
      v105 = v17;
      started = EtwpGetPmcOwnership(v9, &v105);
      goto LABEL_334;
    case EtwGetPmcSessions:
      v105 = v17;
      started = EtwpGetPmcSessions((__int64)v9, &v105);
      goto LABEL_334;
    case EtwGetPmcSessions|EtwStartLoggerCode:
      if ( !(unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
        goto LABEL_333;
LABEL_65:
      if ( v18 != 8 )
        goto LABEL_129;
      if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
      {
        v23 = *(void **)v9;
        Object[0] = 0LL;
        started = ObReferenceObjectByHandle(v23, 0x800u, EtwpRegistrationObjectType, 1, Object, 0LL);
        v25 = Object[0];
        if ( started >= 0 )
          started = EtwpTrackProviderBinaryKm((__int64)Object[0], v24, v103 == (EtwGetPmcSessions|EtwStartLoggerCode));
        if ( v25 )
          ObfDereferenceObject(v25);
      }
      else
      {
        started = EtwpTrackProviderBinaryOld((__int64)Flink, (void **)v9);
      }
      goto LABEL_334;
    default:
LABEL_333:
      started = -1073741808;
      goto LABEL_334;
  }
}
