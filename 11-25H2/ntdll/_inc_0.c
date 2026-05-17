/*
 * XREFs of _inc_0 @ 0x180130CA4
 * Callers:
 *     ReadString_0 @ 0x180130984 (ReadString_0.c)
 *     _input_s @ 0x180130CD4 (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x180132F40 (_filbuf_s.c)
 */

__int64 __fastcall inc_0(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)filbuf_s();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
