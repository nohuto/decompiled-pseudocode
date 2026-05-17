/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x18001C830
 * Callers:
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180019870 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x180065128 (LdrpCorInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x18001C9D0 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, unsigned int a2)
{
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // edx
  char *v6; // rcx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *SharedData; // rdx
  __int64 v13; // rcx
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0;
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
  v9 = LdrpDecrementNodeLoadCountLockHeld(v8, a2, &v17);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v17 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v8);
    RtlLeaveCriticalSection((__int64)&LdrpLoaderLock);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, SharedData, v10, v11) )
        v16 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v16 = 2147353477LL;
      if ( (*(_BYTE *)v16 & 0x20) != 0 )
      {
        LOBYTE(v15) = 8;
        LdrpLogEtwEvent(5282, 0, 0, v15, 0LL, 0LL);
      }
    }
  }
  return v9;
}
