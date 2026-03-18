/*
 * XREFs of IopQueueIrpToFileObject @ 0x1404E68A0
 * Callers:
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     IopIsIosbInLockedRange @ 0x140A183D4 (IopIsIosbInLockedRange.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     ObFastReferenceObject @ 0x140400CE0 (ObFastReferenceObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int64 *v3; // rbx
  unsigned __int64 v7; // rsi
  __int64 *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rbp
  void *v13; // rcx
  signed __int64 v14; // rax
  signed __int64 v15; // r8
  char result; // al
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = (volatile signed __int64 *)(a2 + 184);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  if ( (*(_DWORD *)(a2 + 80) & 0x400) == 0 && (!a3 || *(_QWORD *)(a2 + 176)) )
  {
    v8 = (__int64 *)(a2 + 192);
    v9 = (_QWORD *)(a1 + 32);
    v10 = *v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)(v10 + 8) = v9;
    *v8 = (__int64)v9;
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( (IopVelocityFlags & 1) == 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      v13 = CurrentThread->ApcState.Process;
    }
    else
    {
      if ( ObFastReferenceObject((signed __int64 *)&CurrentThread[1].SchedulerApc.SystemArgument2) )
        goto LABEL_13;
      v13 = (void *)((unsigned __int64)CurrentThread[1].SchedulerApc.SystemArgument2 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( !v13 )
        goto LABEL_13;
    }
    ObfReferenceObjectWithTag(v13, 0x70436F49u);
LABEL_13:
    ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v14 = *(_QWORD *)(a1 + 88);
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v14 & 0xFFFFFFFFFFFFFFF9uLL | ((v14 & 6) + 2),
              v14);
    }
    while ( v15 != v14 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v3, 0LL);
    else
      KiReleaseSpinLockInstrumented(v3, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v7);
    result = 1;
    goto LABEL_29;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v3, 0LL);
  else
    KiReleaseSpinLockInstrumented(v3, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v7);
  result = 0;
LABEL_29:
  __writecr8(v7);
  return result;
}
