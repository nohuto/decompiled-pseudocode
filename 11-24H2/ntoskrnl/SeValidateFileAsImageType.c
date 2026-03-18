/*
 * XREFs of SeValidateFileAsImageType @ 0x14078E40C
 * Callers:
 *     ExpQueryElamCertInfo @ 0x1407B4C04 (ExpQueryElamCertInfo.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6E09C (ExpQueryCodeIntegrityCertificateInfo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeValidateFileAsImageType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140F048C8 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 3221225659LL;
}
