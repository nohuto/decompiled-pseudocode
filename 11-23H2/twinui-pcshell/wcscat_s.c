/*
 * XREFs of wcscat_s @ 0x1801C74C4
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x1800EE140 (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  return _o_wcscat_s(Destination, SizeInWords, Source);
}
