/*
 * XREFs of PsWow64GetProcessMachine @ 0x140907610
 * Callers:
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x140261330 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x140262360 (KeVerifyContextRecord.c)
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     WbGetWowTrapFrame @ 0x1407F0C30 (WbGetWowTrapFrame.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     MiCommitVadMetadataBits @ 0x140906D54 (MiCommitVadMetadataBits.c)
 *     PsGetSupportedProcessorArchitectures @ 0x14090746C (PsGetSupportedProcessorArchitectures.c)
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 *     WbValidateHeapExecuteCallArguments @ 0x140908080 (WbValidateHeapExecuteCallArguments.c)
 *     WbDisableTracing @ 0x140909530 (WbDisableTracing.c)
 *     WbSetWowTrapFrame @ 0x14090A858 (WbSetWowTrapFrame.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409EB8A0 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409EB93C (PspWow64InitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // cx

  result = 34404LL;
  if ( *(_QWORD *)(a1 + 784) )
  {
    v2 = *(_WORD *)(a1 + 1772);
    if ( !v2 )
      return (unsigned __int16)-31132;
    return v2;
  }
  return result;
}
