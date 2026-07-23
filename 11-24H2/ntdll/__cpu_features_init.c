/*
 * XREFs of __cpu_features_init @ 0x1801296DC
 * Callers:
 *     LdrpInitialize @ 0x18002C238 (LdrpInitialize.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x18002C400 (RtlIsProcessorFeaturePresent.c)
 */

__int64 _cpu_features_init()
{
  BOOLEAN IsProcessorFeaturePresent; // bl
  BOOLEAN v1; // al
  char v2; // dl
  char v3; // bl
  BOOLEAN v4; // al
  char v5; // dl
  char v6; // bl
  BOOLEAN v7; // al
  char v8; // dl

  IsProcessorFeaturePresent = RtlIsProcessorFeaturePresent(0x26u);
  v1 = RtlIsProcessorFeaturePresent(0x2Au);
  v2 = IsProcessorFeaturePresent != 0 ? 10 : 2;
  if ( !v1 )
    v2 = IsProcessorFeaturePresent != 0 ? 8 : 0;
  v3 = v2;
  v4 = RtlIsProcessorFeaturePresent(0x27u);
  v5 = v3 | 4;
  if ( !v4 )
    v5 = v3;
  v6 = v5;
  v7 = RtlIsProcessorFeaturePresent(0x28u);
  v8 = v6 | 0x10;
  if ( !v7 )
    v8 = v6;
  _isa_info = v8 | 1;
  return 0LL;
}
