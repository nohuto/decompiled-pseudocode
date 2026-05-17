/*
 * XREFs of _inc @ 0x18012B9B0
 * Callers:
 *     ReadString @ 0x18012B678 (ReadString.c)
 *     _input_l @ 0x18012B9E0 (_input_l.c)
 * Callees:
 *     _filbuf @ 0x18012C4E8 (_filbuf.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
