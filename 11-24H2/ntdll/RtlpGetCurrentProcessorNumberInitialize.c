/*
 * XREFs of RtlpGetCurrentProcessorNumberInitialize @ 0x180103E90
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x180103E50 (RtlpGetCurrentProcessorNumberUninitialized.c)
 *     RtlpGetCurrentProcessorNumberExUninitialized @ 0x180103E70 (RtlpGetCurrentProcessorNumberExUninitialized.c)
 * Callees:
 *     <none>
 */

__int64 RtlpGetCurrentProcessorNumberInitialize()
{
  __int64 result; // rax

  result = 3LL;
  if ( MEMORY[0x7FFE0295] )
  {
    result = 1LL;
  }
  else if ( MEMORY[0x7FFE0294] )
  {
    result = 2LL;
  }
  RtlpGetCurrentProcessorNumberHow = result;
  return result;
}
