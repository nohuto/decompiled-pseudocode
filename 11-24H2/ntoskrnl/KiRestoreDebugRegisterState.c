/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1404FBC10
 * Callers:
 *     NtContinueEx @ 0x1406AA3F0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1406AA880 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiCallUserMode @ 0x1406AB4A0 (KiCallUserMode.c)
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
 *     KiNmiInterruptStart @ 0x1406B67C0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B7B40 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406B9B40 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1406BAAC0 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1406BB200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRestoreDebugRegisterState()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x9122u) & 2) != 0 && (v3 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
  {
    if ( (v3 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v3 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v5 = result;
    v6 = __readmsr(0x1D9u);
    v7 = HIDWORD(v6);
    result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v7, result));
  }
  return result;
}
