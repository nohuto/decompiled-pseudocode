/*
 * XREFs of RtlpFtInitOnceCallback @ 0x180145F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtInitialize @ 0x180145F1C (RtlpFtInitialize.c)
 */

_BOOL8 RtlpFtInitOnceCallback()
{
  return (int)RtlpFtInitialize() >= 0;
}
