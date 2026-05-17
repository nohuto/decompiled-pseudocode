/*
 * XREFs of atol @ 0x180121B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *String)
{
  if ( String )
    return strtolX(String, 0LL, 10LL, 1LL);
  else
    return 0;
}
