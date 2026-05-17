/*
 * XREFs of _alloca_probe @ 0x180166340
 * Callers:
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180016100 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180019060 (RtlDispatchException.c)
 *     RtlpQueryProcessMachine @ 0x1800443A4 (RtlpQueryProcessMachine.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180098D70 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlWow64GetProcessMachines @ 0x1800AFD00 (RtlWow64GetProcessMachines.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D5500 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlUnwind @ 0x1800D75E0 (RtlUnwind.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EBACC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800F60F0 (RtlWow64IsWowGuestMachineSupported.c)
 *     ReadStringDelimited_1 @ 0x180130824 (ReadStringDelimited_1.c)
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
