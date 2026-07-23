/*
 * XREFs of MiFinishHoldingDirtyFaults @ 0x14067E28C
 * Callers:
 *     MiReleaseHotPatchResources @ 0x140AAF528 (MiReleaseHotPatchResources.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiFinishHoldingDirtyFaults(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v4 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  v5 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
LABEL_12:
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v4);
  v7 = a1 + 4;
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    if ( (_QWORD *)v8[1] != v7 )
      goto LABEL_12;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_12;
    *v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    KeSetEvent((PRKEVENT)(v8 + 2), 0, 0);
  }
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
