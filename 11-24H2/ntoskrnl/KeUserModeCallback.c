/*
 * XREFs of KeUserModeCallback @ 0x1408BCB10
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14042D440 (KeGetProcessorNodeNumberByIndex.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1406AC440 (KiCallUserMode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v9; // al
  int ProcessorNodeNumberByIndex; // edi
  int KernelStack; // r14d
  _QWORD *v12; // r15
  _KERNEL_SHADOW_STACK_LIMIT v13; // rax
  _KTRAP_FRAME *TrapFrame; // r12
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  _KPRCB_BPB_RETPOLINE_STATE v20; // di
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 *v23; // r10
  _RTL_RUN_ONCE *Win32Callouts; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _EX_RUNDOWN_REF *v28; // rdi
  unsigned __int128 v30; // kr00_16
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+30h] [rbp-128h]
  unsigned __int64 *p_Rsp; // [rsp+38h] [rbp-120h]
  __int64 v34; // [rsp+40h] [rbp-118h]
  __int64 v35; // [rsp+48h] [rbp-110h]
  unsigned __int64 v36; // [rsp+58h] [rbp-100h]
  __int128 v37; // [rsp+60h] [rbp-F8h] BYREF
  struct _KTHREAD *v38; // [rsp+70h] [rbp-E8h]
  unsigned __int8 *p_CallbackNestingLevel; // [rsp+78h] [rbp-E0h]
  int v40; // [rsp+80h] [rbp-D8h] BYREF
  int v41; // [rsp+84h] [rbp-D4h]
  __int64 v42; // [rsp+88h] [rbp-D0h]
  struct _KTHREAD *v43; // [rsp+90h] [rbp-C8h]
  __int64 v44; // [rsp+98h] [rbp-C0h]
  __int128 v45; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 Rsp; // [rsp+B0h] [rbp-A8h]
  int v47[4]; // [rsp+B8h] [rbp-A0h] BYREF
  struct _KTHREAD *v48; // [rsp+C8h] [rbp-90h]
  unsigned __int128 v49; // [rsp+D0h] [rbp-88h]
  __int64 v50; // [rsp+E0h] [rbp-78h]
  __int128 v51; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v52; // [rsp+F8h] [rbp-60h]
  __int128 v53; // [rsp+108h] [rbp-50h]
  ULONG_PTR retaddr; // [rsp+158h] [rbp+0h]

  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38 = CurrentThread;
  if ( (CurrentThread->SameThreadTransientFlags & 1) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  if ( CurrentThread->ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  p_CallbackNestingLevel = &CurrentThread->CallbackNestingLevel;
  v9 = CurrentThread->CallbackNestingLevel + 1;
  CurrentThread->CallbackNestingLevel = v9;
  if ( v9 > 0x1Fu )
  {
    KernelStack = -1073741571;
  }
  else
  {
    ProcessorNodeNumberByIndex = (unsigned __int16)KeGetProcessorNodeNumberByIndex(CurrentThread->IdealProcessor);
    *(_QWORD *)&v51 = 0x500000010LL;
    DWORD2(v51) = ProcessorNodeNumberByIndex;
    *(_QWORD *)&v52 = CurrentThread;
    KernelStack = MmCreateKernelStack((int *)&v51);
    v5 = *((_QWORD *)&v52 + 1);
    v34 = *((_QWORD *)&v52 + 1);
    if ( KernelStack >= 0 )
    {
      v12 = (_QWORD *)(*((_QWORD *)&v52 + 1) - 80LL);
      *v12 = *((_QWORD *)&v52 + 1);
      v12[1] = v5 - (unsigned int)KeKernelStackSize;
      v12[2] = CurrentThread->StackBase;
      v12[3] = CurrentThread->StackLimit;
      v12[5] = CurrentThread->InitialStack;
      if ( (_BYTE)KiKernelCetEnabled )
      {
        v47[3] = 0;
        v49 = 0LL;
        v50 = 0LL;
        v47[0] = 16;
        v47[1] = 2;
        v47[2] = ProcessorNodeNumberByIndex;
        v48 = CurrentThread;
        KernelStack = MmCreateKernelStack(v47);
        if ( KernelStack < 0 )
        {
          v7 = 0LL;
        }
        else
        {
          v7 = *((_QWORD *)&v49 + 1);
          v30 = v49;
          v32 = v30 >> 64;
          v35 = v30;
        }
        if ( KernelStack < 0 )
        {
LABEL_27:
          v6 = v35;
          v5 = v34;
          goto LABEL_28;
        }
        v12[9] = CurrentThread->KernelShadowStackInitial;
        v12[6] = CurrentThread->KernelShadowStackBase;
        v13.AllFields = (unsigned __int64)CurrentThread->KernelShadowStackLimit;
      }
      else
      {
        v12[9] = 0LL;
        v12[6] = 0LL;
        v12[8] = 0LL;
        v13.AllFields = 0LL;
      }
      v12[7] = v13.AllFields;
      TrapFrame = CurrentThread->TrapFrame;
      p_Rsp = &TrapFrame->Rsp;
      Rsp = TrapFrame->Rsp;
      v36 = Rsp;
      v15 = (Rsp - (((a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = v15;
      v17 = v15 + ((a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) + 87;
      if ( v15 > v17 || v17 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v16 = *(_BYTE *)v16;
        v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v16 != v18 );
      memmove((void *)(v15 + 88), a2, a3);
      *(_QWORD *)(v15 + 32) = v15 + 88;
      *(_DWORD *)(v15 + 40) = a3;
      *(_DWORD *)(v15 + 44) = a1;
      *(_QWORD *)(v15 + 72) = v36;
      *(_QWORD *)(v15 + 48) = TrapFrame->Rip;
      v19 = 0LL;
      *(_QWORD *)&v37 = 0LL;
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        v31 = __readmsr(0x6A0u);
        if ( (v31 & 1) != 0 )
        {
          v19 = __readmsr(0x6A7u);
          *(_QWORD *)&v37 = v19;
        }
      }
      v20.0 = ($C97C507C7AE1403CABDDE5329A3FB6A7)KeGetPcr()->Prcb.BpbRetpolineState;
      *p_Rsp = v15;
      KernelStack = KiCallUserMode(a4, a5, (_DWORD)v12, v34, v35, v32);
      if ( (v20.AllFlags & 1) != 0 )
        KeExitRetpoline(v22, v21);
      _mm_lfence();
      v23 = p_Rsp;
      if ( *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        *p_Rsp -= 256LL;
        v37 = 0LL;
        if ( (unsigned int)PspUpdateCalloutParameters(7, (__int64)&v37, 0, 0LL) )
        {
          Win32Callouts = PsSessionGetWin32Callouts();
          v28 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts, v25, v26, v27);
          if ( v28 )
          {
            guard_dispatch_icall_no_overrides(v28[2].Count, 7LL);
            ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v28);
          }
          v23 = p_Rsp;
        }
      }
      if ( v19 )
        __writemsr(0x6A7u, v19);
      *v23 = v36;
      v7 = v32;
      goto LABEL_27;
    }
    v7 = 0LL;
  }
LABEL_28:
  --CurrentThread->CallbackNestingLevel;
  if ( v5 )
  {
    v42 = 0LL;
    v45 = 0LL;
    v40 = 4;
    v41 = 5;
    v44 = v5;
    v43 = CurrentThread;
    MmDeleteKernelStack(&v40);
  }
  if ( v7 )
  {
    v42 = 0LL;
    *(_QWORD *)&v45 = 0LL;
    v40 = 4;
    v41 = 2;
    v44 = v6;
    *((_QWORD *)&v45 + 1) = v7;
    v43 = CurrentThread;
    MmDeleteKernelStack(&v40);
  }
  return (unsigned int)KernelStack;
}
