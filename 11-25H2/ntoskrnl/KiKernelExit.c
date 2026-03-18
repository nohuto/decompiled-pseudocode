/*
 * XREFs of KiKernelExit @ 0x140BABB80
 * Callers:
 *     NtContinueEx @ 0x14069F120 (NtContinueEx.c)
 *     NtRaiseException @ 0x14069F5B0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x1406A0EA0 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406A14D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406A1B80 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406A2720 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406A2AF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406A5B90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406A8BF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406AFF00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall KiKernelExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // sp
  bool v6; // cf
  _BYTE v7[40]; // [rsp-10h] [rbp-28h] BYREF

  __writegsqword(0xB010u, (unsigned __int64)v7);
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
  {
    v6 = (v5 & 1) != 0;
    if ( v6 && (KeGetPcr()->Prcb.ShadowFlags & 1) != 0 )
      __writegsdword(0xB018u, KeGetPcr()->Prcb.ShadowFlags & 0xFFFFFFFE);
    __writecr3((unsigned __int64)v7);
  }
  if ( (KeGetPcr()->Prcb.ShadowFlags & 2) == 0 )
    __asm { verw    [rsp+arg_18] }
  __asm
  {
    swapgs
    iretq
  }
}
