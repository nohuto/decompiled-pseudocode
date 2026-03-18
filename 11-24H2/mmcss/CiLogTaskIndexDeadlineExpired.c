/*
 * XREFs of CiLogTaskIndexDeadlineExpired @ 0x140003950
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x140001BB0 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x140001F80 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x140002650 (CiSchedulerWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1400059D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogTaskIndexDeadlineExpired(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = a1 + 144;
  return EtwWrite(RegHandle, &CiTaskIndexDeadlineExpiredEvent, 0LL, 1u, &UserData);
}
