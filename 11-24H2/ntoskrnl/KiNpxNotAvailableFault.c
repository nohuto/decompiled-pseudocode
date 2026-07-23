/*
 * XREFs of KiNpxNotAvailableFault @ 0x1406B9100
 * Callers:
 *     KiNpxNotAvailableFaultShadow @ 0x140BBD4C0 (KiNpxNotAvailableFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiNpxNotAvailableFault @ 0x1406B9100 (KiNpxNotAvailableFault.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiNpxNotAvailableFault()
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  char v6; // dl
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v12; // [rsp+170h] [rbp+F0h]
  __int16 v13; // [rsp+178h] [rbp+F8h]

  if ( (v12 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    if ( KeGetPcr()->Prcb.KernelShadowStackInitial )
    {
      __asm { rdsspq  rdx }
      if ( _RDX == KeGetPcr()->Prcb.TransitionShadowStack + 8 )
      {
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    v4 = *(_QWORD *)&CurrentThread->Process[4].ProcessLock;
    __writegsqword(0x850u, v4);
    LOWORD(v4) = KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl;
    __writegsword(0x864u, v4);
    LOBYTE(v4) = KeGetPcr()->Prcb.PrcbPad12a[1];
    __writegsbyte(0x85Au, v4);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x866u, BpbKernelSpecCtrl);
      v4 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    v6 = KeGetPcr()->Prcb.PrcbPad12a[1];
    if ( (v6 & 8) != 0 )
    {
      v4 = 73LL;
      __writemsr(0x49u, 1uLL);
      v6 = KeGetPcr()->Prcb.PrcbPad12a[1];
    }
    if ( (v6 & 2) != 0 )
      JUMPOUT(0x1406B9369LL);
    if ( v6 < 0 )
    {
      _mm_lfence();
      KiFlushBhbDuringTrapEntryOrExit(v4);
    }
    _mm_lfence();
    __writegsbyte(0x85Eu, 0);
    if ( KiUserCetPl3SspCanonicalizeUpperMask )
    {
      v4 = 1703LL;
      v7 = __readmsr(0x6A7u);
      if ( HIDWORD(v7) )
      {
        v4 = HIDWORD(v7);
        if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v7)) != HIDWORD(v7) )
        {
          v4 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v7), v7));
        }
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v4);
  }
  else
  {
    __asm { rdsspq  rdx }
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.PrcbPad12a[1] & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v12 & 1) != 0 )
    KiSynchronizeUserIsolationDomainExit();
  if ( (_BYTE)KeSmapEnabled && (v12 & 1) != 0 )
    __asm { stac }
  if ( (KeFeatureBits & 0x80000000000000LL) != 0 )
  {
    v8 = __readmsr(0x1C5u);
    __writemsr(0x1C5u, 0LL);
  }
  else
  {
    v8 = 0LL;
  }
  if ( (v13 & 0x200) != 0 )
    _enable();
  if ( (v12 & 1) != 0 )
  {
    if ( v8 )
      KiExceptionDispatch(268435472LL, 1LL, retaddr, v8);
  }
  v9 = __readcr4();
  v10 = __readcr0();
  KiBugCheckDispatch(127LL, 7LL, v10, v9);
}
