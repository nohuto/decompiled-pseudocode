/*
 * XREFs of SepIsSidEqual @ 0x140794990
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 */

char __fastcall SepIsSidEqual(void *a1, void *a2)
{
  if ( a1 )
  {
    if ( !a2 || !RtlEqualSid(a1, a2) )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
