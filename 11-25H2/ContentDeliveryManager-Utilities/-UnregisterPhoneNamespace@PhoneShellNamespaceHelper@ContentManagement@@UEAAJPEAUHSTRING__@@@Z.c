/*
 * XREFs of ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18003C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x18002E8D0 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E970 (-DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DeleteSettingTree@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E9F8 (-DeleteSettingTree@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033CB0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x1800353AC (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x180039384 (-RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::UnregisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2)
{
  const unsigned __int16 *StringRawBuffer; // rax
  ContentManagement::PhoneShellNamespaceHelper *v4; // rcx
  const unsigned __int16 *v5; // rax
  const WCHAR *v6; // rcx
  PCWSTR v7; // rax
  int v8; // eax
  const unsigned __int16 *v9; // rdx
  unsigned int v10; // ebx
  PCWSTR v11; // rax
  int v12; // eax
  const unsigned __int16 *v13; // rdx
  const WCHAR *v14; // rax
  const unsigned __int16 *v15; // r8
  LPCWSTR lpSubKey[3]; // [rsp+20h] [rbp-30h] BYREF
  LPCWSTR v18[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v4, 16, StringRawBuffer);
  v5 = WindowsGetStringRawBuffer(a2, 0LL);
  ContentManagement::PhoneShellNamespaceHelper::RemovePhoneLink(v6, v5);
  memset(v18, 0, sizeof(v18));
  v7 = WindowsGetStringRawBuffer(a2, 0LL);
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)v18,
         L"%ws\\%ws",
         L"Software\\Classes\\CLSID",
         v7);
  v10 = v8;
  if ( v8 >= 0 )
  {
    CreativeFramework::ContentDeliveryManagerSettings::DeleteSettingTree(v18[0], v9);
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v11 = WindowsGetStringRawBuffer(a2, 0LL);
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v11);
    v10 = v12;
    if ( v12 >= 0 )
    {
      CreativeFramework::ContentDeliveryManagerSettings::DeleteSettingKey(lpSubKey[0], v13);
      v14 = WindowsGetStringRawBuffer(a2, 0LL);
      CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
        v14,
        v15);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DF,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v12);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v18);
  return v10;
}
