/*
 * XREFs of KiSaveExtendedAndSupervisorState @ 0x14043B9BC
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x14043B950 (KeSaveExtendedProcessorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404F862C (KeSaveExtendedAndSupervisorState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     RtlXSaveS @ 0x14043B8FC (RtlXSaveS.c)
 *     RtlXSave @ 0x14043BCB0 (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x14043BD00 (KeAllocateXStateContext.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, PVOID *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // rbp
  bool v7; // zf
  unsigned __int8 v8; // r12
  unsigned __int8 *SparePtr; // r9
  ULONG_PTR v10; // r14
  __int64 result; // rax
  unsigned int *v12; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  int v14; // eax
  _XSAVE_AREA *ExtendedState; // rax
  ULONG_PTR v16; // r8

  v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & BugCheckParameter3) != 0 )
LABEL_5:
        KeBugCheckEx(
          0x131u,
          0LL,
          KeFeatureBits & 0x800000,
          (unsigned int)BugCheckParameter3,
          HIDWORD(BugCheckParameter3));
      goto LABEL_7;
    }
    v7 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v7 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v7 )
    goto LABEL_5;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
  {
LABEL_7:
    v8 = CurrentIrql + 1;
    goto LABEL_8;
  }
  v8 = 0;
LABEL_8:
  SparePtr = (unsigned __int8 *)CurrentThread->WaitBlock[1].SparePtr;
  v10 = (MEMORY[0xFFFFF780000003D8] | BugCheckParameter3) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    if ( SparePtr[16] > v8 )
      KeBugCheckEx(0x131u, 2uLL, SparePtr[16], v8, 0LL);
    v16 = *((_QWORD *)SparePtr + 1);
    if ( (struct _KTHREAD *)v16 != CurrentThread )
      KeBugCheckEx(0x131u, 3uLL, v16, (ULONG_PTR)CurrentThread, 0LL);
  }
  if ( v10 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_27;
    if ( !SparePtr || SparePtr[16] != v8 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      memset_0(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
      v14 = KeXStateLength;
      a2[6] = 0LL;
      *((_DWORD *)a2 + 8) = v14;
      ExtendedState = CurrentPrcb->ExtendedState;
      v3 = a3;
      a2[5] = ExtendedState;
      goto LABEL_11;
    }
    v12 = (unsigned int *)0xFFFFF78000000600LL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
LABEL_27:
      v12 = (unsigned int *)0xFFFFF780000003E8LL;
    result = KeAllocateXStateContext(a2 + 3, a2, *v12);
    if ( (int)result < 0 )
      return result;
    goto LABEL_11;
  }
  *((_DWORD *)a2 + 8) = 0;
  a2[6] = 0LL;
  a2[5] = 0LL;
LABEL_11:
  a2[1] = CurrentThread;
  *((_BYTE *)a2 + 16) = v8;
  a2[3] = (PVOID)v10;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v10 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      *((_QWORD *)a2[5] + 65) = v10;
      RtlXSaveS((__int64)a2[5], v10);
    }
    else
    {
      RtlXSave(a2[5], v10);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  CurrentThread->LastXStateSaveDebugInfo = (unsigned int)a2 & 0xFFFFF | (unsigned __int64)(v3 << 20);
  if ( !CurrentIrql )
  {
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
