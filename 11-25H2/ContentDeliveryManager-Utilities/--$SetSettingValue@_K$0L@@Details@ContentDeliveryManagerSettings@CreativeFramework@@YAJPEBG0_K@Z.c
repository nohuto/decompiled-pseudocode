/*
 * XREFs of ??$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z @ 0x180048060
 * Callers:
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180057490 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?SetFileTimeSettingToCurrentTime@Details@SubscribedContentStore@CreativeFramework@@YAXPEBG0@Z @ 0x1800631DC (-SetFileTimeSettingToCurrentTime@Details@SubscribedContentStore@CreativeFramework@@YAXPEBG0@Z.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003A158 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned __int64,11>(
        const WCHAR *a1,
        wchar_t *lpValueName,
        __int64 a3)
{
  wchar_t *v3; // rbx
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 lpData; // [rsp+60h] [rbp+18h] BYREF

  lpData = a3;
  v3 = lpValueName;
  v5 = RegSetKeyValueW(HKEY_CURRENT_USER, a1, lpValueName, 0xBu, &lpData, 8u);
  if ( !v5 )
    return 0LL;
  if ( !v3 )
    v3 = word_1800E629C;
  return wil::details::in1diag3::Return_Win32Msg(
           retaddr,
           (void *)0x64,
           (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
           (const char *)v5,
           (unsigned __int64)"RegKey: %ws %ws",
           (const char *)a1,
           v3);
}
