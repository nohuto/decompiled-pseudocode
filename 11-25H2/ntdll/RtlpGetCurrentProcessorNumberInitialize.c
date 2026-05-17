/*
 * XREFs of RtlpGetCurrentProcessorNumberInitialize @ 0x18010B970
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x18010B930 (RtlpGetCurrentProcessorNumberUninitialized.c)
 *     RtlpGetCurrentProcessorNumberExUninitialized @ 0x18010B950 (RtlpGetCurrentProcessorNumberExUninitialized.c)
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
