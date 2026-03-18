/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x14066EF88
 * Callers:
 *     VmProbeAndLockPages @ 0x14064A330 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14064A3E0 (VmUnlockPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiValidateMdlTracker @ 0x1404AE6DC (MiValidateMdlTracker.c)
 *     MiReadProcessNumberOfLockedPages @ 0x1404F02D8 (MiReadProcessNumberOfLockedPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // r14
  bool v6; // di
  struct _LIST_ENTRY *Flink; // rsi
  volatile LONG *p_Blink; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // r13
  unsigned __int64 *v13; // r15
  struct _LIST_ENTRY *v14; // rcx
  _QWORD *v15; // r14
  int v16; // eax
  _QWORD *v17; // rax
  ULONG_PTR ProcessNumberOfLockedPages; // rax
  ULONG_PTR v19; // rax
  KIRQL v20; // [rsp+70h] [rbp+18h]

  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) == 0 )
    return result;
  v5 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  v6 = 0;
  if ( !v5 )
    v5 = PsInitialSystemProcess;
  Flink = v5[2].Header.WaitListHead.Flink;
  if ( !Flink )
    return result;
  p_Blink = (volatile LONG *)&Flink[1].Blink;
  if ( KeGetCurrentIrql() == 2 )
  {
    v20 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(p_Blink);
  }
  else
  {
    v20 = ExAcquireSpinLockExclusive(p_Blink);
  }
  if ( a2 )
  {
    Blink = Flink->Flink;
    while ( Blink )
    {
      if ( (struct _LIST_ENTRY *)BugCheckParameter2 >= Blink[1].Blink )
      {
        if ( (struct _LIST_ENTRY *)BugCheckParameter2 <= Blink[1].Blink )
          break;
        Blink = Blink->Blink;
      }
      else
      {
        Blink = Blink->Flink;
      }
    }
    if ( !Blink )
    {
      if ( HIDWORD(Flink[1].Blink) )
      {
        ProcessNumberOfLockedPages = MiReadProcessNumberOfLockedPages((__int64)v5);
        KeBugCheckEx(
          0x76u,
          8uLL,
          BugCheckParameter2,
          ProcessNumberOfLockedPages,
          (ULONG_PTR)v5[2].Header.WaitListHead.Flink);
      }
      return MiReleaseSpinLockExclusive(&Flink[1].Blink, v20);
    }
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    Blink[1].Blink = (struct _LIST_ENTRY *)((unsigned __int64)Blink[1].Blink & ~0x8000000000000000uLL);
    RtlAvlRemoveNode((unsigned __int64 *)Flink, (__int64)Blink);
    v12 = *(_QWORD *)(BugCheckParameter2 + 48);
    v13 = (unsigned __int64 *)&Flink->Blink;
  }
  else
  {
    Blink = Flink->Blink;
    if ( !Blink )
      goto LABEL_45;
    v14 = *(struct _LIST_ENTRY **)(BugCheckParameter2 + 48);
    do
    {
      if ( v14 >= Blink[4].Flink )
      {
        if ( v14 <= Blink[4].Flink )
          break;
        Blink = Blink->Blink;
      }
      else
      {
        Blink = Blink->Flink;
      }
    }
    while ( Blink );
    if ( !Blink )
    {
LABEL_45:
      if ( HIDWORD(Flink[1].Blink) )
      {
        v19 = MiReadProcessNumberOfLockedPages((__int64)v5);
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter2, v19, (ULONG_PTR)v5[2].Header.WaitListHead.Flink);
      }
      return MiReleaseSpinLockExclusive(&Flink[1].Blink, v20);
    }
    Blink[1].Blink = (struct _LIST_ENTRY *)BugCheckParameter2;
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    RtlAvlRemoveNode((unsigned __int64 *)&Flink->Blink, (__int64)Blink);
    v13 = (unsigned __int64 *)Flink;
    v12 = BugCheckParameter2;
  }
  v15 = (_QWORD *)*v13;
  if ( !*v13 )
    goto LABEL_34;
  while ( 1 )
  {
    v16 = guard_dispatch_icall_no_overrides(v12, v15, v10, v11);
    if ( v16 > 0 )
      break;
    if ( v16 >= 0 )
      KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v15, BugCheckParameter2, (ULONG_PTR)Flink[1].Flink);
    v17 = (_QWORD *)*v15;
    if ( !*v15 )
      goto LABEL_34;
LABEL_39:
    v15 = v17;
  }
  v17 = (_QWORD *)v15[1];
  if ( v17 )
    goto LABEL_39;
  v6 = 1;
LABEL_34:
  RtlAvlInsertNodeEx(v13, (unsigned __int64)v15, v6, Blink);
  return MiReleaseSpinLockExclusive(&Flink[1].Blink, v20);
}
