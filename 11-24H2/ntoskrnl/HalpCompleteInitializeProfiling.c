/*
 * XREFs of HalpCompleteInitializeProfiling @ 0x140B4EA90
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B4C570 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 (__fastcall *__fastcall HalpCompleteInitializeProfiling(__int64 a1, __int64 a2, __int64 a3, __int64 a4))()
{
  __int64 (__fastcall *result)(); // rax

  result = HalpProfileInterface[16];
  if ( result )
    return (__int64 (__fastcall *)())guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  return result;
}
