/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x1407672A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140767304 (SshpSessionManagerFlushControlEventBuffer.c)
 */

__int64 SshpSessionManagerControlSessionCallback()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx

  v0 = KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
  v1 = v0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&SshpSessionManagerLock, (__int64)v0, (__int64)&SshpSessionManagerLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
