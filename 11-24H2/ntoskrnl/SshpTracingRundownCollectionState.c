/*
 * XREFs of SshpTracingRundownCollectionState @ 0x140A70884
 * Callers:
 *     SshpEtwEnableCallback @ 0x140A70760 (SshpEtwEnableCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SSHSupportEtwEventEnabled @ 0x140474570 (SSHSupportEtwEventEnabled.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportEtwWrite @ 0x14049EA8C (SSHSupportEtwWrite.c)
 *     SSHSupportQueryInterruptTime @ 0x1404ABEF8 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall SshpTracingRundownCollectionState(__int64 a1)
{
  char result; // al
  ULONG_PTR *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rax
  char *v5; // rdi
  ULONG_PTR v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 InterruptTime; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  __int64 *p_InterruptTime; // [rsp+58h] [rbp+7h]
  __int64 v15; // [rsp+60h] [rbp+Fh]
  int *v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  int *v18; // [rsp+78h] [rbp+27h]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  ULONG_PTR v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  v11 = 0;
  v10 = 0;
  InterruptTime = 0LL;
  result = SSHSupportEtwEventEnabled(a1, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_RUNDOWN);
  if ( result )
  {
    v2 = &SshpBlockerCollections;
    v3 = 9LL;
    do
    {
      v4 = (char *)KeAbPreAcquire((__int64)v2, 0LL);
      v5 = v4;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
        ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
      if ( v5 )
        v5[10] = 1;
      v6 = v2[2];
      v11 = *((_DWORD *)v2 + 7) & 1;
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(v6 + 2 * v7) );
      v10 = v7;
      InterruptTime = SSHSupportQueryInterruptTime();
      v13.Ptr = v2[1];
      p_InterruptTime = &InterruptTime;
      v16 = &v11;
      v18 = &v10;
      v20 = v2[2];
      *(_QWORD *)&v13.Size = 16LL;
      v21 = 2 * v10;
      v15 = 8LL;
      v17 = 4LL;
      v19 = 4LL;
      v22 = 0;
      SSHSupportEtwWrite(v8, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_RUNDOWN, v9, 5u, &v13);
      result = SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v2);
      v2 += 6;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
