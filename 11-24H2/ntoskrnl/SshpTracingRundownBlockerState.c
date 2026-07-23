/*
 * XREFs of SshpTracingRundownBlockerState @ 0x140A70784
 * Callers:
 *     SshpEtwEnableCallback @ 0x140A70760 (SshpEtwEnableCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x14048173C (SshpTracingWriteBlockerStateRundown.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 */

__int64 SshpTracingRundownBlockerState()
{
  char *v0; // rax
  char *v1; // rbx
  __int64 *i; // rbx
  __int64 j; // rdi
  char *v4; // rax
  char *v5; // rdi

  v0 = (char *)KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL);
  v1 = v0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpLibraryListLock, v0, (__int64)&SshpLibraryListLock);
  if ( v1 )
    v1[10] = 1;
  for ( i = (__int64 *)SshpLibraryList; i != &SshpLibraryList; i = (__int64 *)*i )
  {
    v4 = (char *)KeAbPreAcquire((__int64)(i + 2), 0LL);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)i + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i + 2, v4, (__int64)(i + 2));
    if ( v5 )
      v5[10] = 1;
    for ( j = i[19]; (__int64 *)j != i + 19; j = *(_QWORD *)j )
      SshpTracingWriteBlockerStateRundown(&SLEEPSTUDY_EVT_BLOCKER_STATE_RUNDOWN, *(PKSPIN_LOCK *)(j + 112));
    SSHSupportReleasePushLockExclusive(i + 2);
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpLibraryListLock);
}
