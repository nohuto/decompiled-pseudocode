/*
 * XREFs of PsIsSessionInCurrentServerSilo @ 0x1405E43C8
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x1402BAD30 (PsGetCurrentProcessSessionId.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 */

char __fastcall PsIsSessionInCurrentServerSilo(unsigned int a1)
{
  bool v3; // bl
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx

  if ( (unsigned int)PsGetCurrentProcessSessionId() == a1 )
    return 1;
  v3 = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSilo;
  PspLockProcessListExclusive((__int64)CurrentThread);
  v7 = (_QWORD *)PspSessionIdNodes;
  while ( v7 )
  {
    if ( a1 <= *((_DWORD *)v7 - 22) )
    {
      if ( a1 >= *((_DWORD *)v7 - 22) )
        break;
      v7 = (_QWORD *)*v7;
    }
    else
    {
      v7 = (_QWORD *)v7[1];
    }
  }
  if ( v7 && v7[8] == v6 && *((_DWORD *)v7 - 22) == a1 && (*((_DWORD *)v7 - 23) & 2) == 0 )
    v3 = *(v7 - 10) != (_QWORD)(v7 - 10);
  PspUnlockProcessListExclusive((__int64)CurrentThread);
  return v3;
}
