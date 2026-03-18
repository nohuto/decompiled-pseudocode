/*
 * XREFs of BiDeleteEfiVariable @ 0x1409C13D0
 * Callers:
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x1406A91B0 (ZwQuerySystemEnvironmentValueEx.c)
 *     ZwSetSystemEnvironmentValueEx @ 0x1406A9B70 (ZwSetSystemEnvironmentValueEx.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteEfiVariable(PCWSTR SourceString)
{
  int v2; // ebx
  int SystemEnvironmentValue; // eax
  __int64 v5; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v7[4]; // [rsp+50h] [rbp-20h] BYREF

  v5 = 0LL;
  v7[0] = -1947934879;
  v7[1] = 299013066;
  v7[2] = -536867414;
  DestinationString = 0LL;
  v7[3] = -1943338088;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    SystemEnvironmentValue = ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v7);
    v2 = SystemEnvironmentValue;
    if ( SystemEnvironmentValue == -1073741789 )
    {
      v2 = ZwSetSystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v7);
      if ( v2 >= 0 )
      {
LABEL_4:
        BiReleasePrivilege((unsigned int *)&v5);
        return (unsigned int)v2;
      }
    }
    else if ( SystemEnvironmentValue == -1073741568 )
    {
      v2 = 0;
      goto LABEL_4;
    }
    BiLogMessage();
    goto LABEL_4;
  }
  return (unsigned int)v2;
}
