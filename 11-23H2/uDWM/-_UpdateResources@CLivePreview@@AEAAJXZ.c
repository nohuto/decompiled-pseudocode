/*
 * XREFs of ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800C8F84
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180049AF0 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800C9074 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateResources(CLivePreview *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax
  unsigned int v4; // edi
  int updated; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 100) )
  {
    v4 = 0;
    while ( 1 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitor(
                  this,
                  (struct LivePreviewResource *)(*((_QWORD *)this + 47) + 136LL * v4));
      v1 = updated;
      if ( updated < 0 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 100) )
        return v1;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x558u);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x552u);
    }
  }
  return v1;
}
