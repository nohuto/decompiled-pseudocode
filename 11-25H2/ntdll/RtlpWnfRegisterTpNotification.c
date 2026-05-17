/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x1800F90FC
 * Callers:
 *     RtlpInitializeWnf @ 0x1800F9018 (RtlpInitializeWnf.c)
 * Callees:
 *     TpReleaseWait @ 0x18003C9C0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x180166AB0 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  char v4; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Handle = 0LL;
  v4 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v4);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait((_PEB_LDR_DATA *)&v6, (__int64)RtlpWnfNotificationThread, (__int64)Handle, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v6, (__int64)Handle, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v6 )
      TpReleaseWait(v6, v1, v2);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}
