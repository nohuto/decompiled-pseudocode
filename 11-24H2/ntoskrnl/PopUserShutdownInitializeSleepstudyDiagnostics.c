/*
 * XREFs of PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C30C88
 * Callers:
 *     PopUserShutdownScenarioInitialize @ 0x140C30DD0 (PopUserShutdownScenarioInitialize.c)
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403D1F30 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A192D0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperCreateLibrary @ 0x140A9B6C0 (SleepstudyHelperCreateLibrary.c)
 */

__int64 PopUserShutdownInitializeSleepstudyDiagnostics()
{
  __int64 result; // rax
  unsigned int v1; // edi
  PKSPIN_LOCK **v2; // rsi
  __int64 *v3; // rbx
  __int128 v4; // [rsp+38h] [rbp-19h] BYREF
  __int64 *v5; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+Fh] BYREF
  UNICODE_STRING v8; // [rsp+70h] [rbp+1Fh] BYREF
  _OWORD v9[2]; // [rsp+80h] [rbp+2Fh] BYREF

  v5 = 0LL;
  result = SleepstudyHelperCreateLibrary(1347639124, &PopUserShutdownLibraryHandle);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v4 = 0x5AADDAADDLL;
    v9[0] = GUID_USER_SHUTDOWN_PO_BLOCKER;
    *((_QWORD *)&v4 + 1) = 120LL;
    RtlInitUnicodeString(&DestinationString, L"PO Burst");
    v6[0] = &PopUserShutdownPoBlockerHandle;
    v9[1] = GUID_USER_SHUTDOWN_WINLOGON_BLOCKER;
    RtlInitUnicodeString(&v8, L"Winlogon");
    v1 = 0;
    v6[1] = &PopUserShutdownWinlogonBlockerHandle;
    v2 = (PKSPIN_LOCK **)v6;
    do
    {
      result = SleepstudyHelperCreateBlockerFromGuid(
                 PopUserShutdownLibraryHandle,
                 &v4,
                 &v9[v1],
                 (__int64)(&DestinationString + v1),
                 4u,
                 (__int64 *)&v5);
      v3 = v5;
      if ( (int)result < 0 )
        break;
      result = SleepstudyHelperBuildBlocker((int *)v5, *v2);
      if ( (int)result < 0 )
        break;
      v3 = 0LL;
      ++v1;
      ++v2;
      v5 = 0LL;
    }
    while ( v1 < 2 );
    if ( v3 )
      return SleepstudyHelperDestroyBlockerBuilder(v3);
  }
  return result;
}
