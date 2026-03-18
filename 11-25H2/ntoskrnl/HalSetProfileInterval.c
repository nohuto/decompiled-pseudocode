/*
 * XREFs of HalSetProfileInterval @ 0x140542700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalSetProfileInterval(unsigned int a1)
{
  if ( (int)guard_dispatch_icall_no_overrides(0LL) >= 0 )
    return a1;
  else
    return 0LL;
}
