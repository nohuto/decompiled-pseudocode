/*
 * XREFs of SepIsAclEqual @ 0x140863BB4
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
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
