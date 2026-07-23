/*
 * XREFs of HvlLpGetLogicalProcessorHwId @ 0x140584880
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLogicalProcessorProperty @ 0x1405817B4 (HvlpGetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlLpGetLogicalProcessorHwId(int a1, _QWORD *a2)
{
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( (int)HvlpGetLogicalProcessorProperty(a1, 3, v4) < 0 )
    return 3221225473LL;
  *a2 = LODWORD(v4[0]);
  return 0LL;
}
