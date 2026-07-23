/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1404CB5C4
 * Callers:
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 *     NtSetDefaultLocale @ 0x140A92630 (NtSetDefaultLocale.c)
 * Callees:
 *     GetGlobalizationUserModelType @ 0x14064EC24 (GetGlobalizationUserModelType.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14064EC64 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14064EF04 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlOpenCurrentUser @ 0x140772E10 (RtlOpenCurrentUser.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(int a1, __int64 a2, HANDLE *a3)
{
  int GlobalizationUserModelType; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    return -1073741811;
  GlobalizationUserModelType = GetGlobalizationUserModelType();
  if ( GlobalizationUserModelType == 1 )
    return RtlOpenCurrentUser(8u, a3);
  v7 = (unsigned int)(GlobalizationUserModelType - 2);
  if ( GlobalizationUserModelType == 2 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v7, a3);
  if ( GlobalizationUserModelType != 3 )
    return -1073741595;
  v8 = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v7, v6, a3, &v8);
}
