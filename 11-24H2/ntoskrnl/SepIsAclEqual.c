/*
 * XREFs of SepIsAclEqual @ 0x1408F3200
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

char __fastcall SepIsAclEqual(_WORD *a1, _WORD *a2)
{
  if ( a1 )
  {
    if ( a2 && a1[1] == a2[1] && RtlCompareMemory(a1, a2, (unsigned __int16)a1[1]) == (unsigned __int16)a1[1] )
      return 1;
  }
  else if ( !a2 )
  {
    return 1;
  }
  return 0;
}
