/*
 * XREFs of ?not_eof@?$_WChar_traits@_W@std@@SAGG@Z @ 0x180036B38
 * Callers:
 *     sub_180036B60 @ 0x180036B60 (sub_180036B60.c)
 *     sub_180036D20 @ 0x180036D20 (sub_180036D20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<wchar_t>::not_eof(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return 0;
  return a1;
}
