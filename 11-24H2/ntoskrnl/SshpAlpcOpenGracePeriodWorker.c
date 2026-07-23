/*
 * XREFs of SshpAlpcOpenGracePeriodWorker @ 0x140767F80
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     SshpAlpcSendMessage @ 0x1407683A8 (SshpAlpcSendMessage.c)
 */

__int64 __fastcall SshpAlpcOpenGracePeriodWorker(int a1)
{
  char *v2; // rax
  __int64 v3; // rcx
  char *v4; // rbx
  int *v5; // rbx
  char v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v2 = (char *)KeAbPreAcquire((__int64)&stru_140F05E88, 0LL);
  v4 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05E88, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F05E88, v2, (__int64)&stru_140F05E88);
  if ( v4 )
    v4[10] = 1;
  v5 = &dword_140F05E98[48 * a1];
  if ( *((_BYTE *)v5 + 4) && !*v5 )
  {
    v7 = 0;
    SshpAlpcSendMessage(v3, 3LL, 4LL, &v8, v7);
    *((_BYTE *)v5 + 4) = 0;
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05E88);
}
