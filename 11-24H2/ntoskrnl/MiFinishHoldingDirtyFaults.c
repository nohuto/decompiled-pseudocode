/*
 * XREFs of MiFinishHoldingDirtyFaults @ 0x14067D100
 * Callers:
 *     MiReleaseHotPatchResources @ 0x140AB45B8 (MiReleaseHotPatchResources.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiFinishHoldingDirtyFaults(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  v5 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
LABEL_12:
    __fastfail(3u);
  *v6 = (__int64 *)v5;
  *(_QWORD *)(v5 + 8) = v6;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v4);
  v8 = a1 + 4;
  while ( 1 )
  {
    v9 = *v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *(__int64 **)(v9 + 8) != v8 )
      goto LABEL_12;
    v10 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_12;
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    KeSetEvent((PRKEVENT)(v9 + 16), 0, 0);
  }
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9, v7);
}
