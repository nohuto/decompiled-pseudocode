/*
 * XREFs of EtwUnregister @ 0x140A01CC0
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x1404A4354 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x14057F3D0 (HvlPhase2Initialize.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1405FB2D8 (McGenEventUnregister_EtwUnregister.c)
 *     CarCleanup @ 0x14060A53C (CarCleanup.c)
 *     DifEtwUnregisterWrapper @ 0x14060F360 (DifEtwUnregisterWrapper.c)
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     WmipGECleanup @ 0x140796050 (WmipGECleanup.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407962B4 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwUnregister @ 0x14079639C (WmipProcessLegacyEtwUnregister.c)
 *     VrpRegistryUnload @ 0x140819560 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408B7284 (DbgkpStartSystemErrorHandler.c)
 *     EtwpCoverageSamplerStop @ 0x140ACFEE0 (EtwpCoverageSamplerStop.c)
 *     BapdRecordFirmwareBootStats @ 0x140B50B80 (BapdRecordFirmwareBootStats.c)
 *     VslpIumInitializeTelemetry @ 0x140C08BD4 (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140C1B584 (ObpShutdownTraceLoggingProvider.c)
 *     SshpUninitialize @ 0x140C2301C (SshpUninitialize.c)
 *     PerfDiagInitialize @ 0x140C2B3A4 (PerfDiagInitialize.c)
 *     BapdpRecordIumStatus @ 0x140C2E644 (BapdpRecordIumStatus.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A01F80 (EtwpReleaseProviderTraitsReference.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  char *v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rbp
  struct _KTHREAD *v6; // rax
  unsigned __int64 *v7; // rsi
  __int64 *v8; // rax
  __int64 *v9; // rbp
  _QWORD *v10; // rcx
  void **v11; // rax
  char **v12; // rdx
  void **v13; // rcx
  __int64 *v15; // rsi
  signed __int64 v16; // rax
  signed __int64 v17; // rdx
  __int64 v18; // rtt
  __int64 v19; // rax
  volatile signed __int64 *v20; // rcx
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
    v3 = (unsigned __int64 *)(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x28) + 408LL);
    v4 = KeAbPreAcquire((__int64)v3, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    *(_QWORD *)(*((_QWORD *)v1 + 5) + 416LL) = KeGetCurrentThread();
  }
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  v7 = (unsigned __int64 *)(*((_QWORD *)v1 + 4) + 408LL);
  v8 = KeAbPreAcquire((__int64)v7, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  *(_QWORD *)(*((_QWORD *)v1 + 4) + 416LL) = KeGetCurrentThread();
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
  *(_QWORD *)(*((_QWORD *)v1 + 4) + 416LL) = 0LL;
  v15 = (__int64 *)(*((_QWORD *)v1 + 4) + 408LL);
  _m_prefetchw(v15);
  v16 = *v15;
  v17 = *v15 - 16;
  if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v17 = 0LL;
  if ( (v16 & 2) != 0 || (v18 = *v15, v18 != _InterlockedCompareExchange64(v15, v17, v16)) )
    ExfReleasePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegion();
  v19 = *((_QWORD *)v1 + 5);
  if ( v19 )
  {
    *(_QWORD *)(v19 + 416) = 0LL;
    v22 = (__int64 *)(*((_QWORD *)v1 + 5) + 408LL);
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
  EtwpUnreferenceGuidEntry(*((volatile signed __int64 **)v1 + 4));
  v20 = (volatile signed __int64 *)*((_QWORD *)v1 + 5);
  if ( v20 )
    EtwpUnreferenceGuidEntry(v20);
  EtwpReleaseProviderTraitsReference(v1);
  ExFreePoolWithTag(v1, 0);
  return 0;
}
