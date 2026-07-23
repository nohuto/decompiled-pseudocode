/*
 * XREFs of PpmPerfQueryProcMeasurementValues @ 0x140A77BC8
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfQueryProcMeasurementValues(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ecx
  __int64 *v5; // rax

  if ( a1 )
  {
    v5 = (__int64 *)PpmPerfDomainHead;
    v3 = -1073741822;
    while ( v5 != &PpmPerfDomainHead )
    {
      if ( v5[54] )
        return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
      v5 = (__int64 *)*v5;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
