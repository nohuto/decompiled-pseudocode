/*
 * XREFs of WheaSignalHandlerOverride @ 0x14065EBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall WheaSignalHandlerOverride(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r8

  v4 = 0;
  if ( a1 <= 0x12 && WheapOverrideHandler[a1] )
    return guard_dispatch_icall_no_overrides(a2, a2, 0LL, a4);
  return v4;
}
