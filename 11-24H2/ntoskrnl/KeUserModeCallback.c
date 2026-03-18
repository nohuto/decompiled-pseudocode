/*
 * XREFs of KeUserModeCallback @ 0x1408BF150
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x14026A4B0 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x14026B230 (MmCreateKernelStack.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14043AC00 (KeGetProcessorNodeNumberByIndex.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     KeExitRetpoline @ 0x14046029C (KeExitRetpoline.c)
 *     PsSessionGetWin32Callouts @ 0x14046B2A0 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EEDCC (PspUpdateCalloutParameters.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1406AB4A0 (KiCallUserMode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
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
  union _RTL_RUN_ONCE *Win32Callouts; // r15
  struct _EX_RUNDOWN_REF *v25; // rdi
  __int64 v26; // r9
  unsigned __int128 v28; // kr00_16
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+30h] [rbp-128h]
  unsigned __int64 *p_Rsp; // [rsp+38h] [rbp-120h]
  __int64 v32; // [rsp+40h] [rbp-118h]
  __int64 v33; // [rsp+48h] [rbp-110h]
  unsigned __int64 v34; // [rsp+58h] [rbp-100h]
  __int128 v35; // [rsp+60h] [rbp-F8h] BYREF
  struct _KTHREAD *v36; // [rsp+70h] [rbp-E8h]
  unsigned __int8 *p_CallbackNestingLevel; // [rsp+78h] [rbp-E0h]
  int v38; // [rsp+80h] [rbp-D8h] BYREF
  int v39; // [rsp+84h] [rbp-D4h]
  __int64 v40; // [rsp+88h] [rbp-D0h]
  struct _KTHREAD *v41; // [rsp+90h] [rbp-C8h]
  __int64 v42; // [rsp+98h] [rbp-C0h]
  __int128 v43; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 Rsp; // [rsp+B0h] [rbp-A8h]
  int v45[4]; // [rsp+B8h] [rbp-A0h] BYREF
  struct _KTHREAD *v46; // [rsp+C8h] [rbp-90h]
  unsigned __int128 v47; // [rsp+D0h] [rbp-88h]
  __int64 v48; // [rsp+E0h] [rbp-78h]
  __int128 v49; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v50; // [rsp+F8h] [rbp-60h]
  __int128 v51; // [rsp+108h] [rbp-50h]
  ULONG_PTR retaddr; // [rsp+158h] [rbp+0h]

  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
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
    *(_QWORD *)&v49 = 0x500000010LL;
    DWORD2(v49) = ProcessorNodeNumberByIndex;
    *(_QWORD *)&v50 = CurrentThread;
    KernelStack = MmCreateKernelStack((int *)&v49);
    v5 = *((_QWORD *)&v50 + 1);
    v32 = *((_QWORD *)&v50 + 1);
    if ( KernelStack >= 0 )
    {
      v12 = (_QWORD *)(*((_QWORD *)&v50 + 1) - 80LL);
      *v12 = *((_QWORD *)&v50 + 1);
      v12[1] = v5 - (unsigned int)KeKernelStackSize;
      v12[2] = CurrentThread->StackBase;
      v12[3] = CurrentThread->StackLimit;
      v12[5] = CurrentThread->InitialStack;
      if ( (_BYTE)KiKernelCetEnabled )
      {
        v45[3] = 0;
        v47 = 0LL;
        v48 = 0LL;
        v45[0] = 16;
        v45[1] = 2;
        v45[2] = ProcessorNodeNumberByIndex;
        v46 = CurrentThread;
        KernelStack = MmCreateKernelStack(v45);
        if ( KernelStack < 0 )
        {
          v7 = 0LL;
        }
        else
        {
          v7 = *((_QWORD *)&v47 + 1);
          v28 = v47;
          v30 = v28 >> 64;
          v33 = v28;
        }
        if ( KernelStack < 0 )
        {
LABEL_27:
          v6 = v33;
          v5 = v32;
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
      v34 = Rsp;
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
      *(_QWORD *)(v15 + 72) = v34;
      *(_QWORD *)(v15 + 48) = TrapFrame->Rip;
      v19 = 0LL;
      *(_QWORD *)&v35 = 0LL;
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        v29 = __readmsr(0x6A0u);
        if ( (v29 & 1) != 0 )
        {
          v19 = __readmsr(0x6A7u);
          *(_QWORD *)&v35 = v19;
        }
      }
      v20.0 = ($C97C507C7AE1403CABDDE5329A3FB6A7)KeGetPcr()->Prcb.BpbRetpolineState;
      *p_Rsp = v15;
      KernelStack = KiCallUserMode(a4, a5, (_DWORD)v12, v32, v33, v30);
      if ( (v20.AllFlags & 1) != 0 )
        KeExitRetpoline(v22, v21);
      _mm_lfence();
      v23 = p_Rsp;
      if ( *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        *p_Rsp -= 256LL;
        v35 = 0LL;
        if ( (unsigned int)PspUpdateCalloutParameters(7, (__int64)&v35, 0, 0LL) )
        {
          Win32Callouts = PsSessionGetWin32Callouts();
          v25 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
          if ( v25 )
          {
            guard_dispatch_icall_no_overrides(v25[2].Count, 7LL, &v35, v26);
            ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v25);
          }
          v23 = p_Rsp;
        }
      }
      if ( v19 )
        __writemsr(0x6A7u, v19);
      *v23 = v34;
      v7 = v30;
      goto LABEL_27;
    }
    v7 = 0LL;
  }
LABEL_28:
  --CurrentThread->CallbackNestingLevel;
  if ( v5 )
  {
    v40 = 0LL;
    v43 = 0LL;
    v38 = 4;
    v39 = 5;
    v42 = v5;
    v41 = CurrentThread;
    MmDeleteKernelStack(&v38);
  }
  if ( v7 )
  {
    v40 = 0LL;
    *(_QWORD *)&v43 = 0LL;
    v38 = 4;
    v39 = 2;
    v42 = v6;
    *((_QWORD *)&v43 + 1) = v7;
    v41 = CurrentThread;
    MmDeleteKernelStack(&v38);
  }
  return (unsigned int)KernelStack;
}
