/*
 * XREFs of HalpInterruptStandardEndOfInterrupt @ 0x140541A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptStandardEndOfInterrupt(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), a2);
}
