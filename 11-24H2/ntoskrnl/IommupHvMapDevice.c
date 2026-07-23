/*
 * XREFs of IommupHvMapDevice @ 0x140563DD4
 * Callers:
 *     IommupMapDeviceInternal @ 0x140562A78 (IommupMapDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v5; // ebx
  __int64 v6; // rdx

  v5 = guard_dispatch_icall_no_overrides(a1, 14LL);
  if ( v5 >= 0 )
  {
    v5 = guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( v5 < 0 )
    {
LABEL_5:
      guard_dispatch_icall_no_overrides(a1, 5LL);
      return (unsigned int)v5;
    }
    v5 = guard_dispatch_icall_no_overrides(a1, *a3);
    if ( v5 < 0 )
    {
      guard_dispatch_icall_no_overrides(a1, v6);
      goto LABEL_5;
    }
  }
  return (unsigned int)v5;
}
