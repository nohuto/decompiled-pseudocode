/*
 * XREFs of PspWow64SetupCpuArea @ 0x1409E5F70
 * Callers:
 *     PspSetupUserStack @ 0x1409E5B08 (PspSetupUserStack.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     RtlpGetLegacyContextLength @ 0x1404EF000 (RtlpGetLegacyContextLength.c)
 *     PsWow64GetProcessMachine @ 0x1408FB0E0 (PsWow64GetProcessMachine.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E62DC (RtlpArchContextFlagFromMachine.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E6328 (RtlWow64GetCpuAreaEnabledFeatures.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int16 ProcessMachine; // ax
  int v4; // eax
  __int64 CpuAreaEnabledFeatures; // rax
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v7[0] = 0;
  v9 = 0;
  ProcessMachine = PsWow64GetProcessMachine(a2);
  v4 = RtlpArchContextFlagFromMachine(ProcessMachine);
  v8 = v4;
  if ( !v4 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v4, 0LL, v7);
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&v8);
  RtlGetExtendedContextLength2(v8, &v9, CpuAreaEnabledFeatures);
  *a1 = ((~(v7[0] - 1LL) & (((((*a1 - 4) & 0xFFFFFFFFFFFFFFFCuLL) - 5) & 0xFFFFFFFFFFFFFFF8uLL) - v9)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
