/*
 * XREFs of EtwUnregister @ 0x140A52EC0
 * Callers:
 *     BapdWriteEtwEvents @ 0x14049F614 (BapdWriteEtwEvents.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140604C20 (McGenEventUnregister_EtwUnregister.c)
 *     CarCleanup @ 0x140614ABC (CarCleanup.c)
 *     DifEtwUnregisterWrapper @ 0x1406198E0 (DifEtwUnregisterWrapper.c)
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     WmipGECleanup @ 0x1407A5560 (WmipGECleanup.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407A57C4 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwUnregister @ 0x1407A58AC (WmipProcessLegacyEtwUnregister.c)
 *     VrpRegistryUnload @ 0x140829B90 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x1409E9F88 (DbgkpStartSystemErrorHandler.c)
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 *     BapdRecordFirmwareBootStats @ 0x140B62D80 (BapdRecordFirmwareBootStats.c)
 *     VslpIumInitializeTelemetry @ 0x140C1BCAC (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140C2E7A4 (ObpShutdownTraceLoggingProvider.c)
 *     SshpUninitialize @ 0x140C36428 (SshpUninitialize.c)
 *     PerfDiagInitialize @ 0x140C3E7DC (PerfDiagInitialize.c)
 *     BapdpRecordIumStatus @ 0x140C41A70 (BapdpRecordIumStatus.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140837CFC (EtwpReleaseProviderTraitsReference.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  char *v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  char *v4; // rax
  char *v5; // rbp
  struct _KTHREAD *v6; // rax
  unsigned __int64 *v7; // rsi
  char *v8; // rax
  char *v9; // rbp
  _QWORD *v10; // rcx
  void **v11; // rax
  char **v12; // rdx
  void **v13; // rcx
  __int64 *v14; // rsi
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  __int64 v17; // rtt
  __int64 v18; // rax
  __int64 *v19; // rcx
  ULONG v21; // r9d
  __int64 *v22; // rsi
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rtt
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-58h] BYREF

  v1 = (char *)(RegHandle & -(__int64)(RegHandle != 0));
  if ( !v1 )
    return -1073741816;
  if ( (*(_BYTE *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x62) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle & -(__int64)(RegHandle != 0), 1uLL, 0LL);
  if ( *(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x28) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = (unsigned __int64 *)(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x28) + 664LL);
    v4 = (char *)KeAbPreAcquire((__int64)v3, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
    if ( v5 )
      v5[10] = 1;
    *(_QWORD *)(*((_QWORD *)v1 + 5) + 672LL) = KeGetCurrentThread();
  }
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  v7 = (unsigned __int64 *)(*((_QWORD *)v1 + 4) + 664LL);
  v8 = (char *)KeAbPreAcquire((__int64)v7, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v9 )
    v9[10] = 1;
  *(_QWORD *)(*((_QWORD *)v1 + 4) + 672LL) = KeGetCurrentThread();
  v10 = *(_QWORD **)v1;
  if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1
    || (v11 = (void **)*((_QWORD *)v1 + 1), *v11 != v1)
    || (*v11 = v10, v10[1] = v11, v12 = (char **)*((_QWORD *)v1 + 2), v12[1] != v1 + 16)
    || (v13 = (void **)*((_QWORD *)v1 + 3), *v13 != v1 + 16) )
  {
    __fastfail(3u);
  }
  *v13 = v12;
  v12[1] = (char *)v13;
  *(_QWORD *)(*((_QWORD *)v1 + 4) + 672LL) = 0LL;
  v14 = (__int64 *)(*((_QWORD *)v1 + 4) + 664LL);
  _m_prefetchw(v14);
  v15 = *v14;
  v16 = *v14 - 16;
  if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( (v15 & 2) != 0 || (v17 = *v14, v17 != _InterlockedCompareExchange64(v14, v16, v15)) )
    ExfReleasePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KeLeaveCriticalRegion();
  v18 = *((_QWORD *)v1 + 5);
  if ( v18 )
  {
    *(_QWORD *)(v18 + 672) = 0LL;
    v22 = (__int64 *)(*((_QWORD *)v1 + 5) + 664LL);
    _m_prefetchw(v22);
    v23 = *v22;
    v24 = *v22 - 16;
    if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v24 = 0LL;
    if ( (v23 & 2) != 0 || (v25 = *v22, v25 != _InterlockedCompareExchange64(v22, v24, v23)) )
      ExfReleasePushLock(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
  {
    v21 = 0;
    if ( *((_QWORD *)v1 + 4) != -40LL )
    {
      UserData.Ptr = *((_QWORD *)v1 + 4) + 40LL;
      v21 = 1;
      *(_QWORD *)&UserData.Size = 16LL;
    }
    EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS, 0LL, v21, &UserData);
  }
  EtwpUnreferenceGuidEntry(*((__int64 **)v1 + 4));
  v19 = (__int64 *)*((_QWORD *)v1 + 5);
  if ( v19 )
    EtwpUnreferenceGuidEntry(v19);
  EtwpReleaseProviderTraitsReference((__int64)v1);
  ExFreePoolWithTag(v1, 0);
  return 0;
}
