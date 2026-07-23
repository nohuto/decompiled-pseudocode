/*
 * XREFs of HalpInitializeUncoreProfiling @ 0x140558420
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B4E5B0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 (__fastcall *__fastcall HalpInitializeUncoreProfiling(__int64 a1, __int64 a2))()
{
  __int64 (__fastcall *result)(); // rax

  result = HalpProfileInterface[19];
  if ( result )
    return (__int64 (__fastcall *)())guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
