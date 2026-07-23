/*
 * XREFs of PpmEventTraceProfileChange @ 0x140A3D1F0
 * Callers:
 *     PpmApplyProfile @ 0x140A3CDF8 (PpmApplyProfile.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceProfileChange(__int64 a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_CHANGE) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      UserData.Ptr = a1 + 8;
      UserData.Size = 1;
      v5 = a2 + 8;
      v6 = 1;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_CHANGE, 0LL, 2u, &UserData);
    }
  }
}
