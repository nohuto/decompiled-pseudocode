/*
 * XREFs of PsLeavePriorityRegion @ 0x14027D050
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PsLeavePriorityRegion()
{
  struct _KTHREAD *CurrentThread; // rbx
  char v1; // si
  KIRQL v2; // di
  struct _LIST_ENTRY *v3; // r14
  __int64 Pool2; // rax
  struct _LIST_ENTRY *Blink; // rcx
  _KDPC **p_Dpc; // rsi
  _KDPC *v7; // rcx
  $0C9BAADE586F3878B709A13404AA1ECE *v8; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  _KDPC *v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v1 = 1;
    Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
    v3 = (struct _LIST_ENTRY *)Pool2;
    if ( Pool2 )
    {
      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
      v3[6].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
      v3[6].Blink = 0LL;
    }
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  }
  if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
  {
    _InterlockedDecrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry);
    if ( !v1 )
      return;
    if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    {
      if ( v3 )
      {
        Blink = CurrentThread[1].WaitBlock[0].WaitListEntry.Blink;
        if ( ($0C9BAADE586F3878B709A13404AA1ECE *)Blink->Flink != &CurrentThread[1].320 )
LABEL_19:
          __fastfail(3u);
        v3->Flink = (struct _LIST_ENTRY *)&CurrentThread[1].320;
        v3->Blink = Blink;
        Blink->Flink = v3;
        CurrentThread[1].WaitBlock[0].WaitListEntry.Blink = v3;
      }
    }
    else
    {
      if ( v3 )
        ExFreePoolWithTag(v3, 0x736F6F42u);
      p_Dpc = &CurrentThread[1].Timer.Dpc;
      while ( 1 )
      {
        v7 = *p_Dpc;
        if ( *p_Dpc == (_KDPC *)p_Dpc )
          break;
        v11 = *(_KDPC **)&v7->TargetInfoAsUlong;
        if ( (_KDPC **)v7->DpcListEntry.Next != p_Dpc || (_KDPC *)v11->DpcListEntry.Next != v7 )
          goto LABEL_19;
        *p_Dpc = v11;
        v11->DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)p_Dpc;
        ExFreePoolWithTag(v7, 0x736F6F42u);
      }
      v8 = &CurrentThread[1].320;
      while ( 1 )
      {
        Flink = v8->WaitBlock[0].WaitListEntry.Flink;
        if ( ($0C9BAADE586F3878B709A13404AA1ECE *)v8->WaitBlock[0].WaitListEntry.Flink == v8 )
          break;
        v10 = Flink->Flink;
        if ( ($0C9BAADE586F3878B709A13404AA1ECE *)Flink->Blink != v8 || v10->Blink != Flink )
          goto LABEL_19;
        v8->WaitBlock[0].WaitListEntry.Flink = v10;
        v10->Blink = (struct _LIST_ENTRY *)v8;
        ExFreePoolWithTag(Flink, 0x736F6F42u);
      }
    }
  }
  else if ( !v1 )
  {
    return;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16], 0LL);
  else
    KiReleaseSpinLockInstrumented(&CurrentThread[1].WaitBlockFill11[16], retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
