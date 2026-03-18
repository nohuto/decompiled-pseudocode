/*
 * XREFs of PsWow64GetProcessMachine @ 0x1408FB0E0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     KiContinuePreviousModeUser @ 0x1403E6E30 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403E7FA0 (KeVerifyContextRecord.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     WbGetWowTrapFrame @ 0x140800AF0 (WbGetWowTrapFrame.c)
 *     MiCommitVadMetadataBits @ 0x1408FA9B0 (MiCommitVadMetadataBits.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1408FAF40 (PsGetSupportedProcessorArchitectures.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1408FBB30 (WbValidateHeapExecuteCallArguments.c)
 *     WbDisableTracing @ 0x1408FD168 (WbDisableTracing.c)
 *     WbSetWowTrapFrame @ 0x1408FE6DC (WbSetWowTrapFrame.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409E5F70 (PspWow64SetupCpuArea.c)
 *     PspWow64InitThread @ 0x1409E600C (PspWow64InitThread.c)
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
