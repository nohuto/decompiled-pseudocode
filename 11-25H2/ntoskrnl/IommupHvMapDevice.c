/*
 * XREFs of IommupHvMapDevice @ 0x1405638C4
 * Callers:
 *     IommupMapDeviceInternal @ 0x1405625B8 (IommupMapDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDevice(__int64 a1)
{
  int v2; // ebx

  v2 = guard_dispatch_icall_no_overrides(a1);
  if ( v2 >= 0 )
  {
    v2 = guard_dispatch_icall_no_overrides(a1);
    if ( v2 < 0 )
    {
LABEL_5:
      guard_dispatch_icall_no_overrides(a1);
      return (unsigned int)v2;
    }
    v2 = guard_dispatch_icall_no_overrides(a1);
    if ( v2 < 0 )
    {
      guard_dispatch_icall_no_overrides(a1);
      goto LABEL_5;
    }
  }
  return (unsigned int)v2;
}
