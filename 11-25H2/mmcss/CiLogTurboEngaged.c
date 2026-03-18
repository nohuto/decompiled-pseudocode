/*
 * XREFs of CiLogTurboEngaged @ 0x1C00041D0
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001BB0 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x1C0001F80 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004EE0 (__security_check_cookie.c)
 */

NTSTATUS CiLogTurboEngaged()
{
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  UserData.Ptr = (ULONGLONG)&v1;
  v1 = 1;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &UserData);
}
