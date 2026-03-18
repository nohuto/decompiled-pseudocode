/*
 * XREFs of NtUserWaitMessage @ 0x14016DDD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x140063CE4 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x14016DE40 (ClientWaitMessageExMPH.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 NtUserWaitMessage()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx

  EnterCrit(0LL, 0LL);
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v1, v0);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  if ( *(int *)(CurrentThreadNonPaged[61] + 28LL) <= 0 )
    v3 = xxxSleepThread2(15615LL, 0LL, 1, 0, 0LL);
  else
    v3 = ClientWaitMessageExMPH(15615LL, 0LL);
  v5 = v3;
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
