/*
 * XREFs of PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E69D4
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1408D8B68 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessIoPriorityLimitCallback @ 0x140A640A0 (PspSetProcessIoPriorityLimitCallback.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x14020DC88 (KeAbProcessBaseIoPriorityChange.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     KeAbThreadAreAllEntriesFree @ 0x1403E6B30 (KeAbThreadAreAllEntriesFree.c)
 *     PspLockProcessThreadListShared @ 0x1403E6BB0 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403E6C20 (PspUnlockProcessThreadListShared.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(v6);
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
