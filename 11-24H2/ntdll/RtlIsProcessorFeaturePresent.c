/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x18002C400
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x18002C0A4 (RtlHpGlobalsInitialize.c)
 *     LdrpGenRandom @ 0x18002C3B0 (LdrpGenRandom.c)
 *     _cpu_check_features @ 0x180109AC0 (_cpu_check_features.c)
 *     __cpu_features_init @ 0x1801296DC (__cpu_features_init.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0xC0 )
    return 0;
  if ( ProcessorFeature < 0x40 )
    return *(_BYTE *)(ProcessorFeature + 0x7FFE0274LL);
  return _bittest64((const signed __int64 *)qword_1801D2DC8, ProcessorFeature - 64);
}
