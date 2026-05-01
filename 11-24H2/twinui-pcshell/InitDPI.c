/*
 * XREFs of InitDPI @ 0x1801B77A0
 * Callers:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B7678 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x1801B76C4 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x1803881E0 (-AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?DownlevelIsProcessDPIAware@@YAHXZ @ 0x1801B7844 (-DownlevelIsProcessDPIAware@@YAHXZ.c)
 */

int InitDPI()
{
  int result; // eax
  HDC DC; // rax
  HDC v2; // rbx

  result = DownlevelIsProcessDPIAware();
  if ( dword_1808C7450 == -1 || dword_1808CCBE4 != result )
  {
    dword_1808CCBE4 = result;
    DC = GetDC(0LL);
    v2 = DC;
    if ( DC )
    {
      dword_1808C7450 = GetDeviceCaps(DC, 88);
      dword_1808C7454 = GetDeviceCaps(v2, 90);
      return ReleaseDC(0LL, v2);
    }
    else
    {
      result = 96;
      dword_1808C7450 = 96;
      dword_1808C7454 = 96;
    }
  }
  return result;
}
