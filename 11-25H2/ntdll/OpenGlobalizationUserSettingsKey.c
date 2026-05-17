/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18008C0B0
 * Callers:
 *     RtlpGetLocaleDataKey @ 0x180115CC0 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180118410 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpSetInstallLanguage @ 0x180141830 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180141CD0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     GetGlobalizationUserModelType @ 0x18008C6B8 (GetGlobalizationUserModelType.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(__int64 a1, __int64 a2, HANDLE *a3)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = a1;
  if ( !a3 )
    return 3221225485LL;
  v5 = GetGlobalizationUserModelType(a1, a2) - 1;
  if ( !v5 )
    return RtlOpenCurrentUser(v4, (__int64)a3);
  v7 = v5 - 1;
  if ( !v7 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v4, a3);
  if ( v7 != 1 )
    return 3221225701LL;
  LODWORD(v9) = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v4, v6, (__int64)a3, &v9);
}
