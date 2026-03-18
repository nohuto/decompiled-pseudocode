/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1404CB300
 * Callers:
 *     ExpSetPendingUILanguage @ 0x140A70D00 (ExpSetPendingUILanguage.c)
 *     NtSetDefaultLocale @ 0x140A968F0 (NtSetDefaultLocale.c)
 * Callees:
 *     GetGlobalizationUserModelType @ 0x14065ABAC (GetGlobalizationUserModelType.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065ABEC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14065AE8C (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlOpenCurrentUser @ 0x1407820C0 (RtlOpenCurrentUser.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(int a1, __int64 a2, HANDLE *a3)
{
  int GlobalizationUserModelType; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    return 3221225485LL;
  GlobalizationUserModelType = GetGlobalizationUserModelType();
  if ( GlobalizationUserModelType == 1 )
    return RtlOpenCurrentUser(8u, a3);
  v7 = (unsigned int)(GlobalizationUserModelType - 2);
  if ( GlobalizationUserModelType == 2 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v7, a3);
  if ( GlobalizationUserModelType != 3 )
    return 3221225701LL;
  v8 = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v7, v6, a3, &v8);
}
