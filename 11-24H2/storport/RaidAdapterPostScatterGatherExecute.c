/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x140012900
 * Callers:
 *     RaAdapterStartPowerIo @ 0x1400104F4 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidpAdapterContinueScatterGather @ 0x140012460 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorUnitExecuteNvmeSrb @ 0x140053630 (StorUnitExecuteNvmeSrb.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140060440 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x14006A0A0 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x14008F3D4 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B8EB4 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401BA844 (RaidAdapterFreeMiniportDumpInfo.c)
 * Callees:
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidLogGetParm4 @ 0x140020FC0 (RaidLogGetParm4.c)
 *     RaidAdapterRequestComplete @ 0x140025020 (RaidAdapterRequestComplete.c)
 *     DisableFUAByPolicy @ 0x1400259E0 (DisableFUAByPolicy.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidUpdateZoneIoMetadata @ 0x1400282B0 (RaidUpdateZoneIoMetadata.c)
 *     RaidAdapterProcessRequestForDlrm @ 0x14005CEC0 (RaidAdapterProcessRequestForDlrm.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  PSLIST_ENTRY v6; // r15
  int v7; // r12d
  __int64 v8; // r13
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  bool v12; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  __int64 Parm4; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, _QWORD); // rax
  char v26; // di
  LARGE_INTEGER v27; // rax
  __int64 CurrentNodeNumber; // rdi
  unsigned int v29; // r14d
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  char v34; // r14
  LARGE_INTEGER v35; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+8h]
  __int64 v38; // [rsp+A8h] [rbp+10h]

  *(_QWORD *)(a2 + 216) = a1;
  LODWORD(v37) = 0;
  v3 = *(_QWORD *)(a2 + 224);
  v4 = *(_QWORD *)(a2 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v38 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = *(unsigned __int8 *)(v4 + 2);
  if ( (_BYTE)v9 == 40 )
  {
    v9 = *(_DWORD *)(v4 + 20);
    v10 = *(_DWORD *)(v4 + 24);
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 12);
  }
  if ( !v3 )
  {
    v15 = *(_QWORD *)(a1 + 960);
    if ( !v15 || !*(_DWORD *)(*(_QWORD *)(v15 + 48) + 988LL) || (unsigned int)(v9 - 36) <= 1 )
      goto LABEL_10;
    v14 = (*(_BYTE *)(a2 + 17) & 8) == 0;
    goto LABEL_22;
  }
  if ( *(int *)(v3 + 744) <= 0 )
  {
    if ( *(_BYTE *)(v3 + 756) && (v10 & 0x10) == 0 )
      goto LABEL_23;
    if ( !*(_BYTE *)(v3 + 757) )
      goto LABEL_10;
    v14 = (v10 & 0x80000) == 0;
LABEL_22:
    if ( !v14 )
      goto LABEL_10;
LABEL_23:
    *(_BYTE *)(*(_QWORD *)(a2 + 168) + 3LL) = 5;
    RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
    LOBYTE(v16) = 1;
    RaidAdapterRequestComplete(a1, a2, v16);
    return 0LL;
  }
  if ( v9 == 32 || (v11 = 1, v9 == 19) )
    v11 = 0;
  if ( v11 )
    goto LABEL_23;
LABEL_10:
  if ( StorEtwLoggingEnabled )
  {
    v12 = UseQPCTime == 0;
    goto LABEL_12;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_27:
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      goto LABEL_29;
    }
    v12 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_12:
    if ( !v12 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_29:
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  DisableFUAByPolicy(a2);
  if ( *(_BYTE *)(a1 + 4370) )
  {
    RaidAdapterProcessRequestForDlrm(a1, a2);
    if ( (qword_140170460 & 1) != 0 )
    {
      Parm4 = RaidLogGetParm4(a2);
      v19 = *(_QWORD *)(a2 + 160);
      v20 = *(_QWORD *)(a2 + 168);
      if ( !v19 && v20 )
      {
        if ( *(_BYTE *)(v20 + 2) == 40 )
          v19 = *(_QWORD *)(v20 + 80);
        else
          v19 = *(_QWORD *)(v20 + 48);
      }
      v21 = *(_QWORD *)(a2 + 224);
      if ( v21 )
        v22 = (unsigned __int8)BYTE2(*(_DWORD *)(v21 + 104)) | ((((unsigned __int8)*(_DWORD *)(v21 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v21 + 104))) << 8);
      else
        v22 = 0;
      DbgLogRequest(*(_QWORD *)(a2 + 216), 36, v19, v22, v20, Parm4, 0LL);
    }
    v23 = *(_QWORD *)(a2 + 160);
    if ( v23 )
      *(_BYTE *)(v23 + 141) = -82;
    v24 = *(_QWORD *)(a2 + 216);
    v25 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v24 + 608) + 128LL);
    if ( v25 )
      v26 = v25(*(_QWORD *)(v24 + 616) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v26 = 1;
    if ( StorEtwLoggingEnabled && ((byte_140171461 & 1) != 0 || (byte_140171463 & 2) != 0) )
    {
      if ( UseQPCTime )
        v27 = KeQueryPerformanceCounter(0LL);
      else
        v27.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 704) = v27;
    }
    if ( !v26 )
    {
      RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
      return 0LL;
    }
    if ( *(int *)(a1 + 4664) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 872) )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 864), &LockHandle);
      else
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
    }
    else if ( *(_DWORD *)(a1 + 4664) >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    {
      *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
    }
    else
    {
      CurrentNodeNumber = KeGetCurrentNodeNumber();
      v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + (CurrentNodeNumber << 6)));
      if ( !v6 )
      {
        v29 = KeQueryHighestNodeNumber() + 1;
        do
          LODWORD(CurrentNodeNumber) = 0;
        while ( !v29 );
        while ( 1 )
        {
          v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4672)
                                                         + ((unsigned __int64)(unsigned int)CurrentNodeNumber << 6)));
          if ( v6 )
            break;
          _mm_pause();
          LODWORD(CurrentNodeNumber) = CurrentNodeNumber + 1;
          if ( (unsigned int)CurrentNodeNumber >= v29 )
            LODWORD(CurrentNodeNumber) = 0;
        }
      }
      LODWORD(v6[1].Next) = CurrentNodeNumber;
      *(_DWORD *)(a2 + 24) = HIDWORD(v6[1].Next);
    }
  }
  if ( (qword_140170460 & 4) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 224);
    if ( v30 )
      v7 = (unsigned __int8)BYTE2(*(_DWORD *)(v30 + 104)) | ((((unsigned __int8)*(_DWORD *)(v30 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v30 + 104))) << 8);
    v31 = RaidLogGetParm4(a2);
    v8 = *(_QWORD *)(a2 + 168);
    v38 = v31;
    if ( *(_QWORD *)(a2 + 160) )
    {
      LODWORD(v37) = *(_QWORD *)(a2 + 160);
    }
    else if ( v8 )
    {
      if ( *(_BYTE *)(v8 + 2) == 40 )
        v37 = *(_QWORD *)(v8 + 80);
      else
        v37 = *(_QWORD *)(v8 + 48);
    }
  }
  RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
  v32 = *(_QWORD *)(a2 + 160);
  if ( v32 )
    *(_BYTE *)(v32 + 141) = -86;
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
  v33 = MEMORY[0xFFFFF78000000014];
  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 608) + 16LL))(
          *(_QWORD *)(a1 + 616) + 16LL,
          *(_QWORD *)(a2 + 168));
  if ( StorEtwLoggingEnabled && ((byte_140171461 & 1) != 0 || (byte_140171463 & 2) != 0) )
  {
    if ( UseQPCTime )
      v35 = KeQueryPerformanceCounter(0LL);
    else
      v35.QuadPart = KeQueryUnbiasedInterruptTime();
    *(LARGE_INTEGER *)(a2 + 712) = v35;
  }
  if ( *(_BYTE *)(a1 + 4370) )
  {
    if ( *(int *)(a1 + 4664) <= 1 )
    {
      if ( *(_DWORD *)(a1 + 872) )
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      else
        RaidAdapterReleaseInterruptLock(a1, LOBYTE(LockHandle.LockQueue.Next));
    }
    else if ( v6 )
    {
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + ((unsigned __int64)LODWORD(v6[1].Next) << 6)),
        v6);
    }
  }
  if ( (qword_140170460 & 4) != 0 )
    DbgLogRequest(a1, 0, v37, v7, v8, v38, v33);
  result = 3221225473LL;
  if ( v34 )
    return 0LL;
  return result;
}
