/*
 * XREFs of ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18001A04C
 * Callers:
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x18003BAB0 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002BC4 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(
        CApplicationManager *this,
        unsigned int a2)
{
  CApplicationManager *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, a2);
  }
  v5 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_DWORD *)(v6 + 212) == a2 && *(_DWORD *)(v6 + 652) && *(_QWORD *)(v6 + 600) )
      CApplicationManager::ProcessInteractivityNotification(
        (__int64)v3,
        *(const unsigned __int16 **)(v6 + 24),
        *(CApplication **)(v6 + 696),
        1u,
        a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
