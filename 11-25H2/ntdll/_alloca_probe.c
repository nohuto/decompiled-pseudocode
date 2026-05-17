/*
 * XREFs of _alloca_probe @ 0x1801678D0
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlWow64GetProcessMachines @ 0x1800696C0 (RtlWow64GetProcessMachines.c)
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlUnwind @ 0x180075300 (RtlUnwind.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180077FE0 (RtlpWalkFrameChain.c)
 *     RtlpQueryProcessMachine @ 0x180098084 (RtlpQueryProcessMachine.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D4910 (RtlpHpLfhSubsegmentWalk.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EC7EC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800F7C70 (RtlWow64IsWowGuestMachineSupported.c)
 *     ReadStringDelimited_1 @ 0x180132304 (ReadStringDelimited_1.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 < StackLimit );
  }
  return result;
}
