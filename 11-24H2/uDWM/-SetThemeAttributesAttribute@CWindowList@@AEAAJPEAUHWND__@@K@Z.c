/*
 * XREFs of ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180093B00
 * Callers:
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18007A7F0 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800076E0 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::SetThemeAttributesAttribute(CWindowList *this, HWND a2, int a3)
{
  unsigned int v4; // ebx
  CWindowData *v5; // rcx
  int v6; // eax
  CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v8 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v8);
  v5 = v8;
  if ( v8 )
  {
    if ( *((_DWORD *)v8 + 103) != a3 )
    {
      *((_DWORD *)v8 + 103) = a3;
      v6 = CWindowData::OnWindowStyleUpdated(v5);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1697u, 0LL);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
