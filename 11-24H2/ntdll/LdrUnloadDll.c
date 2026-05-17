/*
 * XREFs of LdrUnloadDll @ 0x18001B6B0
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180009E88 (LdrpGetShimEngineInterface.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     RtlWnfDllUnloadCallback @ 0x1801133A0 (RtlWnfDllUnloadCallback.c)
 *     RtlLogMessageInEventLogger @ 0x18011E36C (RtlLogMessageInEventLogger.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x18001C9D0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rcx
  int v18; // r9d
  char *v19; // rcx
  int v20; // [rsp+48h] [rbp+10h] BYREF

  if ( byte_1801D2908 )
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
  if ( (qword_1801D2460 & 1) != 0 )
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
      if ( (qword_1801D2460 & 1) != 0 && v4 )
      {
        v3 ^= v4;
        continue;
      }
LABEL_12:
      v3 = v4;
      continue;
    }
    v4 = *(_QWORD *)v3;
    if ( (qword_1801D2460 & 1) == 0 || !v4 )
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
  v20 = 0;
  if ( *(_DWORD *)(v6 + 24) == 1 )
    goto LABEL_33;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v7 = *(_QWORD *)(v2 + 152);
  v8 = LdrpDecrementNodeLoadCountLockHeld(v7, 1LL, &v20);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v20 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v7);
    RtlLeaveCriticalSection((__int64)&LdrpLoaderLock);
    v16 = (unsigned int)RtlGetCurrentServiceSessionId(v10, v9, v11, v12)
        ? (char *)NtCurrentPeb()->SharedData + 554
        : (char *)2147353476;
    if ( *v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v19 = (unsigned int)RtlGetCurrentServiceSessionId(v16, v13, v14, v15)
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v19 & 0x20) != 0 )
      {
        LOBYTE(v18) = 8;
        LdrpLogEtwEvent(5282, 0, 0, v18, 0LL, 0LL);
      }
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
      LdrpDrainWorkQueue(0);
      LdrpDecrementModuleLoadCountEx(v2, 0LL);
      LdrpDropLastInProgressCount();
    }
    v8 = 0;
  }
  LdrpDereferenceModule(v2);
  return v8;
}
