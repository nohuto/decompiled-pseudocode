/*
 * XREFs of ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800C7EBC
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 * Callees:
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180003D00 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateResources(CLivePreview *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax
  unsigned int i; // edi
  int updated; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 88) )
  {
    for ( i = 0; i < *((_DWORD *)this + 88); ++i )
    {
      updated = CLivePreview::_UpdateResourcesForMonitor(
                  this,
                  (struct LivePreviewResource *)(*((_QWORD *)this + 41) + 136LL * i));
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x555u, 0LL);
        return v1;
      }
    }
  }
  else
  {
    SetLastError(0);
    if ( !EnumDisplayMonitors(0LL, 0LL, CLivePreview::s_UpdateResourcesForMonitor, (LPARAM)this) )
    {
      LastError = GetLastError();
      v1 = LastError;
      if ( LastError > 0 )
        v1 = (unsigned __int16)LastError | 0x80070000;
      if ( (v1 & 0x80000000) == 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x54Fu, 0LL);
    }
  }
  return v1;
}
