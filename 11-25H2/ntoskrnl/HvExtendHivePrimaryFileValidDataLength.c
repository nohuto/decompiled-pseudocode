/*
 * XREFs of HvExtendHivePrimaryFileValidDataLength @ 0x140AB7AC4
 * Callers:
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvExtendHivePrimaryFileValidDataLength(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (int)guard_dispatch_icall_no_overrides(a1) >= 0 )
  {
    if ( (int)CmpFileFlushAndPurge(a1, 0) < 0 )
      return (unsigned int)-1073741491;
    return v1;
  }
  else
  {
    return (unsigned int)-1073741491;
  }
}
