/*
 * XREFs of _GetLocaleName @ 0x18000DD84
 * Callers:
 *     _Getctype @ 0x180005CC4 (_Getctype.c)
 *     _Getcvt @ 0x180005EF8 (_Getcvt.c)
 *     _Getcoll @ 0x180021AA8 (_Getcoll.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(int a1)
{
  wchar_t *result; // rax

  result = _wsetlocale(a1, 0LL);
  if ( result )
  {
    if ( *result != 67 || result[1] )
      return _wcsdup(result);
    else
      return 0LL;
  }
  return result;
}
