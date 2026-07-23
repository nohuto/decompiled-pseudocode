/*
 * XREFs of EtwpLogger @ 0x14098FA20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     EtwpRequestFlushTimer @ 0x1403E4890 (EtwpRequestFlushTimer.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     EtwpEventWriteTemplateSession @ 0x1408940B0 (EtwpEventWriteTemplateSession.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14098F2B0 (EtwpRealtimeDisconnectAllConsumers.c)
 *     PsTerminateSystemThread @ 0x14098F390 (PsTerminateSystemThread.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x140990048 (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140990098 (EtwpRealtimeCreateLogfile.c)
 *     EtwpStopLoggerInstance @ 0x1409902C0 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1409906AC (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1409908B8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpCreateLogFile @ 0x140991804 (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1409936EC (EtwpRealtimeNotifyConsumers.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140A89378 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpRealtimeSaveState @ 0x140AA5500 (EtwpRealtimeSaveState.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x140AB1B5C (EtwpEventWriteTemplateSessionEnd.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // rbp
  struct _KEVENT *v3; // rsi
  volatile signed __int32 *v4; // rbp
  int v5; // eax
  int v6; // ecx
  volatile signed __int32 *v7; // rdi
  int v8; // r14d
  __int64 v9; // rdx
  int v10; // r15d
  int Logfile; // edi
  int *v12; // rsi
  int v13; // edx
  int v14; // r8d
  bool v15; // bp
  int v16; // eax
  int active; // eax
  NTSTATUS v18; // edi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r8d
  struct _LIST_ENTRY *v23; // [rsp+40h] [rbp-68h]
  PVOID Object[2]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v25; // [rsp+58h] [rbp-50h] BYREF
  _DWORD ThreadInformation[4]; // [rsp+68h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v1 + 32) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*(struct _LIST_ENTRY **)a1);
  v23 = v2;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 15);
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  ThreadInformation[0] = 1;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadPowerThrottlingState, ThreadInformation, 0xCu);
  if ( *(_WORD *)(v1 + 136) )
  {
    v25 = *(_OWORD *)(v1 + 136);
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadNameInformation, &v25, 0x10u);
  }
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v3 = (struct _KEVENT *)(v1 + 480);
  Object[1] = (PVOID)(v1 + 504);
  Object[0] = (PVOID)(v1 + 480);
  if ( *(_DWORD *)(v1 + 320) )
  {
    v4 = (volatile signed __int32 *)(v1 + 816);
    while ( 1 )
    {
      v5 = *(_DWORD *)(v1 + 208);
      v6 = 0;
      v7 = v4;
      if ( v5 )
        v7 = v4;
      LOBYTE(v6) = v5 != 0;
      v8 = 0;
      if ( KeWaitForMultipleObjects(v6 + 1, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
      {
        if ( (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        KeResetEvent(v3);
        v8 = 1;
        v7 = v4;
      }
      if ( (unsigned __int8)EtwpBootPhase > 3u )
        _InterlockedOr(v7, 4u);
      EtwpAdjustFreeBuffers(v1);
      v10 = *(_DWORD *)(v1 + 824) & 4;
      if ( v10 )
      {
        if ( *(_DWORD *)(v1 + 208) && (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
        {
          KeCancelTimer((PKTIMER)(v1 + 504));
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        }
        v8 = 1;
      }
      if ( (*v4 & 4) != 0 )
        break;
      EtwpFlushActiveBuffers((unsigned int *)v1, v8);
LABEL_13:
      v4 = (volatile signed __int32 *)(v1 + 816);
      if ( !*(_DWORD *)(v1 + 320) )
      {
        v2 = v23;
        goto LABEL_57;
      }
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFF7F);
      if ( *(_QWORD *)(v1 + 800) )
      {
        LOBYTE(v9) = 1;
        EtwpFinalizeHeader(v1, v9);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr(v7, 8u);
    else
      _InterlockedAnd(v7, 0xFFFFFFF7);
    if ( (*v4 & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 && (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
      {
        v12 = (int *)(v1 + 40);
LABEL_22:
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
          EtwpEventWriteTemplateSessionEnd(
            v1 + 152,
            v13,
            v14,
            v1 + 136,
            v1 + 152,
            Logfile,
            *(_DWORD *)(v1 + 12),
            *(_DWORD *)(v1 + 44));
        *v12 = Logfile;
        EtwpStopLoggerInstance(v1);
LABEL_25:
        v3 = (struct _KEVENT *)(v1 + 480);
        goto LABEL_13;
      }
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 824) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFF7);
      v12 = (int *)(v1 + 40);
      *(_DWORD *)(v1 + 40) = 0;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    else
    {
      v12 = (int *)(v1 + 40);
    }
    if ( (*(_DWORD *)(v1 + 824) & 3) == 0 )
      goto LABEL_41;
    v15 = 1;
    if ( (*(_DWORD *)(v1 + 824) & 2) != 0 )
      v15 = *(_QWORD *)(v1 + 800) == 0LL;
    LOBYTE(v9) = 1;
    v16 = EtwpCreateLogFile(v1, v9, 0LL);
    *v12 = v16;
    Logfile = v16;
    if ( v16 < 0
      && (*(_DWORD *)(v1 + 12) & 8) != 0
      && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
    {
      EtwpEventWriteTemplateAdmin(
        v1 + 152,
        (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
        v22,
        v1 + 136,
        v1 + 152,
        Logfile,
        *(_DWORD *)(v1 + 12));
    }
    KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    if ( Logfile >= 0 || !v15 )
    {
LABEL_41:
      Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, v8);
      if ( (*(_DWORD *)(v1 + 824) & 1) != 0 && Logfile >= 0 && !v8 )
        Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
      if ( (*(_DWORD *)(v1 + 824) & 0x1000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFEFFF);
        if ( *(_QWORD *)(v1 + 800) )
        {
          v20 = EtwpFinalizeHeader(v1, 0LL);
          Logfile = v20;
          if ( v20 >= 0 )
          {
            ZwClose(*(HANDLE *)(v1 + 800));
            *(_QWORD *)(v1 + 800) = 0LL;
          }
          else
          {
            *v12 = v20;
          }
        }
      }
      if ( (*(_BYTE *)(v1 + 12) & 0x40) != 0 )
        Logfile = 0;
      if ( v10 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFFB);
        *v12 = Logfile;
        KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      }
      if ( Logfile >= 0 )
        goto LABEL_25;
    }
    goto LABEL_22;
  }
LABEL_57:
  while ( 1 )
  {
    active = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    v18 = active;
    if ( active < 0 )
      break;
    if ( active == 259 )
    {
      if ( (*(_DWORD *)(v1 + 816) & 8) == 0 || (v18 = 0, *(_QWORD *)(v1 + 360)) )
        v18 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject(v3, Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  if ( *(_QWORD *)(v1 + 800) )
  {
    EtwpFinalizeHeader(v1, 0LL);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 40) = v18;
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  if ( v18 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v21, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v18);
}
