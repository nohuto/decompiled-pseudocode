/*
 * XREFs of SepIsAclEqual @ 0x140982EF4
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140982FF4 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
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
