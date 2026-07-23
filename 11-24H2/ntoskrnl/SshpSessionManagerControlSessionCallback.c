/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x140766D00
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140766D64 (SshpSessionManagerFlushControlEventBuffer.c)
 */

__int64 SshpSessionManagerControlSessionCallback()
{
  char *v0; // rax
  char *v1; // rbx

  v0 = (char *)KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
  v1 = v0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v0, (__int64)&SshpSessionManagerLock);
  if ( v1 )
    v1[10] = 1;
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
