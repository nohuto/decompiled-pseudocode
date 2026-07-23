/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x140964BD0
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (int)guard_dispatch_icall_no_overrides(a1, 0LL) >= 0 )
  {
    if ( (int)CmpFileFlushAndPurge(a1, 0LL) < 0 )
      return (unsigned int)-1073741491;
    return v1;
  }
  else
  {
    return (unsigned int)-1073741491;
  }
}
