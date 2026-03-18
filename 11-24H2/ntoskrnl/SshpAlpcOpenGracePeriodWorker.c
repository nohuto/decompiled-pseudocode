/*
 * XREFs of SshpAlpcOpenGracePeriodWorker @ 0x140767D60
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 *     SshpAlpcSendMessage @ 0x140768188 (SshpAlpcSendMessage.c)
 */

__int64 __fastcall SshpAlpcOpenGracePeriodWorker(int a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  int *v5; // rbx
  char v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v2 = KeAbPreAcquire((__int64)&stru_140F05BA8, 0LL);
  v4 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05BA8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&stru_140F05BA8, (__int64)v2, (__int64)&stru_140F05BA8);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = &dword_140F05BB8[48 * a1];
  if ( *((_BYTE *)v5 + 4) && !*v5 )
  {
    v7 = 0;
    SshpAlpcSendMessage(v3, 3LL, 4LL, &v8, v7);
    *((_BYTE *)v5 + 4) = 0;
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05BA8);
}
