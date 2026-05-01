/*
 * XREFs of _wcsicmp @ 0x1802D24F4
 * Callers:
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013892C (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  return _o__wcsicmp(String1, String2);
}
