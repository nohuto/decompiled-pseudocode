/*
 * XREFs of ?IsFullscreenCXHRunning@@YA_NXZ @ 0x18017E878
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803CC8B4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046583C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool IsFullscreenCXHRunning(void)
{
  bool v0; // bl
  LSTATUS v1; // eax
  bool v2; // sf
  bool v4; // zf
  unsigned int pvData; // [rsp+60h] [rbp+18h] BYREF
  DWORD pdwType; // [rsp+68h] [rbp+20h] BYREF
  DWORD pcbData; // [rsp+70h] [rbp+28h] BYREF
  HKEY hkey; // [rsp+78h] [rbp+30h] BYREF

  v0 = 0;
  hkey = 0LL;
  v1 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\CloudExperienceHost",
         0,
         0x20019u,
         &hkey);
  v2 = v1 < 0;
  if ( v1 > 0 )
    v2 = 1;
  if ( !v2 )
  {
    pdwType = 0;
    pcbData = 4;
    if ( RegGetValueW(hkey, L"Fullscreen", L"FullscreenCXHRunning", 0x10000012u, &pdwType, &pvData, &pcbData) )
    {
LABEL_5:
      RegCloseKey(hkey);
      return v0;
    }
    if ( pdwType == 4 )
    {
      v4 = pvData == 1;
      if ( pvData > 1 )
        goto LABEL_5;
    }
    else
    {
      if ( pcbData != 4 || (unsigned __int16)(pvData - 48) > 1u )
        goto LABEL_5;
      v4 = (_WORD)pvData == 49;
    }
    v0 = v4;
    goto LABEL_5;
  }
  return v0;
}
