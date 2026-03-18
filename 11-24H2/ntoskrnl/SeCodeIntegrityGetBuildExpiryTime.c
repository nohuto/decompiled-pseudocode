/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x14078E1E0
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407B8C30 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_140F04930;
  if ( qword_140F04930 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  *a1 = 0LL;
  return result;
}
