/*
 * XREFs of KiSaveExtendedAndSupervisorState @ 0x1403E5F5C
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x1403E5EF0 (KeSaveExtendedProcessorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404FAACC (KeSaveExtendedAndSupervisorState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     RtlXSaveS @ 0x1403E5210 (RtlXSaveS.c)
 *     RtlXSave @ 0x1403E6250 (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x1403E62A0 (KeAllocateXStateContext.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rcx
  ULONG_PTR v9; // r8
  bool v10; // zf
  unsigned __int8 v11; // r12
  _QWORD *SparePtr; // r9
  ULONG_PTR v13; // r14
  __int64 result; // rax
  unsigned int *v15; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  int v17; // eax
  _XSAVE_AREA *ExtendedState; // rax

  v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  v8 = 0xFFFFF780000003D8uLL;
  v9 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & BugCheckParameter3) != 0 )
LABEL_5:
        KeBugCheckEx(0x131u, 0LL, v9, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
      goto LABEL_7;
    }
    v10 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v10 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v10 )
    goto LABEL_5;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
  {
LABEL_7:
    v11 = CurrentIrql + 1;
    goto LABEL_8;
  }
  v11 = 0;
LABEL_8:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v13 = (MEMORY[0xFFFFF780000003D8] | BugCheckParameter3) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    v8 = *((unsigned __int8 *)SparePtr + 16);
    if ( (unsigned __int8)v8 > v11 )
      KeBugCheckEx(0x131u, 2uLL, *((unsigned __int8 *)SparePtr + 16), v11, 0LL);
    v9 = SparePtr[1];
    if ( (struct _KTHREAD *)v9 != CurrentThread )
      KeBugCheckEx(0x131u, 3uLL, v9, (ULONG_PTR)CurrentThread, 0LL);
  }
  if ( v13 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_27;
    if ( !SparePtr || *((_BYTE *)SparePtr + 16) != v11 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      memset_0(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
      v17 = KeXStateLength;
      *(_QWORD *)(a2 + 48) = 0LL;
      *(_DWORD *)(a2 + 32) = v17;
      ExtendedState = CurrentPrcb->ExtendedState;
      v3 = a3;
      *(_QWORD *)(a2 + 40) = ExtendedState;
      goto LABEL_11;
    }
    v15 = (unsigned int *)0xFFFFF78000000600LL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
LABEL_27:
      v15 = (unsigned int *)0xFFFFF780000003E8LL;
    result = KeAllocateXStateContext(a2 + 24, a2, *v15);
    if ( (int)result < 0 )
      return result;
    goto LABEL_11;
  }
  *(_DWORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
LABEL_11:
  *(_QWORD *)(a2 + 8) = CurrentThread;
  *(_BYTE *)(a2 + 16) = v11;
  *(_QWORD *)(a2 + 24) = v13;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *(_QWORD *)a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v13 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 40) + 520LL) = v13;
      RtlXSaveS(*(_QWORD *)(a2 + 40), v13);
    }
    else
    {
      RtlXSave(*(_QWORD *)(a2 + 40), v13, v9);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = (PVOID)a2;
  CurrentThread->LastXStateSaveDebugInfo = a2 & 0xFFFFF | (v3 << 20);
  if ( !CurrentIrql )
  {
    v10 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v10 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v8, a2);
  }
  return 0LL;
}
