/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x140670158
 * Callers:
 *     VmProbeAndLockPages @ 0x1406488F0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1406489A0 (VmUnlockPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiValidateMdlTracker @ 0x1404A8FEC (MiValidateMdlTracker.c)
 *     MiReadProcessNumberOfLockedPages @ 0x1404EDD78 (MiReadProcessNumberOfLockedPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // r14
  bool v6; // di
  struct _LIST_ENTRY *Flink; // rsi
  volatile LONG *p_Blink; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  ULONG_PTR v10; // r13
  unsigned __int64 *v11; // r15
  struct _LIST_ENTRY *v12; // rcx
  _QWORD *v13; // r14
  int v14; // eax
  _QWORD *v15; // rax
  ULONG_PTR ProcessNumberOfLockedPages; // rax
  ULONG_PTR v17; // rax
  KIRQL v18; // [rsp+70h] [rbp+18h]

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
    v18 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(p_Blink);
  }
  else
  {
    v18 = ExAcquireSpinLockExclusive(p_Blink);
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
      return MiReleaseSpinLockExclusive(&Flink[1].Blink, v18);
    }
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    Blink[1].Blink = (struct _LIST_ENTRY *)((unsigned __int64)Blink[1].Blink & ~0x8000000000000000uLL);
    RtlAvlRemoveNode((unsigned __int64 *)Flink, (__int64)Blink);
    v10 = *(_QWORD *)(BugCheckParameter2 + 48);
    v11 = (unsigned __int64 *)&Flink->Blink;
  }
  else
  {
    Blink = Flink->Blink;
    if ( !Blink )
      goto LABEL_45;
    v12 = *(struct _LIST_ENTRY **)(BugCheckParameter2 + 48);
    do
    {
      if ( v12 >= Blink[4].Flink )
      {
        if ( v12 <= Blink[4].Flink )
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
        v17 = MiReadProcessNumberOfLockedPages((__int64)v5);
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter2, v17, (ULONG_PTR)v5[2].Header.WaitListHead.Flink);
      }
      return MiReleaseSpinLockExclusive(&Flink[1].Blink, v18);
    }
    Blink[1].Blink = (struct _LIST_ENTRY *)BugCheckParameter2;
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    RtlAvlRemoveNode((unsigned __int64 *)&Flink->Blink, (__int64)Blink);
    v11 = (unsigned __int64 *)Flink;
    v10 = BugCheckParameter2;
  }
  v13 = (_QWORD *)*v11;
  if ( !*v11 )
    goto LABEL_34;
  while ( 1 )
  {
    v14 = guard_dispatch_icall_no_overrides(v10, v13);
    if ( v14 > 0 )
      break;
    if ( v14 >= 0 )
      KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v13, BugCheckParameter2, (ULONG_PTR)Flink[1].Flink);
    v15 = (_QWORD *)*v13;
    if ( !*v13 )
      goto LABEL_34;
LABEL_39:
    v13 = v15;
  }
  v15 = (_QWORD *)v13[1];
  if ( v15 )
    goto LABEL_39;
  v6 = 1;
LABEL_34:
  RtlAvlInsertNodeEx(v11, (unsigned __int64)v13, v6, Blink);
  return MiReleaseSpinLockExclusive(&Flink[1].Blink, v18);
}
