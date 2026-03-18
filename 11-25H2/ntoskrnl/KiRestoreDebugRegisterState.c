/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1404F9500
 * Callers:
 *     NtContinueEx @ 0x14069F120 (NtContinueEx.c)
 *     NtRaiseException @ 0x14069F5B0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiCallUserMode @ 0x1406A01D0 (KiCallUserMode.c)
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
 *     KiNmiInterruptStart @ 0x1406AB4C0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406AC840 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406AE840 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1406AF7C0 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1406AFF00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
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
