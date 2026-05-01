/*
 * XREFs of _wcsnicmp @ 0x1802D250C
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013875C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslpEnvResolveVars @ 0x180139B50 (AslpEnvResolveVars.c)
 *     AslEnvVarQuery @ 0x18013A00C (AslEnvVarQuery.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return _o__wcsnicmp(String1, String2, MaxCount);
}
