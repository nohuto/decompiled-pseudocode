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

__int64 __fastcall LdrUnloadDll(unsigned __int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  char *v9; // rcx
  char *v11; // rcx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  if ( byte_1801D4988 )
    return 0LL;
  v2 = 0LL;
  if ( !a1 )
    return 3221225781LL;
  if ( a1 == LdrpSystemDllBase )
  {
    v2 = LdrpNtDllDataTableEntry;
    goto LABEL_19;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v3 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D44B0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_18;
    v3 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v3 )
    goto LABEL_18;
  do
  {
    if ( a1 >= *(_QWORD *)(v3 - 152) )
    {
      if ( a1 <= *(_QWORD *)(v3 - 152) )
        break;
      v4 = *(_QWORD *)(v3 + 8);
      if ( (qword_1801D44B0 & 1) != 0 && v4 )
      {
        v3 ^= v4;
        continue;
      }
LABEL_12:
      v3 = v4;
      continue;
    }
    v4 = *(_QWORD *)v3;
    if ( (qword_1801D44B0 & 1) == 0 || !v4 )
      goto LABEL_12;
    v3 ^= v4;
  }
  while ( v3 );
  if ( v3 )
  {
    v2 = v3 - 200;
    v5 = *(_QWORD *)(v3 - 48);
    if ( *(_DWORD *)(v5 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v5 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 276));
  }
LABEL_18:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_19:
  if ( !v2 )
    return 3221225781LL;
  v6 = *(_QWORD *)(v2 + 152);
  v12 = 0;
  if ( *(_DWORD *)(v6 + 24) == 1 )
    goto LABEL_33;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
  v7 = *(_QWORD *)(v2 + 152);
  v8 = LdrpDecrementNodeLoadCountLockHeld(v7, 1, &v12);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v12 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v7);
    RtlLeaveCriticalSection(&LdrpLoaderLock);
    v9 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 554 : (char *)2147353476;
    if ( *v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v11 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
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
  LdrpDereferenceModule(v2);
  return v8;
}
