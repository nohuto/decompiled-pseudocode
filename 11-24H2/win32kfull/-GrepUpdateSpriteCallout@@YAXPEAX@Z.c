/*
 * XREFs of ?GrepUpdateSpriteCallout@@YAXPEAX@Z @ 0x1403209F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBAB4 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 */

void __fastcall GrepUpdateSpriteCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 27) = GrepUpdateSprite(
                                  *(HDEV *)Parameter,
                                  *((HWND *)Parameter + 1),
                                  *((void **)Parameter + 2),
                                  *((struct OPTAPIDCOBJ **)Parameter + 3),
                                  *((struct tagPOINT **)Parameter + 4),
                                  *((struct tagSIZE **)Parameter + 5),
                                  *((struct OPTAPIDCOBJ **)Parameter + 6),
                                  *((struct tagPOINT **)Parameter + 7),
                                  *((_DWORD *)Parameter + 22),
                                  *((struct _BLENDFUNCTION **)Parameter + 8),
                                  *((_DWORD *)Parameter + 23),
                                  *((struct tagRECT **)Parameter + 9),
                                  *((struct tagMINIWINDOWINFO **)Parameter + 10),
                                  *((_DWORD *)Parameter + 24),
                                  *((_DWORD *)Parameter + 25),
                                  *((_DWORD *)Parameter + 26));
}
