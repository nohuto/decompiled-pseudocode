/*
 * XREFs of PspInitializeThunkContext @ 0x14090A9A0
 * Callers:
 *     PspUserThreadStartup @ 0x14090AF50 (PspUserThreadStartup.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KePopulateContinuationContext @ 0x140260C30 (KePopulateContinuationContext.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     PspGetBaseTrapFrame @ 0x140439370 (PspGetBaseTrapFrame.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x14090AD80 (RtlCopyContext.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
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
  _RTL_RUN_ONCE *v8; // rbx
  __int64 v9; // r12
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // r15
  __int64 P1Home_low; // rdx
  _CONTEXT *v13; // r15
  void *v14; // rcx
  __int64 InstrumentationCallback; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 BaseTrapFrame; // rbx
  __int64 v19; // rax
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
        v8 = &PspCreateThreadNotifyRoutine;
        v9 = 64LL;
        do
        {
          v10 = ExReferenceCallBackBlock((signed __int64 *)v8);
          v11 = v10;
          if ( v10 )
          {
            if ( (v10[2].Count & 1) != 0 )
              guard_dispatch_icall_no_overrides(CurrentThread->Process[1].Header.WaitListHead.Flink);
            ExDereferenceCallBackBlock((signed __int64 *)v8, v11);
          }
          ++v8;
          --v9;
        }
        while ( v9 );
        P2Home = ContextLength.P2Home;
      }
      LODWORD(v4) = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)&ContextLength, 0, 1, 0);
      v5 = (int)v4;
      HIDWORD(ContextLength.P1Home) = (_DWORD)v4;
      if ( (int)v4 >= 0 )
      {
        P1Home_low = LODWORD(ContextLength.P1Home);
        v13 = (_CONTEXT *)((ContextLength.Rsp - LODWORD(ContextLength.P1Home)) & 0xFFFFFFFFFFFFFFF0uLL);
        ContextLength.FltSave.FloatRegisters[4].High = (__int64)&v13[-1].DebugControl;
        v14 = PspSystemDlls[0][4];
        ContextLength.Header[0].Low = 0x1F800010000BLL;
        ContextLength.FltSave.XmmRegisters[2].High = qword_140FC6478;
        ContextLength.FltSave.FloatRegisters[3].Low = (unsigned __int64)v13;
        ContextLength.FltSave.FloatRegisters[3].High = (__int64)v14;
        *(_DWORD *)((char *)&ContextLength.Header[0].High + 2) = 2818091;
        *(_DWORD *)((char *)&ContextLength.Header[0].High + 6) = 2818131;
        WORD1(ContextLength.Header[1].Low) = 43;
        LOWORD(ContextLength.Header[0].High) = 51;
        LOWORD(ContextLength.Xmm3.Low) = 639;
        LODWORD(ContextLength.Xmm4.High) = 8064;
        InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          ContextLength.FltSave.FloatRegisters[7].High = qword_140FC6478;
          ContextLength.FltSave.XmmRegisters[2].High = InstrumentationCallback;
        }
        v16 = (ContextLength.Rsp - LODWORD(ContextLength.P1Home)) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (unsigned __int64)LODWORD(ContextLength.P1Home) - 1 > 0xFFE )
        {
          ProbeForWrite(v13, LODWORD(ContextLength.P1Home), 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v13 >= 0x7FFFFFFF0000LL )
            v16 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v16 = *(_BYTE *)v16;
          *(_BYTE *)(v16 + P1Home_low - 1) = *(_BYTE *)(v16 + P1Home_low - 1);
        }
        LODWORD(v4) = RtlInitializeExtendedContext2(
                        v13,
                        P2Home,
                        (PCONTEXT_EX *)&ContextLength.P5Home,
                        ContextLength.P4Home);
        v5 = (int)v4;
        HIDWORD(ContextLength.P1Home) = (_DWORD)v4;
        if ( (int)v4 >= 0 )
        {
          LODWORD(v4) = RtlCopyContext(v13, P2Home, &ContextLength);
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
    *(_QWORD *)&ContextLength.SegGs = qword_140FC6478;
    ContextLength.ContextFlags = v5;
    LODWORD(ContextLength.Dr0) = 0;
    *(_QWORD *)&ContextLength.SegCs = 0LL;
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v19 = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    LOWORD(v4) = KiDispatchException((PEXCEPTION_RECORD)&ContextLength.ContextFlags, v19 - 320, BaseTrapFrame, 1, 0);
  }
  return (__int16)v4;
}
