/*
 * XREFs of ndisLoadNotifyRegister @ 0x140196F60
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1400A2340 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 ndisLoadNotifyRegister()
{
  __int64 result; // rax
  char v1[4]; // [rsp+28h] [rbp-60h]
  _QWORD v2[2]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v3[3]; // [rsp+40h] [rbp-48h] BYREF
  int v4; // [rsp+70h] [rbp-18h]
  wchar_t v5; // [rsp+74h] [rbp-14h]

  v4 = *(_DWORD *)L"re";
  v5 = aRegistryMachin_6[26];
  v3[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v2[0] = 3538996LL;
  v2[1] = v3;
  v3[1] = *(_OWORD *)L"y\\Machine\\Software";
  v3[2] = *(_OWORD *)L"e\\Software";
  result = CmRegisterMachineHiveLoadedNotification(ndisHiveLoadCallback, 0LL, v2, &ndisHiveCallbackRegistrationHandle);
  if ( (_DWORD)result )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v1 = result;
      return WPP_RECORDER_SF_d(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               3u,
               0x16u,
               0xAu,
               (struct _GUID *)&WPP_29bf8700c18b3578cfb21a15235310cd_Traceguids,
               *(_DWORD *)v1);
    }
  }
  return result;
}
