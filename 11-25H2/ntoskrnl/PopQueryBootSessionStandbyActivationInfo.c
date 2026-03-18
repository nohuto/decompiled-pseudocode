/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x140486A74
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x140486BF4 (PpmQueryPlatformStateResidency.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140E67258 )
  {
    guard_dispatch_icall_no_overrides(a1 + 24, a1 + 16);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency((unsigned int)dword_140E27B80);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
