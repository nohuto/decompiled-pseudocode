/*
 * XREFs of SeValidateFileAsImageType @ 0x14078E33C
 * Callers:
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6759C (ExpQueryCodeIntegrityCertificateInfo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateFileAsImageType(__int64 a1, __int64 a2)
{
  if ( qword_140F04B68 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225659LL;
}
