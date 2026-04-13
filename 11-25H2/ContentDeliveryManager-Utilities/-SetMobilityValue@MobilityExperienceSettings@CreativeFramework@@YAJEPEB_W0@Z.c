/*
 * XREFs of ?SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEB_W0@Z @ 0x1800A7AC4
 * Callers:
 *     ?put_HasPreviouslyPaired@MobilityExperienceManager@@UEAAJE@Z @ 0x1800A8040 (-put_HasPreviouslyPaired@MobilityExperienceManager@@UEAAJE@Z.c)
 *     ?put_OptedIn@MobilityExperienceManager@@UEAAJE@Z @ 0x1800A8090 (-put_OptedIn@MobilityExperienceManager@@UEAAJE@Z.c)
 *     ?put_PhoneLinkEnabled@MobilityExperienceManager@@UEAAJE@Z @ 0x1800A8140 (-put_PhoneLinkEnabled@MobilityExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CreativeFramework::MobilityExperienceSettings::SetMobilityValue(
        CreativeFramework::MobilityExperienceSettings *this,
        __int64 a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  LSTATUS v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BOOL Data; // [rsp+40h] [rbp+8h] BYREF

  Data = (_BYTE)this != 0;
  v4 = RegSetKeyValueW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility", a3, 4u, &Data, 4u);
  v5 = v4;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0x80070000;
  if ( (v5 & 0x80000000) == 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E,
    (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
    (const char *)v5);
  return v5;
}
