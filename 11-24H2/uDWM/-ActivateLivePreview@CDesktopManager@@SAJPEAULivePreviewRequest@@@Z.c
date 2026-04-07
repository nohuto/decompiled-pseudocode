/*
 * XREFs of ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180045F00
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045D50 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x1800451F4 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

__int64 __fastcall CDesktopManager::ActivateLivePreview(struct LivePreviewRequest *lpMem)
{
  __int64 v1; // r9
  char *v2; // rdx
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax

  v1 = 0LL;
  v2 = (char *)lpMem + 32;
  if ( *((_DWORD *)lpMem + 7) )
    v1 = (__int64)&v2[8 * *((unsigned int *)lpMem + 1)];
  if ( *(_DWORD *)lpMem )
  {
    v4 = CLivePreview::Activate(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57),
           (__int64)v2,
           *((_DWORD *)lpMem + 1),
           *((HWND *)lpMem + 1),
           *((_DWORD *)lpMem + 4),
           *((_DWORD *)lpMem + 5),
           v1);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xB05u, 0LL);
  }
  else
  {
    v7 = CLivePreview::DeActivate(
           *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
           *((_DWORD *)lpMem + 6) != 0);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xB09u, 0LL);
  }
  DefaultHeap::Free(lpMem);
  return v5;
}
