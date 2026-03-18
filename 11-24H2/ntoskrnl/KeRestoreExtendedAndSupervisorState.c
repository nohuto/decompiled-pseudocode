/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x140406C00
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x140406BE0 (KeRestoreExtendedProcessorState.c)
 *     DifKeRestoreExtendedProcessorStateWrapper @ 0x140630640 (DifKeRestoreExtendedProcessorStateWrapper.c)
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeFreeXStateContext @ 0x140406E58 (KeFreeXStateContext.c)
 *     RtlXRestoreS @ 0x140406EF8 (RtlXRestoreS.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall KeRestoreExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // r9
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

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    v4 = CurrentIrql + 1;
  else
    v4 = 0;
  v5 = *(unsigned __int8 *)(BugCheckParameter3 + 16);
  if ( (_BYTE)v5 != v4 )
    KeBugCheckEx(0x131u, 4uLL, v5, v4, 0LL);
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x131u, 3uLL, v6, (ULONG_PTR)CurrentThread, 0LL);
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  SparePtr = (ULONG_PTR)CurrentThread->WaitBlock[1].SparePtr;
  if ( SparePtr != BugCheckParameter3 )
    KeBugCheckEx(0x131u, 7uLL, SparePtr, BugCheckParameter3, 0LL);
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)BugCheckParameter3;
  v8 = *(_QWORD *)(BugCheckParameter3 + 24);
  v9 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
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
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
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
  if ( !CurrentIrql )
  {
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v11) = KiCheckForKernelApcDelivery(v9, v8);
  }
LABEL_21:
  if ( *(_QWORD *)(BugCheckParameter3 + 48) )
    LOBYTE(v11) = KeFreeXStateContext(BugCheckParameter3 + 24, v8);
  return v11;
}
