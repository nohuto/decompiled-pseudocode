/*
 * XREFs of PspNotifyProcessEffectiveIoLimitChanged @ 0x1403EF8F4
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1408E7DA0 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetProcessIoPriorityLimitCallback @ 0x140A66D10 (PspSetProcessIoPriorityLimitCallback.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x140207C84 (KeAbProcessBaseIoPriorityChange.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     KeAbThreadAreAllEntriesFree @ 0x1403EFA50 (KeAbThreadAreAllEntriesFree.c)
 *     PspLockProcessThreadListShared @ 0x1403EFAD0 (PspLockProcessThreadListShared.c)
 *     PspUnlockProcessThreadListShared @ 0x1403EFB40 (PspUnlockProcessThreadListShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
