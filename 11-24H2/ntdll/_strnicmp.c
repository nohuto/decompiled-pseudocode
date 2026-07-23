/*
 * XREFs of _strnicmp @ 0x1801208F0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     SbpLookup @ 0x18015AE28 (SbpLookup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
