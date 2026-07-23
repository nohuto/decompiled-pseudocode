/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1402B5A38
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x1402B5BB4 (PpmQueryPlatformStateResidency.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140E676A8 )
  {
    guard_dispatch_icall_no_overrides(a1 + 24, a1 + 16);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency((unsigned int)dword_140E27F00);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
