/*
 * XREFs of PpmPerfQueryProcMeasurementValues @ 0x140A7B970
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfQueryProcMeasurementValues(unsigned int a1)
{
  unsigned int v2; // ecx
  __int64 *v4; // rax

  if ( a1 )
  {
    v4 = (__int64 *)PpmPerfDomainHead;
    v2 = -1073741822;
    while ( v4 != &PpmPerfDomainHead )
    {
      if ( v4[54] )
        return (unsigned int)guard_dispatch_icall_no_overrides(a1);
      v4 = (__int64 *)*v4;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
