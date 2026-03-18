/*
 * XREFs of AslPathGetFileNamePart @ 0x140809DE4
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x140800E0C (SdbGetMergeRedirectPath.c)
 *     SdbOpenDatabaseEx @ 0x140800F84 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801804 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     wcsrchr @ 0x140500180 (wcsrchr.c)
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
