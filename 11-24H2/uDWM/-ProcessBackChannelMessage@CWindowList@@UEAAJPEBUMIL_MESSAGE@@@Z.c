/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180046730
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x1800467D4 (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180046894 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x180048408 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 */

__int64 __fastcall CWindowList::ProcessBackChannelMessage(CWindowList *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v2; // ebx
  int started; // eax
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( *(_DWORD *)a2 == 8 )
  {
    if ( !CLivePreview::OnNotifyRoundTripReply(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
            *((_DWORD *)a2 + 2)) )
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v2 = started;
      if ( started < 0 )
      {
        v5 = 1788;
LABEL_9:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v5, 0LL);
      }
    }
  }
  else if ( *(_DWORD *)a2 == 5 )
  {
    started = CWindowList::ProcessDeviceStateChangeNotification(this, *((unsigned int *)a2 + 3));
    v2 = started;
    if ( started < 0 )
    {
      v5 = 1793;
      goto LABEL_9;
    }
  }
  else
  {
    v2 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x705u, 0LL);
  }
  return v2;
}
