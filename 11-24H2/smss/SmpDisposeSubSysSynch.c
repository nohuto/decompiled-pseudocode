/*
 * XREFs of SmpDisposeSubSysSynch @ 0x14001942C
 * Callers:
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpCompleteSubSysStatusChange @ 0x14000D5E0 (SmpCompleteSubSysStatusChange.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpDisposeSubSysSynch(HANDLE *BaseAddress)
{
  HANDLE *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( BaseAddress )
  {
    v1 = BaseAddress;
    if ( (unsigned int)SmpSubSysSynchCacheSize >= 0x10 )
      goto LABEL_6;
    NtClearEvent(BaseAddress[1]);
    RtlAcquireSRWLockExclusive(&SmpSubSysSynchLock, v2, v3);
    if ( (unsigned int)SmpSubSysSynchCacheSize < 0x10 )
    {
      ++SmpSubSysSynchCacheSize;
      *v1 = (HANDLE)SmpSubSysSynchCache;
      SmpSubSysSynchCache = (__int64)v1;
      v1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(&SmpSubSysSynchLock);
    if ( v1 )
    {
LABEL_6:
      NtClose(v1[1]);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
    }
  }
}
