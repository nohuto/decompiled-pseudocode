/*
 * XREFs of ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58
 * Callers:
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     NtUserSetKeyboardState @ 0x140144700 (NtUserSetKeyboardState.c)
 *     NtUserChangeDisplaySettings @ 0x14016B4D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x140171750 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140171AA0 (NtUserSystemParametersInfo.c)
 *     ?CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z @ 0x1401A5A40 (-CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z.c)
 *     NtUserEnableTouchPad @ 0x1401BA850 (NtUserEnableTouchPad.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1401F34CC (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1402031E4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14021ED84 (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     Feature_ID51538523__private_ReportDeviceUsage @ 0x1401A3C7C (Feature_ID51538523__private_ReportDeviceUsage.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3DE0 (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5E20 (-UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z.c)
 */

char __fastcall UIPrivilegeIsolation::CheckAccessEx(
        UIPrivilegeIsolation *this,
        const struct tagUIPI_INFO *a2,
        const struct tagUIPI_INFO *a3)
{
  char v3; // bp
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // ebx
  unsigned int v12; // edi
  unsigned int CurrentWin32kSessionId; // eax

  v3 = (char)a3;
  if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() && !LOBYTE(WPP_MAIN_CB.SectorSize) )
    return 1;
  Feature_ID51538523__private_ReportDeviceUsage();
  v6 = *((_DWORD *)a2 + 2);
  if ( !v6 || *((_DWORD *)this + 2) == v6 )
  {
    v7 = *(_DWORD *)this;
    v8 = *(_DWORD *)a2;
    if ( *(_DWORD *)this > *(_DWORD *)a2 )
      return 1;
    if ( v7 == v8 )
    {
      v9 = *((_DWORD *)this + 1);
      v10 = *((_DWORD *)a2 + 1);
      if ( v9 == v10 || v9 == -1 || v10 == -1 )
        return 1;
    }
    if ( v3 )
    {
      if ( v7 == v8 )
      {
        v11 = *((_DWORD *)a2 + 1);
        v12 = *((_DWORD *)this + 1);
        CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
        if ( (unsigned __int8)SeIsParentOfChildAppContainer(CurrentWin32kSessionId, v12, v11) )
          return 1;
      }
    }
  }
  InputTraceLogging::Win32k::UIPIFailure(this, a2, v3);
  return 0;
}
