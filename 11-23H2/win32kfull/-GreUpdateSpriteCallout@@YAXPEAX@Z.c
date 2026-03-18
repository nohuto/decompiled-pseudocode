/*
 * XREFs of ?GreUpdateSpriteCallout@@YAXPEAX@Z @ 0x1C0265070
 * Callers:
 *     <none>
 * Callees:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00B9650 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 */

void __fastcall GreUpdateSpriteCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 27) = GreUpdateSpriteInternal(
                                  *(HDEV *)Parameter,
                                  *((HWND *)Parameter + 1),
                                  *((void **)Parameter + 2),
                                  *((HDC *)Parameter + 3),
                                  *((struct tagPOINT **)Parameter + 4),
                                  *((struct tagSIZE **)Parameter + 5),
                                  *((HDC *)Parameter + 6),
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
