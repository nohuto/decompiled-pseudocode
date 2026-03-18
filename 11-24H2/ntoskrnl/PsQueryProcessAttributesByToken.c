/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x1409B20D0
 * Callers:
 *     EtwpApplyPackageIdFilter @ 0x140A7F91C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
}
