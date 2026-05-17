/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x1800F749C
 * Callers:
 *     RtlpInitializeWnf @ 0x1800F73B8 (RtlpInitializeWnf.c)
 * Callees:
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x180165520 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  int v0; // ebx
  volatile signed __int32 **v1; // rdx
  unsigned __int64 v2; // r8
  char v4; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  _PEB_LDR_DATA *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Handle = 0LL;
  v4 = 0;
  v0 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 1LL, v4);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait((__int64 *)&v6, (__int64)RtlpWnfNotificationThread, (int)Handle, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Handle);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(v6, (_LIST_ENTRY *)Handle, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( v6 )
      TpReleaseWait((__int64)v6, v1, v2);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v0;
}
