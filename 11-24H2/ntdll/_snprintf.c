/*
 * XREFs of _snprintf @ 0x1801202D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _flsbuf @ 0x1801268F0 (_flsbuf.c)
 *     _output_l @ 0x180126900 (_output_l.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int v4; // edi
  FILE File; // [rsp+38h] [rbp-38h] BYREF
  va_list va; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va, Format);
  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && (!BufferCount || Buffer) )
  {
    File._flag = 66;
    File._base = Buffer;
    File._ptr = Buffer;
    if ( BufferCount > 0x7FFFFFFF )
      LODWORD(BufferCount) = 0x7FFFFFFF;
    File._cnt = BufferCount;
    v4 = output_l(&File, Format, 0LL, (__int64 *)va);
    if ( Buffer )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v4;
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
