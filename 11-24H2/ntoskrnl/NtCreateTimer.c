/*
 * XREFs of NtCreateTimer @ 0x1409F7110
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeTimerEx @ 0x14044DAF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x14046374C (PsInsertVirtualizedTimer.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateTimer(__int64 *a1, int a2, int a3, TIMER_TYPE a4)
{
  char PreviousMode; // r14
  __int64 v8; // rcx
  int inserted; // ecx
  struct _KTIMER *v10; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v13; // rdi
  char v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rax
  bool v18; // zf
  __int64 v19; // [rsp+20h] [rbp-68h]
  PVOID DeferredContext; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h] BYREF

  DeferredContext = 0LL;
  v21 = 0LL;
  if ( (unsigned int)a4 <= SynchronizationTimer )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a1;
      *(_QWORD *)v8 = *(_QWORD *)v8;
    }
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ExTimerObjectType,
                 a3,
                 PreviousMode,
                 v19,
                 328,
                 0,
                 0,
                 &DeferredContext,
                 0LL);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v10 = (struct _KTIMER *)DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx(v10, a4);
    *(_QWORD *)&v10[1].Header.Lock = 0LL;
    LOBYTE(v10[4].Dpc) = 0;
    *(_QWORD *)&v10[4].Header.Lock = 0LL;
    v10[4].Header.WaitListHead.Flink = 0LL;
    v10[4].DueTime.QuadPart = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v13 = Process[1].Padding[3];
        v14 = 0;
        if ( v13 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
          v14 = (*(_DWORD *)(v13 + 1552) & 0x40000) != 0 && *(_DWORD *)(v13 + 1064);
        }
        v10 = (struct _KTIMER *)DeferredContext;
        PsInsertVirtualizedTimer(
          (KSPIN_LOCK *)Process,
          (_QWORD *)DeferredContext + 36,
          (KSPIN_LOCK *)DeferredContext + 8,
          v14,
          (KSPIN_LOCK **)DeferredContext + 35);
        if ( !v13 )
          goto LABEL_10;
        ExReleaseResourceLite((PERESOURCE)(v13 + 56));
        v17 = KeGetCurrentThread();
        v18 = v17->SpecialApcDisable++ == -1;
        if ( v18 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
          KiCheckForKernelApcDelivery(1LL, v16);
      }
      v10 = (struct _KTIMER *)DeferredContext;
    }
LABEL_10:
    inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v10, 0LL, a2, 0, 0, 0LL, (__int64)&v21);
    if ( inserted >= 0 )
      *a1 = v21;
    return (unsigned int)inserted;
  }
  return 3221225714LL;
}
