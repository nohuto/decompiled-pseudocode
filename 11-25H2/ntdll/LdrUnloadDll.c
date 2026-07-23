/*
 * XREFs of LdrUnloadDll @ 0x1800475F0
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18003DA30 (RtlpTpWorkUnposted.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     LdrpGetShimEngineInterface @ 0x1800D11F0 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlWnfDllUnloadCallback @ 0x180116330 (RtlWnfDllUnloadCallback.c)
 *     RtlLogMessageInEventLogger @ 0x18011FC3C (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180046370 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180046510 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
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

  if ( byte_1801D4988 )
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
  v8 = LdrpDecrementNodeLoadCountLockHeld(v7, 1, &v12);
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
      LdrpDecrementModuleLoadCountEx(v2, 0);
    }
    else
    {
      LdrpDrainWorkQueue(0LL);
      LdrpDecrementModuleLoadCountEx(v2, 0);
      LdrpDropLastInProgressCount();
    }
    v8 = 0;
  }
  LdrpDereferenceModule((PVOID)v2);
  return v8;
}
