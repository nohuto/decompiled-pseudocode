/*
 * XREFs of ?SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A1C50
 * Callers:
 *     ?Stage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A1FD0 (-Stage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A498 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180056B0C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x18008F378 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  unsigned __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  int Data; // [rsp+60h] [rbp-A0h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SubKey[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR v20[264]; // [rsp+280h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B8h] [rbp+3B8h]

  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v2 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v3 = StringCchPrintfW(
         SubKey,
         260LL,
         L"%s\\%s",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
         *((_QWORD *)this + 2));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  hKey = 0LL;
  v6 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
  if ( v6 )
  {
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           107LL,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v6);
  }
  else
  {
    v8 = StringCchPrintfW(v20, 260LL, L"%llu", v2);
    v9 = v8;
    if ( v8 >= 0 )
    {
      phkResult = 0LL;
      v10 = RegCreateKeyExW(hKey, v20, 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
      if ( v10 )
      {
        v11 = 112LL;
      }
      else
      {
        v12 = (_QWORD *)((char *)this + 24);
        if ( *((_QWORD *)this + 6) >= 8uLL )
          v12 = (_QWORD *)*v12;
        v10 = RegSetKeyValueW(phkResult, 0LL, L"contentId", 1u, v12, 2 * *((_DWORD *)this + 10));
        if ( v10 )
        {
          v11 = 114LL;
        }
        else
        {
          if ( !*((_QWORD *)this + 9) )
            goto LABEL_33;
          v13 = (_QWORD *)((char *)this + 56);
          if ( *((_QWORD *)this + 10) >= 8uLL )
            v13 = (_QWORD *)*v13;
          v10 = RegSetKeyValueW(phkResult, 0LL, L"landscapeImage", 1u, v13, 2 * *((_DWORD *)this + 18));
          if ( v10 )
          {
            v11 = 117LL;
          }
          else
          {
LABEL_33:
            if ( !*((_QWORD *)this + 13) )
              goto LABEL_34;
            v14 = (_QWORD *)((char *)this + 88);
            if ( *((_QWORD *)this + 14) >= 8uLL )
              v14 = (_QWORD *)*v14;
            v10 = RegSetKeyValueW(phkResult, 0LL, L"portraitImage", 1u, v14, 2 * *((_DWORD *)this + 26));
            if ( v10 )
            {
              v11 = 121LL;
            }
            else
            {
LABEL_34:
              if ( *((_DWORD *)this + 30)
                && (v10 = RegSetKeyValueW(phkResult, 0LL, L"showImageOnSecureLock", 4u, (char *)this + 120, 4u)) != 0 )
              {
                v11 = 126LL;
              }
              else
              {
                Data = 1;
                v10 = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, &Data, 4u);
                if ( !v10 )
                {
                  *((_BYTE *)this + 124) = 1;
                  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
                  v7 = 0;
                  goto LABEL_30;
                }
                v11 = 131LL;
              }
            }
          }
        }
      }
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             v11,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
             (const char *)v10);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)(unsigned int)v8);
      v7 = v9;
    }
  }
LABEL_30:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v7;
}
