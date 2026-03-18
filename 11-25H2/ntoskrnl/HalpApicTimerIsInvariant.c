/*
 * XREFs of HalpApicTimerIsInvariant @ 0x14055E6AC
 * Callers:
 *     HalpApicTimerDiscover @ 0x14055E4A0 (HalpApicTimerDiscover.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicTimerIsInvariant(__int64 a1)
{
  if ( (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicTimerCpuApi) >= 0 )
    guard_dispatch_icall_no_overrides(0LL);
  return 0;
}
