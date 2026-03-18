/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x14032D49C
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmQueryPlatformStateResidency @ 0x14032D624 (PpmQueryPlatformStateResidency.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( qword_140E67538 )
  {
    guard_dispatch_icall_no_overrides(a1 + 24, a1 + 16, a1, a4);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency((unsigned int)dword_140E27DC0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
