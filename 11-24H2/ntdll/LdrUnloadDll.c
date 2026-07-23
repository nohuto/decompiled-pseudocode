/*
 * XREFs of LdrUnloadDll @ 0x1800480B0
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180036888 (LdrpGetShimEngineInterface.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlWnfDllUnloadCallback @ 0x18010E5F0 (RtlWnfDllUnloadCallback.c)
 *     RtlLogMessageInEventLogger @ 0x18011C59C (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800493D0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  __int64 v2; // rsi
  unsigned __int64 Root; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  NTSTATUS v8; // ebx
  char *v9; // rcx
  char *v11; // rcx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  if ( byte_1801D1908 )
    return 0;
  v2 = 0LL;
  if ( !DllHandle )
    return -1073741515;
  if ( DllHandle == LdrpSystemDllBase )
  {
    v2 = LdrpNtDllDataTableEntry;
    goto LABEL_19;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
      goto LABEL_18;
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !Root )
    goto LABEL_18;
  do
  {
    if ( (unsigned __int64)DllHandle >= *(_QWORD *)(Root - 152) )
    {
      if ( (unsigned __int64)DllHandle <= *(_QWORD *)(Root - 152) )
        break;
      v4 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v4 )
      {
        Root ^= v4;
        continue;
      }
LABEL_12:
      Root = v4;
      continue;
    }
    v4 = *(_QWORD *)Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v4 )
      goto LABEL_12;
    Root ^= v4;
  }
  while ( Root );
  if ( Root )
  {
    v2 = Root - 200;
    v5 = *(_QWORD *)(Root - 48);
    if ( *(_DWORD *)(v5 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v5 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 276));
  }
LABEL_18:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_19:
  if ( !v2 )
    return -1073741515;
  v6 = *(_QWORD *)(v2 + 152);
  v12 = 0;
  if ( *(_DWORD *)(v6 + 24) == 1 )
    goto LABEL_33;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v7 = *(_QWORD *)(v2 + 152);
  v8 = LdrpDecrementNodeLoadCountLockHeld(v7, 1LL, &v12);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v12 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v7);
    RtlLeaveCriticalSection(&LdrpLoaderLock);
    v9 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 554 : (char *)2147353476;
    if ( *v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v11 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v11 & 0x20) != 0 )
        LdrpLogEtwEvent(5282, 0LL, 0, 8, 0LL, 0LL);
    }
  }
  if ( v8 == -1073741267 )
  {
LABEL_33:
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LdrpDecrementModuleLoadCountEx(v2, 0LL);
    }
    else
    {
      LdrpDrainWorkQueue(0LL);
      LdrpDecrementModuleLoadCountEx(v2, 0LL);
      LdrpDropLastInProgressCount();
    }
    v8 = 0;
  }
  LdrpDereferenceModule((char *)v2);
  return v8;
}
