/*
 * XREFs of AslPathGetFileNamePart @ 0x1800A4024
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180092114 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x1800922C4 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1800931E0 (SdbpGetMergeRedirectPathInternal.c)
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
