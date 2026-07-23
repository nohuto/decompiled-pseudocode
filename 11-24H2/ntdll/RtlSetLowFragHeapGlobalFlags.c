/*
 * XREFs of RtlSetLowFragHeapGlobalFlags @ 0x1800A5060
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180101134 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlpHpStackTraceEnable @ 0x18011DE14 (RtlpHpStackTraceEnable.c)
 */

char __fastcall RtlSetLowFragHeapGlobalFlags(unsigned int a1, int a2)
{
  int v4; // r8d
  char result; // al

  RtlpHpApplySegmentHeapConfigurations();
  v4 = RtlpLowFragHeapGlobalFlags;
  if ( (a1 & 8) != 0 )
  {
    v4 = RtlpLowFragHeapGlobalFlags | 0x10;
    RtlpLowFragHeapGlobalFlags |= 0x10u;
  }
  if ( (a1 & 4) != 0 )
  {
    v4 |= 8u;
    RtlpLowFragHeapGlobalFlags = v4;
  }
  if ( (a2 & 0x100000) != 0 || (a1 & 2) != 0 )
  {
    v4 |= 2u;
    RtlpLowFragHeapGlobalFlags = v4;
  }
  if ( (v4 & 2) != 0 || (a1 & 1) != 0 )
    RtlpLowFragHeapGlobalFlags = v4 | 4;
  if ( (a1 & 0xFFFFFF00) != 0 )
    RtlpHpLfhPerfFlags = a1 >> 8;
  if ( (a1 & 0x10) != 0 )
    RtlpHpStackTraceEnable();
  result = RtlpHpHeapFeatures;
  if ( (a1 & 0x20) != 0 )
  {
    result = RtlpHpHeapFeatures | 4;
    RtlpHpHeapFeatures |= 4u;
  }
  if ( (a1 & 0x40) != 0 )
    RtlpHpAppCompatFlags |= 1u;
  if ( (a1 & 0x80u) != 0 )
  {
    result |= 8u;
    RtlpHpHeapFeatures = result;
  }
  return result;
}
