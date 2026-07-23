/*
 * XREFs of _strtoi64 @ 0x1404FB208
 * Callers:
 *     _atoi64 @ 0x1404FB470 (_atoi64.c)
 * Callees:
 *     strtoxq @ 0x1404FAFE8 (strtoxq.c)
 */

__int64 __cdecl strtoi64(const char *String, char **EndPtr, int Radix)
{
  return strtoxq((__int64)&_initiallocalestructinfo, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0);
}
