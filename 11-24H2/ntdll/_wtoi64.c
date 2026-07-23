/*
 * XREFs of _wtoi64 @ 0x1801214F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __cdecl wtoi64(const wchar_t *String)
{
  if ( String )
    return wcstoi64(String, 0LL, 10);
  else
    return 0LL;
}
