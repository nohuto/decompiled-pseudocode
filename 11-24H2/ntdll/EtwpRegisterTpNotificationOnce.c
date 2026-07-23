/*
 * XREFs of EtwpRegisterTpNotificationOnce @ 0x1800E54C4
 * Callers:
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 * Callees:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 *     NtTraceControl @ 0x180163B00 (NtTraceControl.c)
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
    if ( TpAllocWait(&WaitReturn, (PTP_WAIT_CALLBACK)EtwpNotificationThread, EventHandle, 0LL) >= 0 )
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
