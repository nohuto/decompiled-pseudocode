/*
 * XREFs of ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x18010CD74
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18010ABCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x18010D034 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010D810 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameMRU@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?DestroyPrivateObjectSecurity@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180235918 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-DestroyPrivateObjectSecurity@details@wi.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall IsGameManager::EnsureGameDVRFolderAccess(IsGameManager *this, __int64 a2)
{
  int KnownFolderSubFolder; // eax
  signed int v3; // ebx
  signed int LastError; // eax
  __int64 v6; // rdx
  HSTRING v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  signed int v9; // eax
  signed int v10; // edi
  signed int v11; // eax
  struct _ACL *v12; // rdi
  WCHAR *v13; // rax
  DWORD v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // [rsp+20h] [rbp-40h]
  PACL pDacl; // [rsp+40h] [rbp-20h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  PSECURITY_DESCRIPTOR bDaclDefaulted; // [rsp+80h] [rbp+20h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF
  HSTRING string; // [rsp+98h] [rbp+38h] BYREF

  bDaclDefaulted = this;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameMRU>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GameMRU>::GetImpl'::`2'::impl,
    a2);
  string = 0LL;
  KnownFolderSubFolder = GetKnownFolderSubFolder(
                           &FOLDERID_LocalAppData,
                           L"Microsoft\\GameDVR",
                           0LL,
                           (struct Windows::Internal::String *)&string);
  v3 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x264,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder);
    if ( string )
      WindowsDeleteString(string);
    return (unsigned int)v3;
  }
  *(&SecurityAttributes.nLength + 1) = 0;
  *(&SecurityAttributes.bInheritHandle + 1) = 0;
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;CIOI;0x111FFFFF;;;CO)(A;CIOI;0x111FFFFF;;;SY)(A;CIOI;0x111FFFFF;;;BA)(A;CIOI;GRGXGW;;;S-1-15-3-1024-44950"
           "0426-4112254358-3456904286-1727260714-2501084857-171973213-3131658879-2198086578)(A;CIOI;GRGXGW;;;S-1-5-32-44"
           "9500426-4112254358-3456904286-1727260714-2501084857-171973213-3131658879-2198086578)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
      goto LABEL_26;
    v6 = 619LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v3);
LABEL_26:
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    Windows::Internal::String::~String(&string);
    return (unsigned int)v3;
  }
  v7 = string;
  SecurityAttributes.bInheritHandle = 0;
  SecurityAttributes.nLength = 24;
  SecurityAttributes.lpSecurityDescriptor = SecurityDescriptor;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( CreateDirectoryW(StringRawBuffer, &SecurityAttributes) )
    goto LABEL_33;
  v9 = GetLastError();
  v10 = v9;
  if ( v9 != 80 && v9 != 183 )
  {
    if ( v9 > 0 )
      v10 = (unsigned __int16)v9 | 0x80070000;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28E,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v10);
    v3 = v10;
    goto LABEL_26;
  }
  pDacl = 0LL;
  bDaclPresent = 0;
  LODWORD(bDaclDefaulted) = 0;
  if ( !GetSecurityDescriptorDacl(SecurityDescriptor, &bDaclPresent, &pDacl, (LPBOOL)&bDaclDefaulted) )
  {
    v11 = GetLastError();
    v3 = v11;
    if ( v11 > 0 )
      v3 = (unsigned __int16)v11 | 0x80070000;
    if ( v3 >= 0 )
      goto LABEL_26;
    v6 = 636LL;
    goto LABEL_25;
  }
  v12 = pDacl;
  if ( !pDacl )
  {
    v3 = -2147024891;
    v6 = 643LL;
    goto LABEL_25;
  }
  v13 = (WCHAR *)WindowsGetStringRawBuffer(v7, 0LL);
  v14 = SetNamedSecurityInfoW(v13, SE_FILE_OBJECT, 4u, 0LL, 0LL, v12, 0LL);
  if ( !v14 )
  {
LABEL_33:
    if ( SecurityDescriptor )
    {
      bDaclDefaulted = SecurityDescriptor;
      DestroyPrivateObjectSecurity(&bDaclDefaulted);
    }
    if ( v7 )
      WindowsDeleteString(v7);
    return 0LL;
  }
  else
  {
    v15 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x28A,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)v14,
            v16);
    if ( SecurityDescriptor )
    {
      string = (HSTRING)SecurityDescriptor;
      DestroyPrivateObjectSecurity((PSECURITY_DESCRIPTOR *)&string);
    }
    if ( v7 )
      WindowsDeleteString(v7);
    return v15;
  }
}
