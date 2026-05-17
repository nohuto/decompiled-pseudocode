/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x180034720
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800D2EC0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpGetLocaleDataKey @ 0x1800D313C (RtlpGetLocaleDataKey.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1801405E0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     GetGlobalizationUserModelType @ 0x180034D28 (GetGlobalizationUserModelType.c)
 *     RtlOpenCurrentUser @ 0x180036FF0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(unsigned int a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a3 )
    return 3221225485LL;
  v5 = GetGlobalizationUserModelType() - 1;
  if ( !v5 )
    return RtlOpenCurrentUser(a1, a3);
  v7 = v5 - 1;
  if ( !v7 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  if ( v7 != 1 )
    return 3221225701LL;
  LODWORD(v9) = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(a1, v6, a3, &v9);
}
