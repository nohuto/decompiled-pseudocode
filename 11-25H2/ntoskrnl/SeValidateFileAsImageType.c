/*
 * XREFs of SeValidateFileAsImageType @ 0x14077F14C
 * Callers:
 *     ExpQueryElamCertInfo @ 0x1407A5834 (ExpQueryElamCertInfo.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6BEE8 (ExpQueryCodeIntegrityCertificateInfo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateFileAsImageType(__int64 a1)
{
  if ( qword_140F044E8 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225659LL;
}
