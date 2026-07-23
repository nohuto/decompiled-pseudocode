/*
 * XREFs of PpmEventTraceProfileEnable @ 0x140A9FF58
 * Callers:
 *     PpmEnableProfile @ 0x1407634F0 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AC8F20 (PpmDisableProfile.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceProfileEnable(char a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1;
  v2 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_PROCESSOR_PROFILE_ENABLED;
  if ( !a2 )
    v3 = &PPM_ETW_PROCESSOR_PROFILE_DISABLED;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 1;
      LOBYTE(v2) = EtwWrite(PpmEtwHandle, v3, 0LL, 1u, &UserData);
    }
  }
  return (char)v2;
}
