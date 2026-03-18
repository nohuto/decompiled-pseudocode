/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x140663448
 * Callers:
 *     VmProbeAndLockPages @ 0x14063E370 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14063E420 (VmUnlockPages.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiValidateMdlTracker @ 0x1404AD7B8 (MiValidateMdlTracker.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiReadProcessNumberOfLockedPages @ 0x14065ECC8 (MiReadProcessNumberOfLockedPages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter3, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // rsi
  bool v6; // bl
  struct _LIST_ENTRY *Flink; // r14
  volatile LONG *p_Blink; // rcx
  struct _LIST_ENTRY *Blink; // rdi
  ULONG_PTR ProcessNumberOfLockedPages; // r9
  ULONG_PTR v11; // r13
  unsigned __int64 *v12; // r15
  struct _LIST_ENTRY *v13; // rcx
  ULONG_PTR v14; // r9
  _QWORD *v15; // rsi
  int v16; // eax
  _QWORD *v17; // rax
  KIRQL v18; // [rsp+70h] [rbp+18h]

  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) == 0 )
    return result;
  v5 = *(PEPROCESS *)(BugCheckParameter3 + 16);
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
      if ( (struct _LIST_ENTRY *)BugCheckParameter3 >= Blink[1].Blink )
      {
        if ( (struct _LIST_ENTRY *)BugCheckParameter3 <= Blink[1].Blink )
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
        if ( MmNumLockedPagesFixEnabled )
          ProcessNumberOfLockedPages = MiReadProcessNumberOfLockedPages((__int64)v5);
        else
          ProcessNumberOfLockedPages = v5[1].Padding[1];
        KeBugCheckEx(
          0x76u,
          8uLL,
          BugCheckParameter3,
          ProcessNumberOfLockedPages,
          (ULONG_PTR)v5[2].Header.WaitListHead.Flink);
      }
      return MiReleaseSpinLockExclusive(&Flink[1].Blink, v18);
    }
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    Blink[1].Blink = (struct _LIST_ENTRY *)((unsigned __int64)Blink[1].Blink & ~0x8000000000000000uLL);
    RtlAvlRemoveNode((unsigned __int64 *)Flink, (__int64)Blink);
    v11 = *(_QWORD *)(BugCheckParameter3 + 48);
    v12 = (unsigned __int64 *)&Flink->Blink;
  }
  else
  {
    Blink = Flink->Blink;
    if ( !Blink )
      goto LABEL_49;
    v13 = *(struct _LIST_ENTRY **)(BugCheckParameter3 + 48);
    do
    {
      if ( v13 >= Blink[4].Flink )
      {
        if ( v13 <= Blink[4].Flink )
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
LABEL_49:
      if ( HIDWORD(Flink[1].Blink) )
      {
        if ( MmNumLockedPagesFixEnabled )
          v14 = MiReadProcessNumberOfLockedPages((__int64)v5);
        else
          v14 = v5[1].Padding[1];
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter3, v14, (ULONG_PTR)v5[2].Header.WaitListHead.Flink);
      }
      return MiReleaseSpinLockExclusive(&Flink[1].Blink, v18);
    }
    Blink[1].Blink = (struct _LIST_ENTRY *)BugCheckParameter3;
    MiValidateMdlTracker((ULONG_PTR)Blink, 1);
    RtlAvlRemoveNode((unsigned __int64 *)&Flink->Blink, (__int64)Blink);
    v12 = (unsigned __int64 *)Flink;
    v11 = BugCheckParameter3;
  }
  v15 = (_QWORD *)*v12;
  if ( !*v12 )
    goto LABEL_40;
  while ( 1 )
  {
    v16 = guard_dispatch_icall_no_overrides(v11);
    if ( v16 > 0 )
      break;
    if ( v16 >= 0 )
      KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v15, BugCheckParameter3, (ULONG_PTR)Flink[1].Flink);
    v17 = (_QWORD *)*v15;
    if ( !*v15 )
      goto LABEL_40;
LABEL_45:
    v15 = v17;
  }
  v17 = (_QWORD *)v15[1];
  if ( v17 )
    goto LABEL_45;
  v6 = 1;
LABEL_40:
  RtlAvlInsertNodeEx(v12, (unsigned __int64)v15, v6, Blink);
  return MiReleaseSpinLockExclusive(&Flink[1].Blink, v18);
}
