/*
 * XREFs of ?IsInputAppEnabled@KeyboardHosting@@YA_NXZ @ 0x180483E04
 * Callers:
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180467E10 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180467E10.c)
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_const_&_ @ 0x18046841C (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x180473474 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1804869C0 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CECD4 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 */

bool __fastcall KeyboardHosting::IsInputAppEnabled(KeyboardHosting *this)
{
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_1808CBCD9 )
  {
    pvData = 0;
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
           L"DisableNewKeyboardExperience",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      goto LABEL_5;
    }
    if ( pvData == 1 )
    {
LABEL_7:
      LOWORD(pvData) = 256;
LABEL_9:
      unk_1808CBCD8 = pvData;
      return *(_BYTE *)std::optional<bool>::value((__int64)&unk_1808CBCD8);
    }
    if ( pvData )
    {
LABEL_5:
      pcbData = 4;
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
              L"DisableNewKeyboardExperience",
              0x10u,
              0LL,
              &pvData,
              &pcbData)
        && pvData == 1 )
      {
        goto LABEL_7;
      }
    }
    LOWORD(pvData) = 257;
    goto LABEL_9;
  }
  return *(_BYTE *)std::optional<bool>::value((__int64)&unk_1808CBCD8);
}
