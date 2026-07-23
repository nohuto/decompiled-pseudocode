/*
 * XREFs of SshpAlpcCloseTraceSession @ 0x140767DA8
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140766D64 (SshpSessionManagerFlushControlEventBuffer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 */

__int64 SshpAlpcCloseTraceSession()
{
  char *v0; // rax
  char *v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v0 = (char *)KeAbPreAcquire((__int64)&stru_140F05E88, 0LL);
  v1 = v0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05E88, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F05E88, v0, (__int64)&stru_140F05E88);
  if ( v1 )
    v1[10] = 1;
  if ( !--dword_140F05E98 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    KeSetTimer2((__int64)&unk_140F05EA0, (LARGE_INTEGER)-50000000LL, 0LL, (__int64)v3);
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05E88);
}
