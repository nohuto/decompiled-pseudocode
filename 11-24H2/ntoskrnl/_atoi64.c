/*
 * XREFs of _atoi64 @ 0x1404FB470
 * Callers:
 *     KiMatchLoadOption @ 0x140B591A8 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140C607D8 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x1404FB208 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
