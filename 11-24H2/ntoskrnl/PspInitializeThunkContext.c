/*
 * XREFs of PspInitializeThunkContext @ 0x140920BE8
 * Callers:
 *     PspUserThreadStartup @ 0x1409212E0 (PspUserThreadStartup.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KePopulateContinuationContext @ 0x1403D3414 (KePopulateContinuationContext.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x140427E50 (PspGetBaseTrapFrame.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140921110 (RtlCopyContext.c)
 */

__int16 PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  int v1; // ecx
  unsigned __int64 v2; // r14
  ULONG P2Home; // r12d
  $727077A9B6E167EAE1398C74674DC5A5 *v4; // rax
  signed int v5; // ebx
  unsigned __int64 v6; // rax
  void *v7; // rsp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _RTL_RUN_ONCE *v11; // rbx
  __int64 v12; // r12
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // r15
  __int64 P1Home_low; // rdx
  _CONTEXT *v16; // r15
  void *v17; // rcx
  __int64 InstrumentationCallback; // rcx
  unsigned __int64 v19; // rcx
  __int64 BaseTrapFrame; // rbx
  __int64 v22; // rax
  _CONTEXT ContextLength; // [rsp+30h] [rbp+0h] BYREF

  memset_0((char *)&ContextLength.Dr0 + 4, 0, 0x7CuLL);
  ContextLength.P3Home = 0LL;
  LODWORD(ContextLength.P1Home) = 0;
  ContextLength.P5Home = 0LL;
  CurrentThread = KeGetCurrentThread();
  ContextLength.P6Home = (unsigned __int64)CurrentThread;
  v1 = CurrentThread->MiscFlags & 0x100000;
  v2 = v1 != 0 ? 0x800 : 0;
  ContextLength.P4Home = v2;
  P2Home = v1 != 0 ? 1048667 : 1048603;
  LODWORD(ContextLength.P2Home) = P2Home;
  LODWORD(v4) = RtlGetExtendedContextLength2(P2Home, (PULONG)&ContextLength, (unsigned int)v2);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    v6 = LODWORD(ContextLength.P1Home) + 15LL;
    if ( v6 <= LODWORD(ContextLength.P1Home) )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
    memset_0(&ContextLength, 0, LODWORD(ContextLength.P1Home));
    LODWORD(v4) = RtlInitializeExtendedContext2(&ContextLength, P2Home, (PCONTEXT_EX *)&ContextLength.P3Home, v2);
    v5 = (int)v4;
    if ( (int)v4 >= 0 )
    {
      memset_0(&ContextLength.R11, 0, sizeof(_CONTEXT));
      --CurrentThread->SpecialApcDisable;
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v11 = &PspCreateThreadNotifyRoutine;
        v12 = 64LL;
        do
        {
          v13 = ExReferenceCallBackBlock((signed __int64 *)v11, v8, v9, v10);
          v14 = v13;
          if ( v13 )
          {
            if ( (v13[2].Count & 1) != 0 )
              guard_dispatch_icall_no_overrides(
                CurrentThread->Process[1].Header.WaitListHead.Flink,
                *(_QWORD *)&CurrentThread[1].CurrentRunTime);
            ExDereferenceCallBackBlock((signed __int64 *)v11, v14);
          }
          ++v11;
          --v12;
        }
        while ( v12 );
        P2Home = ContextLength.P2Home;
      }
      LODWORD(v4) = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)&ContextLength, 0, 1, 0);
      v5 = (int)v4;
      HIDWORD(ContextLength.P1Home) = (_DWORD)v4;
      if ( (int)v4 >= 0 )
      {
        P1Home_low = LODWORD(ContextLength.P1Home);
        v16 = (_CONTEXT *)((ContextLength.Rsp - LODWORD(ContextLength.P1Home)) & 0xFFFFFFFFFFFFFFF0uLL);
        ContextLength.FltSave.FloatRegisters[4].High = (__int64)&v16[-1].DebugControl;
        v17 = PspSystemDlls[0][4];
        ContextLength.Header[0].Low = 0x1F800010000BLL;
        ContextLength.FltSave.XmmRegisters[2].High = qword_140FC74B8;
        ContextLength.FltSave.FloatRegisters[3].Low = (unsigned __int64)v16;
        ContextLength.FltSave.FloatRegisters[3].High = (__int64)v17;
        *(_DWORD *)((char *)&ContextLength.Header[0].High + 2) = 2818091;
        *(_DWORD *)((char *)&ContextLength.Header[0].High + 6) = 2818131;
        WORD1(ContextLength.Header[1].Low) = 43;
        LOWORD(ContextLength.Header[0].High) = 51;
        LOWORD(ContextLength.Xmm3.Low) = 639;
        LODWORD(ContextLength.Xmm4.High) = 8064;
        InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          ContextLength.FltSave.FloatRegisters[7].High = qword_140FC74B8;
          ContextLength.FltSave.XmmRegisters[2].High = InstrumentationCallback;
        }
        v19 = (ContextLength.Rsp - LODWORD(ContextLength.P1Home)) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (unsigned __int64)LODWORD(ContextLength.P1Home) - 1 > 0xFFE )
        {
          ProbeForWrite(v16, LODWORD(ContextLength.P1Home), 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v16 >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v19 = *(_BYTE *)v19;
          *(_BYTE *)(v19 + P1Home_low - 1) = *(_BYTE *)(v19 + P1Home_low - 1);
        }
        LODWORD(v4) = RtlInitializeExtendedContext2(
                        v16,
                        P2Home,
                        (PCONTEXT_EX *)&ContextLength.P5Home,
                        ContextLength.P4Home);
        v5 = (int)v4;
        HIDWORD(ContextLength.P1Home) = (_DWORD)v4;
        if ( (int)v4 >= 0 )
        {
          LODWORD(v4) = RtlCopyContext(v16, P2Home, &ContextLength);
          v5 = (int)v4;
          HIDWORD(ContextLength.P1Home) = (_DWORD)v4;
          if ( (int)v4 >= 0 )
            LOWORD(v4) = (unsigned __int16)KePopulateContinuationContext(ContextLength.Rip);
        }
        if ( v5 >= 0 )
        {
          LODWORD(v4) = PspSetContextThreadInternal(CurrentThread, (_CONTEXT *)&ContextLength.R11, 0, 1, 2);
          v5 = (int)v4;
        }
      }
    }
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v4->ApcState.ApcListHead[0].Flink != v4 )
      LOWORD(v4) = KiCheckForKernelApcDelivery();
  }
  if ( v5 < 0 )
  {
    ContextLength.MxCsr = 0;
    *(_QWORD *)&ContextLength.SegGs = qword_140FC74B8;
    ContextLength.ContextFlags = v5;
    LODWORD(ContextLength.Dr0) = 0;
    *(_QWORD *)&ContextLength.SegCs = 0LL;
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v22 = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    LOWORD(v4) = KiDispatchException((PEXCEPTION_RECORD)&ContextLength.ContextFlags, v22 - 320, BaseTrapFrame, 1u, 0);
  }
  return (__int16)v4;
}
