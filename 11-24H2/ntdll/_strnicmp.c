/*
 * XREFs of _strnicmp @ 0x1801226C0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     SbpLookup @ 0x18015CA68 (SbpLookup.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
