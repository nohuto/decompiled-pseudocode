/*
 * XREFs of CmpEffectiveTokenForSubject @ 0x14099A770
 * Callers:
 *     CmpExamineSaclForAuditEvent @ 0x1407DD410 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpEffectiveTokenForSubject(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8

  if ( *a1 )
    v2 = *a1;
  else
    v2 = a1[2];
  if ( a2 )
    *a2 = (*a1 != 0) + 1;
  return v2;
}
