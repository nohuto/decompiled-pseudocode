/*
 * XREFs of ?SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEBG0@Z @ 0x18003B1F8
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002BA80 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 *     ?put_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x18003F890 (-put_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CreativeFramework::MobilityExperienceSettings::SetMobilityValue(
        CreativeFramework::MobilityExperienceSettings *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  LSTATUS v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BOOL Data; // [rsp+40h] [rbp+8h] BYREF

  Data = (_BYTE)this != 0;
  v4 = RegSetKeyValueW(HKEY_CURRENT_USER, a2, a3, 4u, &Data, 4u);
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
