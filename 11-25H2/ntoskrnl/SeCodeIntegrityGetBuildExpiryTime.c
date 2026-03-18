/*
 * XREFs of SeCodeIntegrityGetBuildExpiryTime @ 0x14077EF20
 * Callers:
 *     ExpKernelExpirationDateCacheProvider @ 0x1407A9780 (ExpKernelExpirationDateCacheProvider.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeCodeIntegrityGetBuildExpiryTime(_QWORD *a1)
{
  __int64 result; // rax

  result = qword_140F04550;
  if ( qword_140F04550 )
    return guard_dispatch_icall_no_overrides(a1);
  *a1 = 0LL;
  return result;
}
