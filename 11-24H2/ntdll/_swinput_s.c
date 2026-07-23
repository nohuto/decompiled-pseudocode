/*
 * XREFs of _swinput_s @ 0x18012EC00
 * Callers:
 *     _snwscanf_s @ 0x18012B170 (_snwscanf_s.c)
 *     swscanf_s @ 0x18012C090 (swscanf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _winput_s @ 0x18012ECD4 (_winput_s.c)
 */

__int64 __fastcall swinput_s(char *a1, unsigned __int64 a2, __int64 a3)
{
  FILE Stream; // [rsp+30h] [rbp-38h] BYREF

  *(&Stream._cnt + 1) = 0;
  memset(&Stream._file, 0, 20);
  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    Stream._base = a1;
    Stream._ptr = a1;
    Stream._cnt = 2 * a2;
    Stream._flag = 73;
    return winput_s(&Stream);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
