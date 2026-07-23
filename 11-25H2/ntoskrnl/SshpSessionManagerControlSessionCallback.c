/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x1407578E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140489C20 (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140757944 (SshpSessionManagerFlushControlEventBuffer.c)
 */

__int64 SshpSessionManagerControlSessionCallback()
{
  __int64 *v0; // rax
  __int64 *v1; // rbx

  v0 = KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
  v1 = v0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v0, (__int64)&SshpSessionManagerLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
