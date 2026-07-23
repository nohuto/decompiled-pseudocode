/*
 * XREFs of NtCreateTimer @ 0x1409FAF30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeTimerEx @ 0x14044DC30 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x140464158 (PsInsertVirtualizedTimer.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  char PreviousMode; // r14
  __int64 v8; // rcx
  NTSTATUS inserted; // ecx
  struct _KTIMER *v10; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v13; // rdi
  char v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v16; // rax
  bool v17; // zf
  __int64 v18; // [rsp+20h] [rbp-68h]
  PVOID DeferredContext; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF

  DeferredContext = 0LL;
  v20 = 0LL;
  if ( (unsigned int)TimerType <= SynchronizationTimer )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
        v8 = (__int64)TimerHandle;
      *(_QWORD *)v8 = *(_QWORD *)v8;
    }
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ExTimerObjectType,
                 (int)ObjectAttributes,
                 PreviousMode,
                 v18,
                 328,
                 0,
                 0,
                 &DeferredContext,
                 0LL);
    if ( inserted < 0 )
      return inserted;
    v10 = (struct _KTIMER *)DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx(v10, TimerType);
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
        v16 = KeGetCurrentThread();
        v17 = v16->SpecialApcDisable++ == -1;
        if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
          KiCheckForKernelApcDelivery();
      }
      v10 = (struct _KTIMER *)DeferredContext;
    }
LABEL_10:
    inserted = ObInsertObjectEx((char *)v10, 0LL, DesiredAccess, 0, 0, 0LL, (__int64)&v20);
    if ( inserted >= 0 )
      *TimerHandle = (HANDLE)v20;
    return inserted;
  }
  return -1073741582;
}
