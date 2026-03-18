/*
 * XREFs of ACPIPccSciReceived @ 0x14002D58C
 * Callers:
 *     ACPIInterruptServiceRoutine @ 0x14002D210 (ACPIInterruptServiceRoutine.c)
 * Callees:
 *     AcpiPccIsInterruptIssued @ 0x1400641AC (AcpiPccIsInterruptIssued.c)
 *     AcpiPccIsrIsPlatformNotificationIssued @ 0x140064210 (AcpiPccIsrIsPlatformNotificationIssued.c)
 */

bool ACPIPccSciReceived()
{
  bool v0; // di
  unsigned int i; // esi
  __int64 v2; // rbx

  v0 = 0;
  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace && *(_DWORD *)(AcpiPccLegacySubspace + 560) )
      v0 = (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccLegacySubspace) != 0;
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v2 = AcpiPccSubspaces + 824LL * i;
        if ( *(_DWORD *)(v2 + 12) == 1
          && (*(_DWORD *)(v2 + 560) && (unsigned __int8)AcpiPccIsInterruptIssued(AcpiPccSubspaces + 824LL * i)
           || (unsigned __int8)AcpiPccIsrIsPlatformNotificationIssued(v2)) )
        {
          v0 = 1;
        }
      }
    }
  }
  return v0;
}
