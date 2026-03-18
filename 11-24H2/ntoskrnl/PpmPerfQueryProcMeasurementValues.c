/*
 * XREFs of PpmPerfQueryProcMeasurementValues @ 0x140A7D8C8
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfQueryProcMeasurementValues(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  __int64 *v7; // rax

  if ( a1 )
  {
    v7 = (__int64 *)PpmPerfDomainHead;
    v5 = -1073741822;
    while ( v7 != &PpmPerfDomainHead )
    {
      if ( v7[54] )
        return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
      v7 = (__int64 *)*v7;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
