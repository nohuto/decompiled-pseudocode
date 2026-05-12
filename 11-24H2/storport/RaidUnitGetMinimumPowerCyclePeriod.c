/*
 * XREFs of RaidUnitGetMinimumPowerCyclePeriod @ 0x140033870
 * Callers:
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1400B53F8 (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1400BA4EC (StorpTelemetrySendAdaptiveIdleCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitGetMinimumPowerCyclePeriod(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *v2; // rcx
  unsigned int v3; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1872);
  if ( !v1 )
    return 300000LL;
  v2 = *(_DWORD **)(v1 + 8);
  if ( !v2 || *v2 != 3 )
    return 300000LL;
  v3 = v2[5];
  result = 300000LL;
  if ( v3 )
    return v3;
  return result;
}
