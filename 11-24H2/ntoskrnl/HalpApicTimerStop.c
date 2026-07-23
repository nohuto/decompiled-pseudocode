/*
 * XREFs of HalpApicTimerStop @ 0x14055ED00
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x14055EB80 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerStop(unsigned __int8 *a1)
{
  HalpApicTimerInitialize(a1);
  return guard_dispatch_icall_no_overrides(896LL, 0LL);
}
