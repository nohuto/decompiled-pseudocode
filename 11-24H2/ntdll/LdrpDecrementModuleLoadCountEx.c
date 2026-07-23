/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x180049230
 * Callers:
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180046270 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x1800493D0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, unsigned int a2)
{
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  char *v6; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  _DWORD *SharedData; // rdx
  __int64 v11; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v6 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v6 )
      {
        if ( v6 )
          *(_QWORD *)v6 = &LdrpModuleDatatableLock;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock);
  v8 = *(_QWORD *)(a1 + 152);
  v9 = LdrpDecrementNodeLoadCountLockHeld(v8, a2, &v14);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v14 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v8);
    RtlLeaveCriticalSection(&LdrpLoaderLock);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v11 = 2147353476LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v13 = 2147353477LL;
      if ( (*(_BYTE *)v13 & 0x20) != 0 )
        LdrpLogEtwEvent(5282, 0LL, 0, 8, 0LL, 0LL);
    }
  }
  return v9;
}
