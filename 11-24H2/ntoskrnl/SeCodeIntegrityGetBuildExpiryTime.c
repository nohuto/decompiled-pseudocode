/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x14078E110
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407B9080 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140F04BD0;
  if ( qword_140F04BD0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  *a1 = 0LL;
  return result;
}
