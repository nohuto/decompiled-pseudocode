/*
 * XREFs of KiKernelExit @ 0x140BBCB80
 * Callers:
 *     NtContinueEx @ 0x1406AA3F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1406AA880 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x1406AC170 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406AC7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ACE50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AD230 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AD610 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AD9F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406ADDC0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AE9A0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406AF140 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406B0A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B0E60 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B1AE0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B2240 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406B3EC0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BB200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
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
