/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x140262BC0
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x140262BA0 (KeRestoreExtendedProcessorState.c)
 *     DifKeRestoreExtendedProcessorStateWrapper @ 0x140624680 (DifKeRestoreExtendedProcessorStateWrapper.c)
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 * Callees:
 *     KeFreeXStateContext @ 0x140262E18 (KeFreeXStateContext.c)
 *     RtlXRestoreS @ 0x140262EB8 (RtlXRestoreS.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall KeRestoreExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3)
{
  __int64 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 v4; // al
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rax
  ULONG_PTR SparePtr; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  $727077A9B6E167EAE1398C74674DC5A5 *v13; // r8

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, (unsigned __int8)CurrentIrql, 0LL, 0LL);
  if ( (_BYTE)CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    v4 = CurrentIrql + 1;
  else
    v4 = 0;
  v5 = *(unsigned __int8 *)(BugCheckParameter3 + 16);
  if ( (_BYTE)v5 != v4 )
    KeBugCheckEx(0x131u, 4uLL, v5, v4, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x131u, 3uLL, v6, (ULONG_PTR)CurrentThread, 0LL);
  if ( !(_BYTE)CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  SparePtr = (ULONG_PTR)CurrentThread->WaitBlock[1].SparePtr;
  if ( SparePtr != BugCheckParameter3 )
    KeBugCheckEx(0x131u, 7uLL, SparePtr, BugCheckParameter3, 0LL);
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)BugCheckParameter3;
  v8 = *(_QWORD *)(BugCheckParameter3 + 24);
  v9 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( (_BYTE)CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v10 = (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & v8) == 0;
    else
      v10 = (~MEMORY[0xFFFFF780000003D8] & v8) == 0;
  }
  else
  {
    v10 = (v8 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  LOBYTE(v11) = !v10;
  if ( !v10 )
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)v8, HIDWORD(v8));
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( (_BYTE)CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      LOBYTE(v11) = RtlXRestoreS(*(_QWORD *)(BugCheckParameter3 + 40));
      goto LABEL_21;
    }
    v12 = *(_QWORD *)(BugCheckParameter3 + 40);
    if ( *(__int64 *)(v12 + 520) >= 0 && (v8 & 6) == 4 )
    {
      v9 = *(unsigned int *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = _mm_getcsr();
      v11 = v8;
      v8 >>= 32;
      _xrstor((void *)v12, v11);
      *(_DWORD *)(v12 + 24) = v9;
    }
    else
    {
      v11 = *(_QWORD *)(BugCheckParameter3 + 24);
      v8 >>= 32;
      _xrstor((void *)v12, v11);
    }
  }
  if ( !(_BYTE)CurrentIrql )
  {
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 )
    {
      v13 = &CurrentThread->152;
      if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != v13 )
        LOBYTE(v11) = KiCheckForKernelApcDelivery(v9, v8, v13, CurrentIrql);
    }
  }
LABEL_21:
  if ( *(_QWORD *)(BugCheckParameter3 + 48) )
    LOBYTE(v11) = KeFreeXStateContext(BugCheckParameter3 + 24, v8);
  return v11;
}
