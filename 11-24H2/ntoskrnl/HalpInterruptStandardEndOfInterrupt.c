/*
 * XREFs of HalpInterruptStandardEndOfInterrupt @ 0x140544120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptStandardEndOfInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), a2, a3, a4);
}
