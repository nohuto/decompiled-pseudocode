/*
 * XREFs of SshpAlpcCloseTraceSession @ 0x140767B88
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140767304 (SshpSessionManagerFlushControlEventBuffer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 */

__int64 SshpAlpcCloseTraceSession()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = KeAbPreAcquire((__int64)&stru_140F05BA8, 0LL);
  v1 = v0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05BA8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&stru_140F05BA8, (__int64)v0, (__int64)&stru_140F05BA8);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  if ( !--dword_140F05BB8 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    KeSetTimer2((__int64)&unk_140F05BC0, -50000000LL, 0LL, (__int64)v3);
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05BA8);
}
