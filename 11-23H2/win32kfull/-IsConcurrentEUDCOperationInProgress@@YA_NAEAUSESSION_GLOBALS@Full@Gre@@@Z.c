/*
 * XREFs of ?IsConcurrentEUDCOperationInProgress@@YA_NAEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C001B2AC
 * Callers:
 *     bAddAllFlEntry @ 0x1C001ADEC (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C01159AC (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C029E0C8 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C029E3F0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

char __fastcall IsConcurrentEUDCOperationInProgress(struct Gre::Full::SESSION_GLOBALS *a1)
{
  if ( !*((_DWORD *)a1 + 3325) )
    return 0;
  EngSetLastError(0xA7u);
  return 1;
}
