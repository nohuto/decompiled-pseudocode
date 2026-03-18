/*
 * XREFs of HalpInitSystemHelper @ 0x140B3B718
 * Callers:
 *     HalInitializeProcessor @ 0x140539540 (HalInitializeProcessor.c)
 *     HalpInitializeLateSystemActions @ 0x14053956C (HalpInitializeLateSystemActions.c)
 *     HalpDispatchPnp @ 0x140A77290 (HalpDispatchPnp.c)
 *     HalpInitSystemPhase1 @ 0x140B3B7C4 (HalpInitSystemPhase1.c)
 *     HalAllProcessorsStarted @ 0x140BFC6B0 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140BFC6E0 (HalReportResourceUsage.c)
 *     HalpInitSystemPhase0 @ 0x140BFC74C (HalpInitSystemPhase0.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInitSystemHelper(unsigned int a1, int a2)
{
  __int64 result; // rax
  unsigned int i; // edi

  result = 0LL;
  while ( (int)a1 <= a2 )
  {
    for ( i = 0; i < 0x16; ++i )
    {
      result = guard_dispatch_icall_no_overrides(a1);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x8200uLL, (int)result, (int)a1, (ULONG_PTR)*(&HalSubComponents + 2 * i + 1));
    }
    ++a1;
  }
  return result;
}
