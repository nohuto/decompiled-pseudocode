/*
 * XREFs of ?IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@@YA_NPEA_N@Z @ 0x1800535A4
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005245C (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800AF114 (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetSettingValue@K$0BA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18004611C (--$GetSettingValue@K$0BA@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY_.c)
 */

bool __fastcall CreativeFramework::ContentDeliveryManagerDebugSettings::IsContentDeliveryAllowedOverrideInEffect(
        CreativeFramework::ContentDeliveryManagerDebugSettings *this,
        bool *a2,
        __int64 a3,
        __int64 a4)
{
  int Setting; // eax
  bool result; // al
  DWORD v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  *(_BYTE *)this = 0;
  Setting = CreativeFramework::ContentDeliveryManagerSettings::Details::GetSettingValue<unsigned long,16>(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Debug",
              L"ContentDeliveryAllowedOverride",
              a4,
              &v9,
              v7);
  if ( Setting < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)(unsigned int)Setting);
    return 0;
  }
  if ( !v9 )
    return 0;
  result = 1;
  *(_BYTE *)this = v9 == 1;
  return result;
}
