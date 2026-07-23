/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x1403FF0E0
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x1403FF0C0 (KeRestoreExtendedProcessorState.c)
 *     DifKeRestoreExtendedProcessorStateWrapper @ 0x14062EC00 (DifKeRestoreExtendedProcessorStateWrapper.c)
 *     PnprQuiesceProcessorDpc @ 0x140B56760 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeFreeXStateContext @ 0x1403FF338 (KeFreeXStateContext.c)
 *     RtlXRestoreS @ 0x1403FF3D8 (RtlXRestoreS.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  bool v9; // zf
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  int v12; // ecx

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
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v9 = (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & v8) == 0;
    else
      v9 = (~MEMORY[0xFFFFF780000003D8] & v8) == 0;
  }
  else
  {
    v9 = (v8 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  LOBYTE(v10) = !v9;
  if ( !v9 )
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)v8, HIDWORD(v8));
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      LOBYTE(v10) = RtlXRestoreS(*(_QWORD *)(BugCheckParameter3 + 40));
      goto LABEL_21;
    }
    v11 = *(_QWORD *)(BugCheckParameter3 + 40);
    if ( *(__int64 *)(v11 + 520) >= 0 && (v8 & 6) == 4 )
    {
      v12 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)(v11 + 24) = _mm_getcsr();
      v10 = v8;
      v8 >>= 32;
      _xrstor((void *)v11, v10);
      *(_DWORD *)(v11 + 24) = v12;
    }
    else
    {
      v10 = *(_QWORD *)(BugCheckParameter3 + 24);
      v8 >>= 32;
      _xrstor((void *)v11, v10);
    }
  }
  if ( !CurrentIrql )
  {
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery();
  }
LABEL_21:
  if ( *(_QWORD *)(BugCheckParameter3 + 48) )
    LOBYTE(v10) = KeFreeXStateContext(BugCheckParameter3 + 24, v8);
  return v10;
}
