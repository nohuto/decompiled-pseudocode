/*
 * XREFs of AslPathGetFileNamePart @ 0x1407FA274
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x1407F0F4C (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1407F1944 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 */

const wchar_t *__fastcall AslPathGetFileNamePart(const wchar_t *a1)
{
  wchar_t *v2; // rax

  v2 = wcsrchr(a1, 0x5Cu);
  if ( v2 )
    return v2 + 1;
  else
    return a1;
}
