/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1800149A0
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180099E20 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpGetLocaleDataKey @ 0x18009A4D4 (RtlpGetLocaleDataKey.c)
 *     RtlpSetInstallLanguage @ 0x18013E330 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x18013E7D0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     GetGlobalizationUserModelType @ 0x180014FA8 (GetGlobalizationUserModelType.c)
 *     RtlOpenCurrentUser @ 0x180017270 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4 (OpenGlobalizationUserSettingsKey_ForMua.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(__int64 DesiredAccess, __int64 a2, HANDLE *a3)
{
  ACCESS_MASK v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v4 = DesiredAccess;
  if ( !a3 )
    return -1073741811;
  v5 = GetGlobalizationUserModelType(DesiredAccess, a2) - 1;
  if ( !v5 )
    return RtlOpenCurrentUser(v4, a3);
  v7 = v5 - 1;
  if ( !v7 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v4, a3);
  if ( v7 != 1 )
    return -1073741595;
  LODWORD(v9) = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v4, v6, a3, &v9);
}
