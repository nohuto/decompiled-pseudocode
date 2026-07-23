/*
 * XREFs of _alloca_probe @ 0x180164700
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18002DBC0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     RtlWow64GetProcessMachines @ 0x18007C5A0 (RtlWow64GetProcessMachines.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D0870 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlUnwind @ 0x1800D2950 (RtlUnwind.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800E6DDC (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800F0650 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpQueryProcessMachine @ 0x180113DDC (RtlpQueryProcessMachine.c)
 *     ReadStringDelimited_1 @ 0x18012EA54 (ReadStringDelimited_1.c)
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
