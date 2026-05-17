/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x180095B08
 * Callers:
 *     EtwpRegisterProvider @ 0x18001DD30 (EtwpRegisterProvider.c)
 * Callees:
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 */

__int64 EtwpRegisterTpNotificationOnce()
{
  volatile signed __int32 **v0; // rdx
  unsigned __int64 v1; // r8
  char v3; // [rsp+20h] [rbp-30h]
  int v4; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  _PEB_LDR_DATA *v6; // [rsp+40h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF

  v4 = 0;
  v7 = 0;
  v6 = 0LL;
  Handle = 0LL;
  v3 = 0;
  if ( (int)ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v3) >= 0 )
  {
    if ( (int)TpAllocWait((__int64 *)&v6, (__int64)EtwpNotificationThread, (int)Handle, 0LL) >= 0 )
    {
      TpSetWaitEx(v6, (_LIST_ENTRY *)Handle, 0LL, 0LL);
      v7 = (int)Handle;
      if ( (int)NtTraceControl(27LL, &v7, 4LL, 0LL, 0, &v4) >= 0 )
        return 1LL;
    }
    if ( v6 )
      TpReleaseWait((__int64)v6, v0, v1);
  }
  if ( Handle )
    NtClose(Handle);
  return 0LL;
}
