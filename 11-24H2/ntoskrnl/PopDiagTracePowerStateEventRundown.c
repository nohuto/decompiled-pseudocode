/*
 * XREFs of PopDiagTracePowerStateEventRundown @ 0x140A2D734
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PopDiagTracePowerStateEventRundown()
{
  char *v0; // rbx
  __int64 v1; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  char *v3; // [rsp+40h] [rbp-38h]
  int v4; // [rsp+48h] [rbp-30h]
  int v5; // [rsp+4Ch] [rbp-2Ch]
  char *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN) )
  {
    v0 = (char *)&unk_140FD8FF0;
    v1 = 56LL;
    do
    {
      UserData.Reserved = 0;
      v5 = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)(v0 - 32);
      v3 = v0 - 16;
      UserData.Size = 4;
      v4 = 4;
      v6 = v0;
      v7 = 8;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE_RUNDOWN, 0LL, 3u, &UserData);
      v0 += 48;
      --v1;
    }
    while ( v1 );
  }
}
