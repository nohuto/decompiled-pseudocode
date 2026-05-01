/*
 * XREFs of wcscpy_s @ 0x1802D2590
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013875C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z @ 0x180138C40 (-PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z.c)
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x1801395C4 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  return _o_wcscpy_s(Destination, SizeInWords, Source);
}
