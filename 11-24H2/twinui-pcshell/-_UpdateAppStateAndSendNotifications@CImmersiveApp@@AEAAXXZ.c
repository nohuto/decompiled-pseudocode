/*
 * XREFs of ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180068DEC
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180034EB0 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180067C14 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18006905C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800883DC (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x180302740 (-Ensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180303320 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x180305F50 (-Unensure@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18006903C (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18009C24C (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 */

void __fastcall CImmersiveApp::_UpdateAppStateAndSendNotifications(CImmersiveApp *this)
{
  int v2; // ecx
  __int64 v3; // r8
  bool IsApplicationWindowVisible; // al
  int v5; // edx
  int v6; // ecx
  char v7; // dl
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  v2 = *((_DWORD *)this + 142);
  v3 = *((_QWORD *)this + 57);
  if ( (v3 != 0) != (v2 & 1) )
  {
    if ( v3 )
    {
      *((_DWORD *)this + 142) = v2 | 1;
      CImmersiveApp::_ScheduleApplicationNotification(this, 1LL);
    }
    else
    {
      *((_DWORD *)this + 142) = v2 & 0xFFFFFFFE;
    }
  }
  IsApplicationWindowVisible = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp *)((char *)this + 288));
  if ( IsApplicationWindowVisible != ((v5 & 4) != 0) )
  {
    v8 = v5;
    v9 = v5 | 4;
    v10 = v8 & 0xFFFFFFFB;
    if ( !IsApplicationWindowVisible )
      v9 = v10;
    *((_DWORD *)this + 142) = v9;
    CImmersiveApp::_ScheduleApplicationNotification(this, !IsApplicationWindowVisible + 4);
  }
  v6 = *((_DWORD *)this + 142);
  v7 = *((_BYTE *)this + 588);
  if ( v7 != ((v6 & 8) != 0) )
  {
    if ( v7 )
      v11 = v6 | 8;
    else
      v11 = v6 & 0xFFFFFFF7;
    *((_DWORD *)this + 142) = v11;
  }
}
