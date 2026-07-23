/*
 * XREFs of KiInvalidTssFault @ 0x1406B9BC0
 * Callers:
 *     KiInvalidTssFaultShadow @ 0x140BBD640 (KiInvalidTssFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiInvalidTssFault @ 0x1406B9BC0 (KiInvalidTssFault.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __noreturn KiInvalidTssFault()
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  char v6; // dl
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+E0h]
  char v11; // [rsp+170h] [rbp+F0h]
  __int16 v12; // [rsp+178h] [rbp+F8h]

  if ( (v11 & 1) != 0 )
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
      JUMPOUT(0x1406B9E25LL);
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
  if ( (v11 & 1) != 0 )
    KiSynchronizeUserIsolationDomainExit();
  if ( (_BYTE)KeSmapEnabled && (v11 & 1) != 0 )
    __asm { stac }
  if ( (v12 & 0x200) != 0 )
    _enable();
  v8 = (unsigned int)retaddr;
  v9 = __readcr0();
  KiBugCheckDispatch(127LL, 10LL, v9, v8);
}
