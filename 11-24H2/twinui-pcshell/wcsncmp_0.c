/*
 * XREFs of wcsncmp_0 @ 0x1802D5195
 * Callers:
 *     AslPathClean @ 0x180676388 (AslPathClean.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsncmp_0(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return wcsncmp(String1, String2, MaxCount);
}
