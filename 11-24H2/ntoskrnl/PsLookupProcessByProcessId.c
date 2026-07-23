/*
 * XREFs of PsLookupProcessByProcessId @ 0x1408F21F0
 * Callers:
 *     IopLiveDumpAddProcessFilter @ 0x140594EC8 (IopLiveDumpAddProcessFilter.c)
 *     PiUEventGetProcessImagePath @ 0x1407226B0 (PiUEventGetProcessImagePath.c)
 *     PiUEventIsProcessFrozen @ 0x140722774 (PiUEventIsProcessFrozen.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407AD578 (EtwpGetPrivateSessionTraceHandle.c)
 *     CmpDumpOneKeyBody @ 0x1407DB2CC (CmpDumpOneKeyBody.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     ExpSnapShotHandleTables @ 0x1408F1D40 (ExpSnapShotHandleTables.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1408F2544 (PspOneDirectionSecurityDomainCombine.c)
 *     PopInitSystemSleeperThread @ 0x1408F8198 (PopInitSystemSleeperThread.c)
 *     SeAuditProcessCreation @ 0x1408FD624 (SeAuditProcessCreation.c)
 *     PfpCopyEvent @ 0x140971B9C (PfpCopyEvent.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409CF5D4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpEnableDisableUMGL @ 0x140A0EC2C (EtwpEnableDisableUMGL.c)
 *     EtwpProcessThreadImageRundown @ 0x140A0F50C (EtwpProcessThreadImageRundown.c)
 *     PopManageTransitionRecordRequest @ 0x140A44A04 (PopManageTransitionRecordRequest.c)
 *     PopDiagTraceAppPowerMessage @ 0x140A50EC8 (PopDiagTraceAppPowerMessage.c)
 *     PfpRpControlRequestUpdate @ 0x140A5EDA0 (PfpRpControlRequestUpdate.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140B988D0 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140407120 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14043D820 (ExSlowReplenishHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbp
  signed __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int128 v9; // rt0
  unsigned __int8 v10; // tt
  unsigned __int64 HandlePointer; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v16; // rbx
  int v17; // ebp
  __int64 v18; // r8
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v25[2]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ((unsigned __int16)ProcessId & 0x3FC) == 0 )
    goto LABEL_16;
  v4 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)PspCidTable, (__int64)ProcessId);
  v5 = v4;
  if ( !v4 )
    goto LABEL_16;
  v6 = PspCidTable;
  _m_prefetchw(v4);
  *(_QWORD *)&v25[0] = *v4;
  v7 = v4[1];
LABEL_4:
  v8 = *(_QWORD *)&v25[0];
  *((_QWORD *)&v25[0] + 1) = v7;
  do
  {
    if ( (v8 & 0x1FFFE) == 0 )
    {
      v16 = PspCidTable;
      v17 = 0;
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v5);
          v18 = *v5;
          if ( (*v5 & 1) != 0 )
            break;
          if ( !v18 )
            goto LABEL_16;
          ExpBlockOnLockedHandleEntry(v16, v5, v18);
        }
      }
      while ( v18 != _InterlockedCompareExchange64(v5, v18 - 1, v18) );
      HandlePointer = ExGetHandlePointer(v5);
      if ( (*(_BYTE *)HandlePointer & 0x7F) == 3 )
      {
        if ( (*(_DWORD *)(HandlePointer + 500) & 0x400000C) == 0x4000000 )
          v17 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v5);
        _m_prefetchw((const void *)(HandlePointer - 48));
        v19 = *(_QWORD *)(HandlePointer - 48);
        while ( v19 )
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(HandlePointer - 48),
                  v19 + (unsigned int)(v17 + 1),
                  v19);
          if ( v20 == v19 )
          {
            ObpTraceObjectReferenceIfActive(HandlePointer - 48);
            goto LABEL_32;
          }
        }
        v23 = *v5 & 0xFFFFFFFFFFFE0001uLL;
        v25[1] = v23;
        *v5 = v23;
      }
      HandlePointer = 0LL;
LABEL_32:
      v21 = PspCidTable;
      _InterlockedIncrement64(v5);
      v22 = (_QWORD *)(v21 + 48);
      _InterlockedOr(v24, 0);
      if ( *v22 )
        ExfUnblockPushLock((__int64)v22, 0LL);
LABEL_12:
      if ( !HandlePointer )
        goto LABEL_17;
      CurrentServerSilo = PsGetCurrentServerSilo();
      v13 = CurrentServerSilo;
      if ( (*(_DWORD *)(HandlePointer + 500) & 0x4000000) != 0 )
      {
        if ( PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, CurrentServerSilo) )
          goto LABEL_17;
      }
      else
      {
        _InterlockedOr(v24, 0);
        if ( (*(_QWORD *)(HandlePointer + 456) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(HandlePointer + 456));
        if ( (*(_DWORD *)(HandlePointer + 500) & 0x4000000) != 0
          && PsIsProcessInSilo((struct _KPROCESS *)HandlePointer, v13) )
        {
          goto LABEL_17;
        }
      }
      ObfDereferenceObjectWithTag((PVOID)HandlePointer, 0x746C6644u);
      goto LABEL_16;
    }
    if ( (v8 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v6, v5, v8);
      _m_prefetchw(v5);
      v7 = v5[1];
      *(_QWORD *)&v25[0] = *v5;
      goto LABEL_4;
    }
    *(_QWORD *)&v9 = v8;
    *((_QWORD *)&v9 + 1) = v7;
    v10 = _InterlockedCompareExchange128(v5, v7, v8 - 2, (signed __int64 *)&v9);
    v8 = v9;
    v25[0] = v9;
    v7 = *((_QWORD *)&v9 + 1);
  }
  while ( !v10 );
  if ( (unsigned __int16)(v8 >> 1) == 16 )
    *(_QWORD *)&v25[0] = v8 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v8 >> 1) - 1));
  HandlePointer = ExGetHandlePointer((__int64 *)v25);
  if ( (*(_BYTE *)HandlePointer & 0x7F) == 3 )
    goto LABEL_12;
  ObfDereferenceObject((PVOID)HandlePointer);
LABEL_16:
  HandlePointer = 0LL;
LABEL_17:
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !HandlePointer )
    return -1073741813;
  *Process = (PEPROCESS)HandlePointer;
  return 0;
}
