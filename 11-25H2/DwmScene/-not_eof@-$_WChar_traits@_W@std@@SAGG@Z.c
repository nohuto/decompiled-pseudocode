/*
 * XREFs of ?not_eof@?$_WChar_traits@_W@std@@SAGG@Z @ 0x1800369D8
 * Callers:
 *     sub_180036A00 @ 0x180036A00 (sub_180036A00.c)
 *     sub_180036BC0 @ 0x180036BC0 (sub_180036BC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<wchar_t>::not_eof(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return 0;
  return a1;
}
