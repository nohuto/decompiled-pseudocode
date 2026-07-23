/*
 * XREFs of SshpTracingWriteCollectionStateChange @ 0x140A91E4C
 * Callers:
 *     SshpSetCollectionActive @ 0x140474D70 (SshpSetCollectionActive.c)
 * Callees:
 *     SSHSupportEtwEventEnabled @ 0x140474570 (SSHSupportEtwEventEnabled.c)
 *     SSHSupportEtwWrite @ 0x14049EA8C (SSHSupportEtwWrite.c)
 *     SSHSupportQueryInterruptTime @ 0x1404ABEF8 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall SshpTracingWriteCollectionStateChange(ULONGLONG a1, char a2)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  __int64 v6; // r8
  BOOL v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 InterruptTime; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 *p_InterruptTime; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  BOOL *v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]

  result = SshpTraceHandleRegistered;
  if ( SshpTraceHandleRegistered )
  {
    result = SSHSupportEtwEventEnabled(a1, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_CHANGE);
    if ( result )
    {
      v9.Reserved = 0;
      v9.Ptr = a1;
      v9.Size = 16;
      v12 = 0;
      InterruptTime = SSHSupportQueryInterruptTime();
      v11 = 8;
      p_InterruptTime = &InterruptTime;
      v14 = 4;
      v15 = 0;
      v7 = a2 != 0;
      v13 = &v7;
      return SSHSupportEtwWrite(v5, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_CHANGE, v6, 3u, &v9);
    }
  }
  return result;
}
