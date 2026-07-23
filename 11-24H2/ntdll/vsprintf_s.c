/*
 * XREFs of vsprintf_s @ 0x18012BAC0
 * Callers:
 *     sprintf_s @ 0x18012BA90 (sprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _soutput_s @ 0x18012CEC4 (_soutput_s.c)
 */

int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !BufferCount || !Format )
    goto LABEL_6;
  result = soutput_s(Buffer, BufferCount, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    invalid_parameter();
  return -1;
}
