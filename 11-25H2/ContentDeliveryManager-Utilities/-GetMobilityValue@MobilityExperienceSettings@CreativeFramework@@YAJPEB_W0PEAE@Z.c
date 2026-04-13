/*
 * XREFs of ?GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAE@Z @ 0x1800A78C8
 * Callers:
 *     ?get_HasPreviouslyPaired@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A7DB0 (-get_HasPreviouslyPaired@MobilityExperienceManager@@UEAAJPEAE@Z.c)
 *     ?get_OptedIn@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A7E00 (-get_OptedIn@MobilityExperienceManager@@UEAAJPEAE@Z.c)
 *     ?get_PhoneLinkEnabled@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A7F20 (-get_PhoneLinkEnabled@MobilityExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::MobilityExperienceSettings::GetMobilityValue(
        CreativeFramework::MobilityExperienceSettings *this,
        const wchar_t *a2,
        wchar_t *a3,
        unsigned __int8 *a4)
{
  LSTATUS ValueW; // eax
  bool v6; // sf
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+54h] [rbp+Ch]
  DWORD v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = HIDWORD(this);
  v8 = 0;
  *(_BYTE *)a3 = 0;
  v10 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             a2,
             0x20000010u,
             0LL,
             &v8,
             &v10);
  v6 = ValueW < 0;
  if ( ValueW > 0 )
    v6 = 1;
  if ( !v6 )
    *(_BYTE *)a3 = v8 != 0;
  return 0LL;
}
