/*
 * XREFs of KiFloatingErrorFault @ 0x1406BB240
 * Callers:
 *     KiFloatingErrorFaultShadow @ 0x140BBD8C0 (KiFloatingErrorFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiFloatingErrorFault @ 0x1406BB240 (KiFloatingErrorFault.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiFloatingErrorFault()
{
  char v0; // fps
  struct _KTHREAD *CurrentThread; // r10
  __int64 v5; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  char v7; // dl
  unsigned __int64 v11; // rax
  char v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  char v16; // [rsp+160h] [rbp+E0h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v18; // [rsp+170h] [rbp+F0h]
  __int16 v19; // [rsp+178h] [rbp+F8h]

  if ( (v18 & 1) != 0 )
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
    v5 = *(_QWORD *)&CurrentThread->Process[4].ProcessLock;
    __writegsqword(0x850u, v5);
    LOWORD(v5) = KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl;
    __writegsword(0x864u, v5);
    LOBYTE(v5) = KeGetPcr()->Prcb.PrcbPad12a[1];
    __writegsbyte(0x85Au, v5);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x866u, BpbKernelSpecCtrl);
      v5 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    v7 = KeGetPcr()->Prcb.PrcbPad12a[1];
    if ( (v7 & 8) != 0 )
    {
      v5 = 73LL;
      __writemsr(0x49u, 1uLL);
      v7 = KeGetPcr()->Prcb.PrcbPad12a[1];
    }
    if ( (v7 & 2) != 0 )
      JUMPOUT(0x1406BB4A9LL);
    if ( v7 < 0 )
    {
      _mm_lfence();
      KiFlushBhbDuringTrapEntryOrExit(v5);
    }
    _mm_lfence();
    __writegsbyte(0x85Eu, 0);
    if ( KiUserCetPl3SspCanonicalizeUpperMask )
    {
      v5 = 1703LL;
      v11 = __readmsr(0x6A7u);
      if ( HIDWORD(v11) )
      {
        v5 = HIDWORD(v11);
        if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v11)) != HIDWORD(v11) )
        {
          v5 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v11), v11));
        }
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v5);
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
  if ( (v18 & 1) != 0 )
    KiSynchronizeUserIsolationDomainExit();
  if ( (_BYTE)KeSmapEnabled && (v18 & 1) != 0 )
    __asm { stac }
  if ( (v19 & 0x200) != 0 )
    _enable();
  if ( (v18 & 1) != 0 )
  {
    v12 = ~(v16 & 0x3F) & v0;
    v13 = 3221225616LL;
    if ( (v12 & 1) != 0 )
    {
      if ( (v12 & 0x40) != 0 )
        v13 = 3221225618LL;
LABEL_39:
      KiExceptionDispatch(v13, 1LL, retaddr, 0LL);
      goto LABEL_40;
    }
    v13 = 3221225614LL;
    if ( (v12 & 4) != 0 )
      goto LABEL_39;
    v13 = 3221225616LL;
    if ( (v12 & 2) != 0 )
      goto LABEL_39;
    v13 = 3221225617LL;
    if ( (v12 & 8) != 0 )
      goto LABEL_39;
    v13 = 3221225619LL;
    if ( (v12 & 0x10) != 0 )
      goto LABEL_39;
    v13 = 3221225615LL;
    if ( (v12 & 0x20) != 0 )
      goto LABEL_39;
  }
LABEL_40:
  v14 = __readcr4();
  v15 = __readcr0();
  KiBugCheckDispatch(127LL, 16LL, v15, v14);
}
