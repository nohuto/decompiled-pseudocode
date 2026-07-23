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
  ULONG ReturnLength; // [rsp+30h] [rbp-20h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-18h] BYREF
  PTP_WAIT WaitReturn; // [rsp+40h] [rbp-10h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+28h] BYREF

  ReturnLength = 0;
  InputBuffer = 0;
  WaitReturn = 0LL;
  EventHandle = 0LL;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
  {
    if ( TpAllocWait(&WaitReturn, EtwpNotificationThread, EventHandle, 0LL) >= 0 )
    {
      TpSetWaitEx(WaitReturn, EventHandle, 0LL, 0LL);
      InputBuffer = (int)EventHandle;
      if ( NtTraceControl(EtwAddNotificationEvent, &InputBuffer, 4u, 0LL, 0, &ReturnLength) >= 0 )
        return 1LL;
    }
    if ( WaitReturn )
      TpReleaseWait(WaitReturn);
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return 0LL;
}
