/*
 * XREFs of AslPathGetFileNamePart @ 0x14080A524
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x14080154C (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801F44 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
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
