/*
 * XREFs of PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E2874
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1408D85E4 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessIoPriorityLimitCallback @ 0x140A5FAF0 (PspSetProcessIoPriorityLimitCallback.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x14032F264 (KeAbProcessBaseIoPriorityChange.c)
 *     KeAbThreadAreAllEntriesFree @ 0x1403E29D0 (KeAbThreadAreAllEntriesFree.c)
 *     PspLockProcessThreadListShared @ 0x1403E2A50 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E2AC0 (PspUnlockProcessThreadListShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PspNotifyProcessEffectiveIoLimitChanged(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rdx
  _QWORD **v9; // rdi
  _QWORD *i; // rbx
  __int64 v11; // r11
  int IoPriorityThread; // eax
  int v14; // r9d
  __int64 v15; // r11
  _QWORD *j; // rbx
  unsigned int v17; // eax
  KSPIN_LOCK *v18; // r10
  unsigned int v19; // r9d

  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared(a1, CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
  }
  v9 = (_QWORD **)(a1 + 880);
  for ( i = *(_QWORD **)(a1 + 880); i != v9; i = (_QWORD *)*i )
  {
    if ( !(unsigned int)KeAbThreadAreAllEntriesFree(i - 175) )
    {
      IoPriorityThread = PsGetIoPriorityThread(v11);
      if ( v14 != IoPriorityThread )
        KeAbProcessBaseIoPriorityChange(v15, v14, IoPriorityThread);
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  __writecr8(CurrentIrql);
  if ( a3 )
  {
    for ( j = *v9; j != v9; j = (_QWORD *)*j )
    {
      v17 = PsGetIoPriorityThread((__int64)(j - 175));
      if ( v19 < v17 )
        IoBoostThreadIoPriority(v18, v17, 0);
    }
  }
  return PspUnlockProcessThreadListShared(a1, CurrentThread);
}
