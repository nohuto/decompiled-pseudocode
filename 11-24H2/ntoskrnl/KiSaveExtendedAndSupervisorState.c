/*
 * XREFs of KiSaveExtendedAndSupervisorState @ 0x1403D3AFC
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x1403D3A90 (KeSaveExtendedProcessorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1404F83AC (KeSaveExtendedAndSupervisorState.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     RtlXSaveS @ 0x1403D2DB0 (RtlXSaveS.c)
 *     RtlXSave @ 0x1403D3DF0 (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x1403D3E40 (KeAllocateXStateContext.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, PVOID *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v7; // r8
  bool v8; // zf
  unsigned __int8 v9; // r12
  unsigned __int8 *SparePtr; // r9
  ULONG_PTR v11; // r14
  __int64 result; // rax
  unsigned int *v13; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  int v15; // eax
  _XSAVE_AREA *ExtendedState; // rax

  v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  v7 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & BugCheckParameter3) != 0 )
LABEL_5:
        KeBugCheckEx(0x131u, 0LL, v7, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
      goto LABEL_7;
    }
    v8 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v8 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v8 )
    goto LABEL_5;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
  {
LABEL_7:
    v9 = CurrentIrql + 1;
    goto LABEL_8;
  }
  v9 = 0;
LABEL_8:
  SparePtr = (unsigned __int8 *)CurrentThread->WaitBlock[1].SparePtr;
  v11 = (MEMORY[0xFFFFF780000003D8] | BugCheckParameter3) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    if ( SparePtr[16] > v9 )
      KeBugCheckEx(0x131u, 2uLL, SparePtr[16], v9, 0LL);
    v7 = *((_QWORD *)SparePtr + 1);
    if ( (struct _KTHREAD *)v7 != CurrentThread )
      KeBugCheckEx(0x131u, 3uLL, v7, (ULONG_PTR)CurrentThread, 0LL);
  }
  if ( v11 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_27;
    if ( !SparePtr || SparePtr[16] != v9 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      memset_0(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
      v15 = KeXStateLength;
      a2[6] = 0LL;
      *((_DWORD *)a2 + 8) = v15;
      ExtendedState = CurrentPrcb->ExtendedState;
      v3 = a3;
      a2[5] = ExtendedState;
      goto LABEL_11;
    }
    v13 = (unsigned int *)0xFFFFF78000000600LL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
LABEL_27:
      v13 = (unsigned int *)0xFFFFF780000003E8LL;
    result = KeAllocateXStateContext(a2 + 3, a2, *v13);
    if ( (int)result < 0 )
      return result;
    goto LABEL_11;
  }
  *((_DWORD *)a2 + 8) = 0;
  a2[6] = 0LL;
  a2[5] = 0LL;
LABEL_11:
  a2[1] = CurrentThread;
  *((_BYTE *)a2 + 16) = v9;
  a2[3] = (PVOID)v11;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v11 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      *((_QWORD *)a2[5] + 65) = v11;
      RtlXSaveS((__int64)a2[5], v11);
    }
    else
    {
      RtlXSave(a2[5], v11, v7);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  CurrentThread->LastXStateSaveDebugInfo = (unsigned int)a2 & 0xFFFFF | (unsigned __int64)(v3 << 20);
  if ( !CurrentIrql )
  {
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
