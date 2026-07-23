/*
 * XREFs of HalpApicTimerIsInvariant @ 0x14055EBDC
 * Callers:
 *     HalpApicTimerDiscover @ 0x14055E9D0 (HalpApicTimerDiscover.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicTimerIsInvariant(__int64 a1)
{
  int v2; // [rsp+50h] [rbp+20h]

  v2 = 0;
  if ( (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicTimerCpuApi) >= 0 )
    guard_dispatch_icall_no_overrides(0LL, 0LL);
  return 0;
}
