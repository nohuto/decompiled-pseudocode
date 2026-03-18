/*
 * XREFs of HalpApicTimerStop @ 0x1405610D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x140560F50 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicTimerStop(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r9

  HalpApicTimerInitialize(a1, a2, a3, a4);
  return guard_dispatch_icall_no_overrides(896LL, 0LL, v4, v5);
}
