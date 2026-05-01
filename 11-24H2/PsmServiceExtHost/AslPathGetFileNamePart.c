/*
 * XREFs of AslPathGetFileNamePart @ 0x1800A4314
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180092574 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x180092724 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x1800929B0 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x180093640 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     <none>
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
