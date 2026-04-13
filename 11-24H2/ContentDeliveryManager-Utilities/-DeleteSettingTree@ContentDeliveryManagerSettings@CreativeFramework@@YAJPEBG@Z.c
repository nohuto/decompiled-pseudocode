/*
 * XREFs of ?DeleteSettingTree@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E9C8
 * Callers:
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18003C8A0 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A238 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::DeleteSettingTree(
        LPCWSTR lpSubKey,
        const unsigned __int16 *a2)
{
  LSTATUS v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = RegDeleteTreeW(HKEY_CURRENT_USER, lpSubKey);
  v4 = v3;
  if ( v3 > 0 )
    v4 = (unsigned __int16)v3 | 0x80070000;
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -2147024894 )
    return 0LL;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x124,
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
    (const char *)v4,
    (int)"RegKey: %ws",
    (const char *)lpSubKey);
  return v4;
}
