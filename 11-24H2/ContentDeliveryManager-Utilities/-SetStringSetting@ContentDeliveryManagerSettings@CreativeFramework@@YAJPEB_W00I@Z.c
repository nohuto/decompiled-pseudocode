/*
 * XREFs of ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00I@Z @ 0x1800AF088
 * Callers:
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800AD7D0 (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800AEFB0 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003A298 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
        const WCHAR *this,
        LPCWSTR lpValueName,
        LPCVOID lpData,
        const wchar_t *a4)
{
  unsigned int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = RegSetKeyValueW(HKEY_CURRENT_USER, this, lpValueName, 1u, lpData, 2 * (_DWORD)a4 + 2);
  if ( v6 )
    return wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0xCC,
             (__int64)"OneCoreUap\\Internal\\Shell\\inc\\ContentDeliveryManagerSettings.h",
             (const char *)v6,
             (unsigned __int64)"RegKey: %ws %ws",
             (const char *)this,
             lpValueName);
  else
    return 0LL;
}
