/*
 * XREFs of PsWow64GetProcessMachine @ 0x14091D9C0
 * Callers:
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403D5B40 (KeVerifyContextRecord.c)
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     WbGetWowTrapFrame @ 0x140801230 (WbGetWowTrapFrame.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 *     PsGetSupportedProcessorArchitectures @ 0x14091D820 (PsGetSupportedProcessorArchitectures.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 *     WbValidateHeapExecuteCallArguments @ 0x14091E410 (WbValidateHeapExecuteCallArguments.c)
 *     WbDisableTracing @ 0x14091FA48 (WbDisableTracing.c)
 *     WbSetWowTrapFrame @ 0x140920FBC (WbSetWowTrapFrame.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409E0800 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409E089C (PspWow64InitThread.c)
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
