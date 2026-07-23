/*
 * XREFs of KeRundownQueueEx @ 0x14040F308
 * Callers:
 *     KeRundownQueue @ 0x14040F220 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x14040F238 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x1408389E0 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x14040F3F8 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14040F810 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char *__fastcall KeRundownQueueEx(char *SystemArgument1, char a2)
{
  char *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  char *v5; // rax
  char *v6; // rdi
  char **v8; // rcx

  v3 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
  v5 = v3 + 24;
  v6 = (char *)*((_QWORD *)v3 + 3);
  if ( v6 == v3 + 24 )
  {
    v6 = 0LL;
  }
  else
  {
    *((_DWORD *)v3 + 1) = 0;
    v8 = (char **)*((_QWORD *)v3 + 4);
    if ( *((char **)v6 + 1) != v5 || *v8 != v5 )
      __fastfail(3u);
    *v8 = v6;
    *((_QWORD *)v6 + 1) = v8;
    *((_QWORD *)v3 + 4) = v3 + 24;
    *(_QWORD *)v5 = v5;
  }
  KeRundownQueueCommon(v3, a2);
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( a2 )
    KiAcquireReleaseObjectRundownLockExclusive(v3);
  KiExitDispatcher((unsigned __int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  return v6;
}
