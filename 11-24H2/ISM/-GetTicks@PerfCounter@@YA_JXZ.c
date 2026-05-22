/*
 * XREFs of ?GetTicks@PerfCounter@@YA_JXZ @ 0x1800BFE30
 * Callers:
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB03C (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C14A4 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x1801C27E0 (-OnTryDemote@MPCMouseProcessor@@MEAA_NXZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C2820 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall PerfCounter::GetTicks(PerfCounter *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  return PerformanceCount;
}
