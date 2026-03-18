/*
 * XREFs of HalpApicStartProcessor @ 0x1405666C0
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicStartProcessor(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( (a4 & 0xFFF00FFF) != 0 )
    return 3221225485LL;
  KeStallExecutionProcessor(0xC8u);
  guard_dispatch_icall_no_overrides(v6);
  if ( !HalpApicX2Mode )
    a2 <<= 24;
  guard_dispatch_icall_no_overrides(a2);
  KeStallExecutionProcessor(0xAu);
  guard_dispatch_icall_no_overrides(a2);
  KeStallExecutionProcessor(0xC8u);
  guard_dispatch_icall_no_overrides(a2);
  KeStallExecutionProcessor(0xC8u);
  guard_dispatch_icall_no_overrides(v7);
  KeStallExecutionProcessor(0x64u);
  guard_dispatch_icall_no_overrides(a2);
  KeStallExecutionProcessor(0xC8u);
  return 0LL;
}
