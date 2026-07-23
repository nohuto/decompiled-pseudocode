/*
 * XREFs of RtlpWnfRegisterTpNotification @ 0x1800F1BEC
 * Callers:
 *     RtlpInitializeWnf @ 0x1800F1B08 (RtlpInitializeWnf.c)
 * Callees:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 *     NtSetWnfProcessNotificationEvent @ 0x1801638E0 (NtSetWnfProcessNotificationEvent.c)
 */

__int64 RtlpWnfRegisterTpNotification()
{
  NTSTATUS v0; // ebx
  PVOID Context; // [rsp+40h] [rbp+8h] BYREF
  PTP_WAIT WaitReturn; // [rsp+48h] [rbp+10h] BYREF

  WaitReturn = 0LL;
  Context = 0LL;
  v0 = ZwCreateEvent(&Context, 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( v0 >= 0 )
  {
    v0 = TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)RtlpWnfNotificationThread, Context, 0LL);
    if ( v0 >= 0 )
    {
      v0 = NtSetWnfProcessNotificationEvent(Context);
      if ( v0 >= 0 )
      {
        TpSetWaitEx(WaitReturn, Context, 0LL, 0LL);
        return (unsigned int)v0;
      }
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( Context )
    NtClose(Context);
  return (unsigned int)v0;
}
