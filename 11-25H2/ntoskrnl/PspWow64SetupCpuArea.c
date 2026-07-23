/*
 * XREFs of PspWow64SetupCpuArea @ 0x1409EB8A0
 * Callers:
 *     PspSetupUserStack @ 0x1409EB438 (PspSetupUserStack.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     RtlpGetLegacyContextLength @ 0x140420F50 (RtlpGetLegacyContextLength.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EBAB0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409EC038 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int16 ProcessMachine; // ax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG v7; // eax
  ULONG64 CpuAreaEnabledFeatures; // rax
  unsigned int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  ULONG ContextFlags; // [rsp+50h] [rbp+18h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+20h] BYREF

  v10[0] = 0;
  ContextLength = 0;
  ProcessMachine = PsWow64GetProcessMachine(a2);
  v7 = RtlpArchContextFlagFromMachine(ProcessMachine, v4, v5, v6);
  ContextFlags = v7;
  if ( !v7 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v7, 0LL, (int *)v10);
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&ContextFlags);
  RtlGetExtendedContextLength2(ContextFlags, &ContextLength, CpuAreaEnabledFeatures);
  *a1 = ((~(v10[0] - 1LL) & (((((*a1 - 4) & 0xFFFFFFFFFFFFFFFCuLL) - 5) & 0xFFFFFFFFFFFFFFF8uLL) - ContextLength)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
