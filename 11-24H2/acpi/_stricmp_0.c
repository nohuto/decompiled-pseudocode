/*
 * XREFs of _stricmp_0 @ 0x1400567F7
 * Callers:
 *     OSInterface @ 0x140051490 (OSInterface.c)
 *     Debugger @ 0x14006E888 (Debugger.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp_0(const char *Str1, const char *Str2)
{
  return _stricmp(Str1, Str2);
}
