/*
 * XREFs of KIsDeveloperModeEnabled @ 0x140A59C94
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x140A59C60 (ExQueryFastCacheDevLicense.c)
 * Callees:
 *     KIsUnlockSettingEnabled @ 0x140A59CE4 (KIsUnlockSettingEnabled.c)
 */

__int64 __fastcall KIsDeveloperModeEnabled(bool *a1)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v3[0] = 4456514LL;
  v4 = 0xFFFF;
  v3[1] = L"AllowDevelopmentWithoutDevLicense";
  result = KIsUnlockSettingEnabled(v3, &v4);
  if ( (int)result >= 0 )
    *a1 = v4 == 1;
  return result;
}
