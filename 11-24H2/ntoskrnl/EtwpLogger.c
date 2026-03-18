/*
 * XREFs of EtwpLogger @ 0x1409D88E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     EtwpRequestFlushTimer @ 0x14024D0B4 (EtwpRequestFlushTimer.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     EtwpEventWriteTemplateSession @ 0x140833614 (EtwpEventWriteTemplateSession.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     EtwpRealtimeSaveState @ 0x1409D75AC (EtwpRealtimeSaveState.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1409D7F24 (EtwpRealtimeDisconnectAllConsumers.c)
 *     PsTerminateSystemThread @ 0x1409D8000 (PsTerminateSystemThread.c)
 *     EtwpFlushActiveBuffers @ 0x1409D8040 (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1409D871C (EtwpRealtimeNotifyConsumers.c)
 *     EtwpAdjustFreeBuffers @ 0x1409D8EEC (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D8F3C (EtwpRealtimeCreateLogfile.c)
 *     EtwpStopLoggerInstance @ 0x1409D9164 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1409D9550 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1409D976C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpCreateLogFile @ 0x1409DA6AC (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140A8E2D8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x140AB6B68 (EtwpEventWriteTemplateSessionEnd.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // rbp
  __int64 v3; // r8
  struct _KEVENT *v4; // rsi
  volatile signed __int32 *v5; // rbp
  int v6; // eax
  int v7; // ecx
  volatile signed __int32 *v8; // rdi
  int v9; // r14d
  __int64 v10; // rdx
  int v11; // r15d
  int *v12; // rsi
  int Logfile; // edi
  int v14; // edx
  int v15; // r8d
  bool v16; // bp
  int v17; // eax
  int active; // eax
  NTSTATUS v19; // edi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  struct _LIST_ENTRY *v24; // [rsp+40h] [rbp-68h]
  PVOID Object[2]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v26; // [rsp+58h] [rbp-50h] BYREF
  _DWORD ThreadInformation[4]; // [rsp+68h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v1 + 32) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*(struct _LIST_ENTRY **)a1);
  v24 = v2;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 15, v3);
  ThreadInformation[1] = 1;
  ThreadInformation[2] = 1;
  ThreadInformation[0] = 1;
  NtSetInformationThread(
    (HANDLE)0xFFFFFFFFFFFFFFFELL,
    ThreadIdealProcessorEx|ThreadIsIoPending,
    ThreadInformation,
    0xCu);
  if ( *(_WORD *)(v1 + 136) )
  {
    v26 = *(_OWORD *)(v1 + 136);
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCpuAccountingInformation|ThreadAffinityMask, &v26, 0x10u);
  }
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v4 = (struct _KEVENT *)(v1 + 480);
  Object[1] = (PVOID)(v1 + 504);
  Object[0] = (PVOID)(v1 + 480);
  if ( *(_DWORD *)(v1 + 320) )
  {
    v5 = (volatile signed __int32 *)(v1 + 816);
    while ( 1 )
    {
      v6 = *(_DWORD *)(v1 + 208);
      v7 = 0;
      v8 = v5;
      if ( v6 )
        v8 = v5;
      LOBYTE(v7) = v6 != 0;
      v9 = 0;
      if ( KeWaitForMultipleObjects(v7 + 1, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
      {
        if ( (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        KeResetEvent(v4);
        v9 = 1;
        v8 = v5;
      }
      if ( (unsigned __int8)EtwpBootPhase > 3u )
        _InterlockedOr(v8, 4u);
      EtwpAdjustFreeBuffers(v1);
      v11 = *(_DWORD *)(v1 + 824) & 4;
      if ( v11 )
      {
        if ( *(_DWORD *)(v1 + 208) && (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
        {
          KeCancelTimer((PKTIMER)(v1 + 504));
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        }
        v9 = 1;
      }
      if ( (*v5 & 4) == 0 )
      {
        EtwpFlushActiveBuffers((unsigned int *)v1, v9);
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(v1 + 824) & 0x80u) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFF7F);
        if ( *(_QWORD *)(v1 + 800) )
        {
          LOBYTE(v10) = 1;
          EtwpFinalizeHeader(v1, v10);
        }
      }
      if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
        _InterlockedOr(v8, 8u);
      else
        _InterlockedAnd(v8, 0xFFFFFFF7);
      if ( (*v5 & 8) == 0 )
        goto LABEL_19;
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile >= 0 || (*(_DWORD *)(v1 + 12) & 0x40) != 0 )
        break;
      v12 = (int *)(v1 + 40);
LABEL_39:
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
        EtwpEventWriteTemplateSessionEnd(
          v1 + 152,
          v14,
          v15,
          v1 + 136,
          v1 + 152,
          Logfile,
          *(_DWORD *)(v1 + 12),
          *(_DWORD *)(v1 + 44));
      *v12 = Logfile;
      EtwpStopLoggerInstance(v1);
LABEL_31:
      v4 = (struct _KEVENT *)(v1 + 480);
LABEL_32:
      v5 = (volatile signed __int32 *)(v1 + 816);
      if ( !*(_DWORD *)(v1 + 320) )
      {
        v2 = v24;
        goto LABEL_56;
      }
    }
    EtwpRealtimeUpdateConsumers(v1);
    EtwpRealtimeFlushSavedBuffers(v1);
    if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
      EtwpRequestFlushTimer(v1, 0LL);
LABEL_19:
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
      goto LABEL_30;
    v16 = 1;
    if ( (*(_DWORD *)(v1 + 824) & 2) != 0 )
      v16 = *(_QWORD *)(v1 + 800) == 0LL;
    LOBYTE(v10) = 1;
    v17 = EtwpCreateLogFile(v1, v10, 0LL);
    *v12 = v17;
    Logfile = v17;
    if ( v17 < 0
      && (*(_DWORD *)(v1 + 12) & 8) != 0
      && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
    {
      EtwpEventWriteTemplateAdmin(
        v1 + 152,
        (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
        v23,
        v1 + 136,
        v1 + 152,
        Logfile,
        *(_DWORD *)(v1 + 12));
    }
    KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    if ( Logfile >= 0 || !v16 )
    {
LABEL_30:
      Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, v9);
      if ( (*(_DWORD *)(v1 + 824) & 1) != 0 && Logfile >= 0 && !v9 )
        Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
      if ( (*(_DWORD *)(v1 + 824) & 0x1000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFEFFF);
        if ( *(_QWORD *)(v1 + 800) )
        {
          v21 = EtwpFinalizeHeader(v1, 0LL);
          Logfile = v21;
          if ( v21 >= 0 )
          {
            ZwClose(*(HANDLE *)(v1 + 800));
            *(_QWORD *)(v1 + 800) = 0LL;
          }
          else
          {
            *v12 = v21;
          }
        }
      }
      if ( (*(_BYTE *)(v1 + 12) & 0x40) != 0 )
        Logfile = 0;
      if ( v11 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFFB);
        *v12 = Logfile;
        KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      }
      if ( Logfile >= 0 )
        goto LABEL_31;
    }
    goto LABEL_39;
  }
LABEL_56:
  while ( 1 )
  {
    active = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    v19 = active;
    if ( active < 0 )
      break;
    if ( active == 259 )
    {
      if ( (*(_DWORD *)(v1 + 816) & 8) == 0 || (v19 = 0, *(_QWORD *)(v1 + 360)) )
        v19 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject(v4, Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
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
  *(_DWORD *)(v1 + 40) = v19;
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  if ( v19 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v22, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v19);
}
