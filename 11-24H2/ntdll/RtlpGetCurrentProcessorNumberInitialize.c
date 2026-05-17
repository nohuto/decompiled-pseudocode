/*
 * XREFs of RtlpGetCurrentProcessorNumberInitialize @ 0x180108F60
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x180108F20 (RtlpGetCurrentProcessorNumberUninitialized.c)
 *     RtlpGetCurrentProcessorNumberExUninitialized @ 0x180108F40 (RtlpGetCurrentProcessorNumberExUninitialized.c)
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
