/*
 * XREFs of __cpu_features_init @ 0x18012B4AC
 * Callers:
 *     LdrpInitialize @ 0x1800973E8 (LdrpInitialize.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x1800975B0 (RtlIsProcessorFeaturePresent.c)
 */

__int64 _cpu_features_init()
{
  unsigned __int8 IsProcessorFeaturePresent; // bl
  unsigned __int8 v1; // al
  char v2; // dl
  char v3; // bl
  unsigned __int8 v4; // al
  char v5; // dl
  char v6; // bl
  unsigned __int8 v7; // al
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
