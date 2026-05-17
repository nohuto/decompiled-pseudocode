/*
 * XREFs of _wctomb_s_l @ 0x18012C2D8
 * Callers:
 *     wctomb_s @ 0x18012C394 (wctomb_s.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x1800B2430 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x18010D560 (_errno.c)
 *     _invalid_parameter @ 0x180120778 (_invalid_parameter.c)
 */

errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  int v7; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v8) = WCh;
  if ( MbCh || !SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = -1;
    if ( SizeInBytes > 0x7FFFFFFF )
    {
      invalid_parameter();
      return 22;
    }
    if ( MbCh )
    {
      v7 = 0;
      if ( (int)RtlUnicodeToMultiByteN(MbCh, SizeInBytes, (unsigned int *)&v7, &v8, 2u) < 0 )
      {
        *errno() = 42;
        return 42;
      }
      if ( SizeConverted )
        *SizeConverted = v7;
    }
    else if ( SizeConverted )
    {
      *SizeConverted = _mb_cur_max;
    }
  }
  else if ( SizeConverted )
  {
    *SizeConverted = 0;
  }
  return 0;
}
