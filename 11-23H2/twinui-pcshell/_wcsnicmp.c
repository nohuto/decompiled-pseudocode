/*
 * XREFs of _wcsnicmp @ 0x1801C744C
 * Callers:
 *     AslpEnvResolveVars @ 0x1800EDEB0 (AslpEnvResolveVars.c)
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x1800EE140 (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     AslEnvVarQuery @ 0x1800EF7CC (AslEnvVarQuery.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  return _o__wcsnicmp(String1, String2, MaxCount);
}
