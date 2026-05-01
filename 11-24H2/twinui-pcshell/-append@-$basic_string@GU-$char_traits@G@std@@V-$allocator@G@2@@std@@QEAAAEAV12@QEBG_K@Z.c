/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800472A0
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180056F50 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800BC950 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x18010E724 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018DC14 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x18018DEA4 (-TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801BC1EC (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BC1EC.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801BF8D0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801EEFA0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1802048CC (--$get_runtime_activation_factory_impl@$00@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUgu.c)
 *     ?BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180251AD4 (-BuildInputAppStartupPreferences@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x18029884C (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     ??$append@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x180298AAC (--$append@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802B5D44 (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180338AB8 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 *     _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x180339260 (_anonymous_namespace_--SetConfigurationValue_unsigned_long_.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180359D10 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3668 (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804AA5D8 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x1806359B0 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, void *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 size_of; // rax
  char *v13; // rax
  size_t v14; // rsi
  size_t v15; // r8
  char *v16; // r15
  char *v17; // r14
  __int64 v19; // rbx
  __int64 v20; // r15
  _QWORD *v21; // rbx

  v3 = Src[3];
  v5 = Src[2];
  if ( a3 <= v3 - v5 )
  {
    v20 = v5 + a3;
    v21 = Src;
    Src[2] = v5 + a3;
    if ( v3 > 7 )
      v21 = (_QWORD *)*Src;
    memmove_0((char *)v21 + 2 * v5, a2, 2 * a3);
    *((_WORD *)v21 + v20) = 0;
  }
  else
  {
    v8 = 0x7FFFFFFFFFFFFFFELL;
    if ( 0x7FFFFFFFFFFFFFFELL - v5 < a3 )
      std::_Xlen_string();
    v9 = v5 + a3;
    v10 = (v5 + a3) | 7;
    if ( v10 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v11 = v3 >> 1;
      if ( v3 <= 0x7FFFFFFFFFFFFFFELL - (v3 >> 1) )
      {
        v8 = v11 + v3;
        if ( v10 >= v11 + v3 )
          v8 = (v5 + a3) | 7;
      }
    }
    size_of = std::_Get_size_of_n<2>(v8 + 1);
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v14 = 2 * a3;
    Src[2] = v9;
    Src[3] = v8;
    v15 = 2 * v5;
    v16 = v13;
    v17 = &v13[2 * v5];
    if ( v3 > 7 )
    {
      v19 = *Src;
      memcpy_0(v13, (const void *)*Src, v15);
      memcpy_0(v17, a2, v14);
      *(_WORD *)&v16[2 * v9] = 0;
      std::_Deallocate<16,0>(v19, 2 * v3 + 2);
    }
    else
    {
      memcpy_0(v13, Src, v15);
      memcpy_0(v17, a2, v14);
      *(_WORD *)&v16[2 * v9] = 0;
    }
    *Src = v16;
  }
  return Src;
}
