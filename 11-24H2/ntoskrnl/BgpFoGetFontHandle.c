/*
 * XREFs of BgpFoGetFontHandle @ 0x140BB72B0
 * Callers:
 *     BgpConsoleInitialize @ 0x140BB30B0 (BgpConsoleInitialize.c)
 *     ResFwConfigureDisplayStringResources @ 0x140BB38C4 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140BB3CFC (AnFwConfigureProgressResources.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     BgpFoDetermineFontInformation @ 0x140C7202C (BgpFoDetermineFontInformation.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 */

__int64 __fastcall BgpFoGetFontHandle(wchar_t *Str2, __int64 **a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 *i; // rbx

  result = 3221226021LL;
  if ( !a2 || !FontLibraryInitialized )
    return 3221225485LL;
  *a2 = 0LL;
  v5 = FopFontFileListHead;
  while ( (__int64 *)v5 != &FopFontFileListHead )
  {
    for ( i = *(__int64 **)(v5 + 40); i != (__int64 *)(v5 + 40); i = (__int64 *)*i )
    {
      if ( Str2 )
      {
        if ( !wcsicmp((const wchar_t *)i[4], Str2) )
        {
LABEL_9:
          *a2 = i;
          return 0LL;
        }
      }
      else if ( (*(_DWORD *)(v5 + 28) & 1) != 0 )
      {
        goto LABEL_9;
      }
    }
    v5 = *(_QWORD *)v5;
    result = 3221226021LL;
  }
  return result;
}
