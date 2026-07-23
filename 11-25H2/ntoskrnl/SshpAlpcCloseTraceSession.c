/*
 * XREFs of SshpAlpcCloseTraceSession @ 0x1407581C8
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140757944 (SshpSessionManagerFlushControlEventBuffer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140489C20 (SSHSupportReleasePushLockExclusive.c)
 */

__int64 SshpAlpcCloseTraceSession()
{
  __int64 *v0; // rax
  __int64 *v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = KeAbPreAcquire((__int64)&stru_140F05788, 0LL);
  v1 = v0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05788, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F05788, v0, (__int64)&stru_140F05788);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  if ( !--dword_140F05798 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    KeSetTimer2((__int64)&unk_140F057A0, (LARGE_INTEGER)-50000000LL, 0LL, (__int64)v3);
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05788);
}
