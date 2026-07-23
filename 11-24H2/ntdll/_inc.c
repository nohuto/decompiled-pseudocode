/*
 * XREFs of _inc @ 0x180129BE0
 * Callers:
 *     ReadString @ 0x1801298A8 (ReadString.c)
 *     _input_l @ 0x180129C10 (_input_l.c)
 * Callees:
 *     _filbuf @ 0x18012A718 (_filbuf.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
