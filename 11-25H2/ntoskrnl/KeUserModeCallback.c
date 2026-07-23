/*
 * XREFs of KeUserModeCallback @ 0x140938670
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14043BFB0 (KeGetProcessorNodeNumberByIndex.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     KeExitRetpoline @ 0x14046112C (KeExitRetpoline.c)
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1406A01D0 (KiCallUserMode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 *p_CallbackNestingLevel; // rdi
  unsigned __int8 v11; // al
  int ProcessorNodeNumberByIndex; // r14d
  int KernelStack; // r13d
  _QWORD *v14; // r15
  _KERNEL_SHADOW_STACK_LIMIT v15; // rax
  _KTRAP_FRAME *TrapFrame; // r13
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r12
  _KPRCB_BPB_RETPOLINE_STATE v22; // di
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 *v25; // r10
  _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v27; // rdi
  unsigned __int128 v29; // kr00_16
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-128h]
  unsigned __int64 *p_Rsp; // [rsp+38h] [rbp-120h]
  __int64 v33; // [rsp+40h] [rbp-118h]
  __int64 v34; // [rsp+48h] [rbp-110h]
  unsigned __int64 v35; // [rsp+58h] [rbp-100h]
  __int128 v36; // [rsp+60h] [rbp-F8h] BYREF
  struct _KTHREAD *v37; // [rsp+70h] [rbp-E8h]
  unsigned __int8 *v38; // [rsp+78h] [rbp-E0h]
  int v39; // [rsp+80h] [rbp-D8h] BYREF
  int v40; // [rsp+84h] [rbp-D4h]
  __int64 v41; // [rsp+88h] [rbp-D0h]
  struct _KTHREAD *v42; // [rsp+90h] [rbp-C8h]
  __int64 v43; // [rsp+98h] [rbp-C0h]
  __int128 v44; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 Rsp; // [rsp+B0h] [rbp-A8h]
  int v46[4]; // [rsp+B8h] [rbp-A0h] BYREF
  struct _KTHREAD *v47; // [rsp+C8h] [rbp-90h]
  unsigned __int128 v48; // [rsp+D0h] [rbp-88h]
  __int64 v49; // [rsp+E0h] [rbp-78h]
  __int128 v50; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v51; // [rsp+F8h] [rbp-60h]
  __int128 v52; // [rsp+108h] [rbp-50h]
  ULONG_PTR retaddr; // [rsp+158h] [rbp+0h]

  v5 = a3;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  if ( (CurrentThread->SameThreadTransientFlags & 1) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  if ( CurrentThread->ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  p_CallbackNestingLevel = &CurrentThread->CallbackNestingLevel;
  v38 = &CurrentThread->CallbackNestingLevel;
  v11 = CurrentThread->CallbackNestingLevel + 1;
  CurrentThread->CallbackNestingLevel = v11;
  if ( v11 > 0x1Fu )
  {
    KernelStack = -1073741571;
  }
  else
  {
    ProcessorNodeNumberByIndex = (unsigned __int16)KeGetProcessorNodeNumberByIndex(CurrentThread->IdealProcessor);
    *(_QWORD *)&v50 = 0x500000010LL;
    DWORD2(v50) = ProcessorNodeNumberByIndex;
    *(_QWORD *)&v51 = CurrentThread;
    KernelStack = MmCreateKernelStack((int *)&v50);
    v6 = *((_QWORD *)&v51 + 1);
    v33 = *((_QWORD *)&v51 + 1);
    if ( KernelStack >= 0 )
    {
      v14 = (_QWORD *)(*((_QWORD *)&v51 + 1) - 80LL);
      *v14 = *((_QWORD *)&v51 + 1);
      v14[1] = v6 - (unsigned int)KeKernelStackSize;
      v14[2] = CurrentThread->StackBase;
      v14[3] = CurrentThread->StackLimit;
      v14[5] = CurrentThread->InitialStack;
      if ( (_BYTE)KiKernelCetEnabled )
      {
        v46[3] = 0;
        v48 = 0LL;
        v49 = 0LL;
        v46[0] = 16;
        v46[1] = 2;
        v46[2] = ProcessorNodeNumberByIndex;
        v47 = CurrentThread;
        KernelStack = MmCreateKernelStack(v46);
        if ( KernelStack < 0 )
        {
          v8 = 0LL;
        }
        else
        {
          v8 = *((_QWORD *)&v48 + 1);
          v29 = v48;
          v31 = v29 >> 64;
          v34 = v29;
        }
        if ( KernelStack < 0 )
        {
LABEL_27:
          v7 = v34;
          v6 = v33;
          goto LABEL_28;
        }
        v14[9] = CurrentThread->KernelShadowStackInitial;
        v14[6] = CurrentThread->KernelShadowStackBase;
        v15.AllFields = (unsigned __int64)CurrentThread->KernelShadowStackLimit;
      }
      else
      {
        v14[9] = 0LL;
        v14[6] = 0LL;
        v14[8] = 0LL;
        v15.AllFields = 0LL;
      }
      v14[7] = v15.AllFields;
      TrapFrame = CurrentThread->TrapFrame;
      p_Rsp = &TrapFrame->Rsp;
      Rsp = TrapFrame->Rsp;
      v35 = Rsp;
      v17 = (Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = v17;
      v19 = v17 + ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 87;
      if ( v17 > v19 || v19 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v18 = *(_BYTE *)v18;
        v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v18 != v20 );
      memmove((void *)(v17 + 88), a2, v5);
      *(_QWORD *)(v17 + 32) = v17 + 88;
      *(_DWORD *)(v17 + 40) = v5;
      *(_DWORD *)(v17 + 44) = a1;
      *(_QWORD *)(v17 + 72) = v35;
      *(_QWORD *)(v17 + 48) = TrapFrame->Rip;
      v21 = 0LL;
      *(_QWORD *)&v36 = 0LL;
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        v30 = __readmsr(0x6A0u);
        if ( (v30 & 1) != 0 )
        {
          v21 = __readmsr(0x6A7u);
          *(_QWORD *)&v36 = v21;
        }
      }
      v22.0 = ($C97C507C7AE1403CABDDE5329A3FB6A7)KeGetPcr()->Prcb.BpbRetpolineState;
      *p_Rsp = v17;
      v8 = v31;
      KernelStack = KiCallUserMode(a4, a5, (_DWORD)v14, v33, v34, v31);
      if ( (v22.AllFlags & 1) != 0 )
        KeExitRetpoline(v24, v23);
      _mm_lfence();
      v25 = p_Rsp;
      if ( *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        *p_Rsp -= 256LL;
        v36 = 0LL;
        if ( (unsigned int)PspUpdateCalloutParameters(7, (__int64)&v36, 0, 0LL) )
        {
          Win32Callouts = PsSessionGetWin32Callouts();
          v27 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
          if ( v27 )
          {
            guard_dispatch_icall_no_overrides(v27[2].Count);
            ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v27);
          }
          v25 = p_Rsp;
          v8 = v31;
        }
      }
      if ( v21 )
        __writemsr(0x6A7u, v21);
      *v25 = v35;
      p_CallbackNestingLevel = v38;
      goto LABEL_27;
    }
    v8 = 0LL;
  }
LABEL_28:
  --*p_CallbackNestingLevel;
  if ( v6 )
  {
    v41 = 0LL;
    v44 = 0LL;
    v39 = 4;
    v40 = 5;
    v43 = v6;
    v42 = CurrentThread;
    MmDeleteKernelStack((__int64)&v39);
  }
  if ( v8 )
  {
    v41 = 0LL;
    *(_QWORD *)&v44 = 0LL;
    v39 = 4;
    v40 = 2;
    v43 = v7;
    *((_QWORD *)&v44 + 1) = v8;
    v42 = CurrentThread;
    MmDeleteKernelStack((__int64)&v39);
  }
  return (unsigned int)KernelStack;
}
