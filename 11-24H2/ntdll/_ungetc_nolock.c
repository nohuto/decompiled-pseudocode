/*
 * XREFs of _ungetc_nolock @ 0x18012C4F4
 * Callers:
 *     ReadString @ 0x18012B678 (ReadString.c)
 *     _input_l @ 0x18012B9E0 (_input_l.c)
 *     ReadString_0 @ 0x18012EEA4 (ReadString_0.c)
 *     _input_s @ 0x18012F1F4 (_input_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180120778 (_invalid_parameter.c)
 *     _getbuf @ 0x18012C5A4 (_getbuf.c)
 */

int __cdecl ungetc_nolock(int Character, FILE *Stream)
{
  unsigned __int8 v3; // di
  int flag; // eax
  char *ptr; // rcx
  int v7; // eax
  char *v8; // rdx
  int v9; // eax

  v3 = Character;
  if ( !Stream )
  {
    invalid_parameter();
    return -1;
  }
  if ( Character == -1 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 1) == 0 && (flag & 0x82) != 0x80 )
    return -1;
  if ( !Stream->_base )
    getbuf(Stream);
  ptr = Stream->_ptr;
  if ( Stream->_ptr == Stream->_base )
  {
    if ( Stream->_cnt )
      return -1;
    ++ptr;
  }
  v7 = Stream->_flag;
  v8 = ptr - 1;
  Stream->_ptr = ptr - 1;
  if ( (v7 & 0x40) != 0 )
  {
    if ( *v8 != v3 )
    {
      Stream->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v8 = v3;
  }
  v9 = Stream->_flag;
  ++Stream->_cnt;
  Stream->_flag = v9 & 0xFFFFFFEE | 1;
  return v3;
}
