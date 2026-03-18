/*
 * XREFs of EtwUnregister @ 0x140A00060
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x1404A4884 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140607618 (McGenEventUnregister_EtwUnregister.c)
 *     CarCleanup @ 0x1406164FC (CarCleanup.c)
 *     DifEtwUnregisterWrapper @ 0x14061B320 (DifEtwUnregisterWrapper.c)
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     WmipGECleanup @ 0x1407A5420 (WmipGECleanup.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407A5684 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwUnregister @ 0x1407A576C (WmipProcessLegacyEtwUnregister.c)
 *     VrpRegistryUnload @ 0x140829360 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x140A572E4 (DbgkpStartSystemErrorHandler.c)
 *     EtwpCoverageSamplerStop @ 0x140ADAAD0 (EtwpCoverageSamplerStop.c)
 *     BapdRecordFirmwareBootStats @ 0x140B60CB0 (BapdRecordFirmwareBootStats.c)
 *     VslpIumInitializeTelemetry @ 0x140C19C74 (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140C2C684 (ObpShutdownTraceLoggingProvider.c)
 *     SshpUninitialize @ 0x140C342E8 (SshpUninitialize.c)
 *     PerfDiagInitialize @ 0x140C3C684 (PerfDiagInitialize.c)
 *     BapdpRecordIumStatus @ 0x140C3F920 (BapdpRecordIumStatus.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A00320 (EtwpReleaseProviderTraitsReference.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  char *v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  struct _KTHREAD *v6; // rax
  unsigned __int64 *v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
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
    v4 = KeAbPreAcquire((__int64)v3, 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      ExfAcquirePushLockExclusiveEx(v3, (__int64)v4, (__int64)v3);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    *(_QWORD *)(*((_QWORD *)v1 + 5) + 672LL) = KeGetCurrentThread();
  }
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  v7 = (unsigned __int64 *)(*((_QWORD *)v1 + 4) + 664LL);
  v8 = KeAbPreAcquire((__int64)v7, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, (__int64)v8, (__int64)v7);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
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
  EtwpReleaseProviderTraitsReference(v1);
  ExFreePoolWithTag(v1, 0);
  return 0;
}
