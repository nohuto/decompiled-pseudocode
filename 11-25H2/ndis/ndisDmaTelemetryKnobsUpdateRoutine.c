/*
 * XREFs of ndisDmaTelemetryKnobsUpdateRoutine @ 0x1400E37B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1400E37E4 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     wcscmp_0 @ 0x1400EDF16 (wcscmp_0.c)
 */

__int64 __fastcall ndisDmaTelemetryKnobsUpdateRoutine(void *a1, const struct KnobDescriptor *a2, unsigned __int64 a3)
{
  if ( !wcscmp_0(L"DmaTelemetryBucketMasks", a2->Name) )
    ndisDmaTelemetryUpdateBucketSchema(a3);
  return 0LL;
}
