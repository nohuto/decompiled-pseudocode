/*
 * XREFs of ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180035F00
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800369C4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180005980 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     WPP_SF_SSd @ 0x180031CD8 (WPP_SF_SSd.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180036D14 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 */

void __fastcall CProcess::RefreshPBMState(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // [rsp+28h] [rbp-10h]

  if ( a3 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(a1 + 164), 3u);
  CProcess::RecalculateVolume(a1, 3);
  if ( (*(_BYTE *)(a1 + 448) & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = *(_DWORD *)(a1 + 160);
      WPP_SF_SSd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
        L"SoundLevelChanged",
        *(const wchar_t **)(a1 + 176),
        v6);
    }
    CProcess::SendPBMNotification(a1, 0LL);
  }
  CProcess::NotifyPLM(a1, a4);
}
