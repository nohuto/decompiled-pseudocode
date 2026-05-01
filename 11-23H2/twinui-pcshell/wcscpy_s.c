/*
 * XREFs of wcscpy_s @ 0x1801C74D0
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x1800EE140 (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x1800EE540 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  return _o_wcscpy_s(Destination, SizeInWords, Source);
}
