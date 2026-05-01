/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18014B430
 * Callers:
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x18014B260 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180244770 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x18024C940 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046E408 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     GetColorFromColorString @ 0x18047138C (GetColorFromColorString.c)
 *     ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180586180 (-RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ.c)
 *     ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x1805D4234 (-IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Manage.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, _WORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int16 v7; // di
  char *v8; // rsi
  char *i; // r8
  char *v10; // rdx
  __int64 v11; // rax
  char *v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r10
  _WORD *j; // rdx

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(char **)a1;
  if ( v4 > v5 )
    return -1LL;
  v6 = v5 - v4;
  if ( a3 > v6 )
    return -1LL;
  if ( v4 )
  {
    v7 = *a2;
    v8 = &a1[2 * v6 + 2];
    for ( i = &a1[2 * a3]; ; i = v12 + 2 )
    {
      v10 = i;
      v11 = v8 - i;
      v12 = 0LL;
      v13 = v11 >> 1;
      if ( v13 )
      {
        while ( *(_WORD *)v10 != v7 )
        {
          if ( v13 == 1 )
            goto LABEL_12;
          --v13;
          v10 += 2;
        }
        v12 = v10;
      }
LABEL_12:
      if ( !v12 )
        break;
      v14 = v4;
      for ( j = a2; ; ++j )
      {
        if ( !v14 )
          return (v12 - a1) >> 1;
        if ( *(_WORD *)((char *)j + v12 - (char *)a2) != *j )
          break;
        --v14;
      }
    }
    return -1LL;
  }
  return a3;
}
