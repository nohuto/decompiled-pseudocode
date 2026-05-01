/*
 * XREFs of ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x1803559E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x180180ACC (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18034D808 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180351438 (-HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180351728 (-HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180354038 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnMessage(
        GamingOverlayExperienceManager *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2,
        int a3)
{
  __int64 result; // rax
  const char *v6; // r9
  int v7; // eax
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  const WCHAR *v14; // rdx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  char v20; // al
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 != 786 )
    return 0LL;
  try
  {
    if ( a3 == 56 )
    {
      GamingOverlayExperienceManager::HandleHolographicHotkey(
        (GamingOverlayExperienceManager *)((char *)this - 168),
        a2);
      return 0LL;
    }
    if ( !IsDesktopInputContext((__int64)this, a2) )
      return 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
      && a3 == 114 )
    {
      v7 = GamingOverlayExperienceManager::HandleGamingPostureHotkey((GamingOverlayExperienceManager *)((char *)this - 168));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xDDB,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v7);
      return 0LL;
    }
    v8 = 7;
    if ( a3 > 63 )
    {
      if ( a3 > 94 )
      {
        v26 = a3 - 95;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  if ( v30 != 1 )
                    return 0LL;
                  v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_10&source=GbEm";
                }
                else
                {
                  v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_9&source=GbEm";
                }
              }
              else
              {
                v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_8&source=GbEm";
              }
            }
            else
            {
              v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_7&source=GbEm";
            }
          }
          else
          {
            v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_6&source=GbEm";
          }
        }
        else
        {
          v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_5&source=GbEm";
        }
      }
      else if ( a3 == 94 )
      {
        v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_4&source=GbEm";
      }
      else
      {
        v21 = a3 - 64;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 25;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  if ( v25 != 1 )
                    return 0LL;
                  v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_3&source=GbEm";
                }
                else
                {
                  v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_2&source=GbEm";
                }
              }
              else
              {
                v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_1&source=GbEm";
              }
            }
            else
            {
              v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_WEBCAMERA_CAPTURE&source=GbEm";
            }
          }
          else
          {
            v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_BROADCAST&source=GbEm";
          }
        }
        else
        {
          v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_MICROPHONE_CAPTURE&source=GbEm";
        }
      }
      goto LABEL_76;
    }
    if ( a3 == 63 )
    {
      v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_GAME_RECORDING_INDICATOR&source=GbEm";
      goto LABEL_76;
    }
    if ( a3 > 54 )
    {
      v15 = a3 - 55;
      if ( !v15 )
      {
        v14 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_WEBCAMERA_CAPTURE&source=GbEm";
        goto LABEL_76;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v20 = GamingOverlayExperienceManager::GameBarSupportsGamepadCommands((GamingOverlayExperienceManager *)((char *)this - 168));
        v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEDVR_NEXUS&source=GbEm";
        if ( v20 )
          v14 = 0LL;
        v8 = v20 != 0 ? 7 : 0;
        if ( !v14 )
          return 0LL;
        goto LABEL_76;
      }
      v17 = v16 - 3;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 != 1 )
              return 0LL;
            v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_CAPTURE_GAME_SCREENSHOT&source=GbEm";
            goto LABEL_25;
          }
          v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_GAME_RECORD_CLIP&source=GbEm";
LABEL_27:
          v8 = 1;
          goto LABEL_76;
        }
        v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_GAME_RECORDING&source=GbEm";
LABEL_29:
        v8 = 10;
        goto LABEL_76;
      }
      v14 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_GAME_GUIDE_OVERLAY&source=GbEm";
    }
    else
    {
      if ( a3 == 54 )
      {
        v14 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_BROADCAST&source=GbEm";
        goto LABEL_76;
      }
      v9 = a3 - 48;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 == 1 )
                {
                  v14 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_MICROPHONE_CAPTURE&source=GbEm";
                  goto LABEL_76;
                }
                return 0LL;
              }
              v14 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_GAME_RECORDING_INDICATOR&source=GbEm";
LABEL_76:
              v31 = GamingOverlayExperienceManager::LaunchGameBar(
                      (GamingOverlayExperienceManager *)((char *)this - 168),
                      v14,
                      v8);
              if ( v31 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xE49,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)(unsigned int)v31);
              return 0LL;
            }
            v14 = L"ms-gamebar://hotkey?ihkid=IHKID_CAPTURE_GAME_SCREENSHOT&source=GbEm";
LABEL_25:
            v8 = 4;
            goto LABEL_76;
          }
          v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAME_RECORD_CLIP&source=GbEm";
          goto LABEL_27;
        }
        v14 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_GAME_RECORDING&source=GbEm";
        goto LABEL_29;
      }
      v14 = L"ms-gamebar://hotkey?ihkid=IHKID_GAME_GUIDE_OVERLAY&source=GbEm";
    }
    v8 = 0;
    goto LABEL_76;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE4E,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                           v6);
  }
  return result;
}
