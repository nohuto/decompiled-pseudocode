/*
 * XREFs of PsLookupProcessByProcessId @ 0x14094DC80
 * Callers:
 *     IopLiveDumpAddProcessFilter @ 0x140597F48 (IopLiveDumpAddProcessFilter.c)
 *     PiUEventGetProcessImagePath @ 0x140724B20 (PiUEventGetProcessImagePath.c)
 *     PiUEventIsProcessFrozen @ 0x140724BE4 (PiUEventIsProcessFrozen.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD0A8 (EtwpGetPrivateSessionTraceHandle.c)
 *     CmpDumpOneKeyBody @ 0x1407DAD7C (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x1408301F0 (EtwpUpdatePerProcessTracing.c)
 *     SeAuditProcessCreation @ 0x1408A73CC (SeAuditProcessCreation.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     ExpSnapShotHandleTables @ 0x14094D7D0 (ExpSnapShotHandleTables.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14094DFD4 (PspOneDirectionSecurityDomainCombine.c)
 *     PopDiagTraceAppPowerMessage @ 0x14094E518 (PopDiagTraceAppPowerMessage.c)
 *     PopManageTransitionRecordRequest @ 0x14094E638 (PopManageTransitionRecordRequest.c)
 *     PfpRpControlRequestUpdate @ 0x14094E7F8 (PfpRpControlRequestUpdate.c)
 *     PfpCopyEvent @ 0x14094F68C (PfpCopyEvent.c)
 *     EtwpEnableDisableUMGL @ 0x140A15A4C (EtwpEnableDisableUMGL.c)
 *     EtwpProcessThreadImageRundown @ 0x140A1632C (EtwpProcessThreadImageRundown.c)
 *     PopInitSystemSleeperThread @ 0x140A219E8 (PopInitSystemSleeperThread.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140B968D0 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14040EF20 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140445670 (ExSlowReplenishHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14084BF30 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // r14
  struct _KTHREAD *CurrentThread; // rsi
  HANDLE *v4; // rax
  HANDLE *v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v15; // rbx
  int v16; // ebp
  __int64 v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v23[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ((unsigned __int16)ProcessId & 0x3FC) == 0 )
    goto LABEL_16;
  v4 = (HANDLE *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, (__int64)ProcessId);
  v5 = v4;
  if ( !v4 )
    goto LABEL_16;
  v6 = PspCidTable;
  _m_prefetchw(v4);
  *(_QWORD *)&v23[0] = *v4;
  ProcessId = v4[1];
LABEL_4:
  v7 = *(_QWORD *)&v23[0];
  *((_QWORD *)&v23[0] + 1) = ProcessId;
  do
  {
    if ( (v7 & 0x1FFFE) == 0 )
    {
      v15 = PspCidTable;
      v16 = 0;
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v5);
          v17 = (__int64)*v5;
          if ( ((unsigned __int8)*v5 & 1) != 0 )
            break;
          if ( !v17 )
            goto LABEL_16;
          ExpBlockOnLockedHandleEntry(v15, v5, v17);
        }
        ProcessId = (HANDLE)(v17 - 1);
      }
      while ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v17 - 1, v17) );
      HandlePointer = ExGetHandlePointer((__int64 *)v5);
      if ( (*(_BYTE *)HandlePointer & 0x7F) == 3 )
      {
        if ( (*(_DWORD *)(HandlePointer + 500) & 0x400000C) == 0x4000000 )
          v16 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v5);
        Process = (PEPROCESS *)(unsigned int)(v16 + 1);
        _m_prefetchw((const void *)(HandlePointer - 48));
        v18 = *(_QWORD *)(HandlePointer - 48);
        while ( v18 )
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(HandlePointer - 48),
                  v18 + (unsigned int)Process,
                  v18);
          if ( v19 == v18 )
          {
            ObpTraceObjectReferenceIfActive(HandlePointer - 48);
            goto LABEL_32;
          }
        }
        v21 = (unsigned __int64)*v5 & 0xFFFFFFFFFFFE0001uLL;
        v23[1] = v21;
        *v5 = (HANDLE)v21;
      }
      HandlePointer = 0LL;
LABEL_32:
      v20 = PspCidTable;
      _InterlockedIncrement64((volatile signed __int64 *)v5);
      ProcessId = (HANDLE)(v20 + 48);
      _InterlockedOr(v22, 0);
      if ( *(_QWORD *)ProcessId )
        ExfUnblockPushLock((__int64)ProcessId, 0LL);
LABEL_12:
      if ( !HandlePointer )
        goto LABEL_17;
      CurrentServerSilo = PsGetCurrentServerSilo();
      v12 = CurrentServerSilo;
      if ( (*(_DWORD *)(HandlePointer + 500) & 0x4000000) != 0 )
      {
        if ( PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, CurrentServerSilo) )
          goto LABEL_17;
      }
      else
      {
        _InterlockedOr(v22, 0);
        if ( (*(_QWORD *)(HandlePointer + 456) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(HandlePointer + 456));
        if ( (*(_DWORD *)(HandlePointer + 500) & 0x4000000) != 0
          && PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, v12) )
        {
          goto LABEL_17;
        }
      }
      ObfDereferenceObjectWithTag((PVOID)HandlePointer, 0x746C6644u);
      goto LABEL_16;
    }
    if ( (v7 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v6, v5, v7);
      _m_prefetchw(v5);
      ProcessId = v5[1];
      *(_QWORD *)&v23[0] = *v5;
      goto LABEL_4;
    }
    *(_QWORD *)&v8 = v7;
    *((_QWORD *)&v8 + 1) = ProcessId;
    v9 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)v5,
           (signed __int64)ProcessId,
           v7 - 2,
           (signed __int64 *)&v8);
    Process = (PEPROCESS *)*((_QWORD *)&v8 + 1);
    v7 = v8;
    v23[0] = v8;
    ProcessId = (HANDLE)*((_QWORD *)&v8 + 1);
  }
  while ( !v9 );
  if ( (unsigned __int16)(v7 >> 1) == 16 )
    *(_QWORD *)&v23[0] = v7 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v7 >> 1) - 1));
  HandlePointer = ExGetHandlePointer((__int64 *)v23);
  if ( (*(_BYTE *)HandlePointer & 0x7F) == 3 )
    goto LABEL_12;
  ObfDereferenceObject((PVOID)HandlePointer);
LABEL_16:
  HandlePointer = 0LL;
LABEL_17:
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)ProcessId, (__int64)Process);
  if ( !HandlePointer )
    return -1073741813;
  *v2 = (PEPROCESS)HandlePointer;
  return 0;
}
