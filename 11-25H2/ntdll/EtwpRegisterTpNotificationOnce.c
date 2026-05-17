/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x180001008
 * Callers:
 *     EtwpRegisterProvider @ 0x180045330 (EtwpRegisterProvider.c)
 * Callees:
 *     TpReleaseWait @ 0x18003C9C0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 */

__int64 EtwpRegisterTpNotificationOnce()
{
  char v1; // [rsp+20h] [rbp-30h]
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp-10h] BYREF
  int v4; // [rsp+78h] [rbp+28h] BYREF

  v4 = 0;
  v3 = 0LL;
  Handle = 0LL;
  v1 = 0;
  if ( (int)ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v1) >= 0 )
  {
    if ( (int)TpAllocWait(&v3, EtwpNotificationThread, Handle, 0LL) >= 0 )
    {
      TpSetWaitEx(v3, Handle, 0LL, 0LL);
      v4 = (int)Handle;
      if ( (int)NtTraceControl(27LL, &v4, 4LL) >= 0 )
        return 1LL;
    }
    if ( v3 )
      TpReleaseWait(v3);
  }
  if ( Handle )
    NtClose(Handle);
  return 0LL;
}
