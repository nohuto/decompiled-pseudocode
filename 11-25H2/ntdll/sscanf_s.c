/*
 * XREFs of sscanf_s @ 0x18012F3C0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800F7F60 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _invalid_parameter @ 0x180122258 (_invalid_parameter.c)
 *     _sinput_s @ 0x18013157C (_sinput_s.c)
 */

int sscanf_s(const char *const Buffer, const char *const Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Buffer[v4] );
    return sinput_s(Buffer, v4, Format, va);
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
