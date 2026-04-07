/*
 * XREFs of ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x180048408
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180046730 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180086B2C (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ?ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ @ 0x1800EE638 (-ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ProcessDeviceStateChangeNotification(CWindowList *a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  if ( a2 == 1 )
  {
    v5 = CWindowList::ClearAllSnapshotRepresentations(a1);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x8C8u, 0LL);
    else
      CDesktopManager::ReleaseCVICache();
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
