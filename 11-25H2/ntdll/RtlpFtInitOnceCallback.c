/*
 * XREFs of RtlpFtInitOnceCallback @ 0x1801474B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtInitialize @ 0x1801474CC (RtlpFtInitialize.c)
 */

_BOOL8 RtlpFtInitOnceCallback()
{
  return (int)RtlpFtInitialize() >= 0;
}
