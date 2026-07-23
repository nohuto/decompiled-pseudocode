/*
 * XREFs of WheaSignalHandlerOverride @ 0x14065D390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall WheaSignalHandlerOverride(unsigned int a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 <= 0x12 && WheapOverrideHandler[a1] )
    return guard_dispatch_icall_no_overrides(a2, a2);
  return v2;
}
