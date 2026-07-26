/*
 * XREFs of ndisLoadNotifyRegister @ 0x14018BF40
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x140098C18 (-ndisReadRegistry@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 ndisLoadNotifyRegister()
{
  __int64 result; // rax
  int v1; // edx
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 3;
      return WPP_RECORDER_SF_d(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               v1,
               22,
               10,
               (struct _GUID *)&WPP_ec9af6f34582345b89e14a2d2ab551ae_Traceguids,
               result);
    }
  }
  return result;
}
