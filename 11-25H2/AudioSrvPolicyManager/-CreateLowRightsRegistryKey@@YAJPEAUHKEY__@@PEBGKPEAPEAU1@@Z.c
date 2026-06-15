/*
 * XREFs of ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180045024
 * Callers:
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x18000F2DC (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18000F7E0 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180044C90 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180010054 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800104EC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800127C0 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180012CD0 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800173A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B8B0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180049AFC (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateLowRightsRegistryKey(HKEY a1, const unsigned __int16 *a2, int a3, HKEY *a4)
{
  int v8; // eax
  unsigned int LastError; // ebx
  __int64 v10; // r8
  unsigned __int16 *v11; // r9
  LSTATUS v12; // eax
  signed int v13; // edi
  const char *v14; // r9
  int v15; // eax
  HKEY v16; // rax
  unsigned int v18; // [rsp+28h] [rbp-29h]
  HKEY hKey; // [rsp+58h] [rbp+7h] BYREF
  PSID Sid[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v21; // [rsp+70h] [rbp+1Fh]
  struct _SECURITY_ATTRIBUTES v22; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  memset(&v22, 0, sizeof(v22));
  v22.nLength = 24;
  v8 = DetermineLowRightsKeySecurityDescriptor(a1, &v22.lpSecurityDescriptor);
  LastError = v8;
  if ( v8 >= 0 )
  {
    Sid[1] = &v22;
    v21 = 1;
    hKey = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hKey,
      0LL);
    v12 = SafeRegCreateKeyEx(a1, a2, v10, v11, v18, a3 | ((a3 & 0x20006) != 0 ? 655360 : 0x20000), &v22, &hKey);
    v13 = v12;
    if ( v12 > 0 )
      v13 = (unsigned __int16)v12 | 0x80070000;
    if ( v13 >= 0 )
    {
      Sid[0] = 0LL;
      if ( ConvertStringSidToSidW(L"LW", Sid) )
      {
        if ( (int)SetRegistryKeyIntegrityLevel(hKey, Sid[0]) >= 0
          || (v15 = SetRegistryHandleIntegrityLevel(hKey, Sid[0]), LastError = v15, v15 >= 0) )
        {
          v16 = hKey;
          hKey = 0LL;
          *a4 = v16;
          LocalFree(Sid[0]);
          LastError = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)(unsigned int)v15);
          LocalFree(Sid[0]);
        }
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x9C,
                      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                      v14);
      }
    }
    else
    {
      LastError = -2147024891;
      if ( v13 != -2147024891 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x98,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v13);
        LastError = v13;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    operator delete(v22.lpSecurityDescriptor);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v8);
  }
  return LastError;
}
