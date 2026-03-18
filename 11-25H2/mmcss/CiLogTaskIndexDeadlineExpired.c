/*
 * XREFs of CiLogTaskIndexDeadlineExpired @ 0x1C0003950
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001BB0 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x1C0001F80 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004EE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexDeadlineExpired(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
}
