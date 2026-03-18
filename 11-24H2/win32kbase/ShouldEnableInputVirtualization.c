/*
 * XREFs of ShouldEnableInputVirtualization @ 0x14018A67C
 * Callers:
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     RIMRegQueryDWord @ 0x140136A40 (RIMRegQueryDWord.c)
 *     HviGetHypervisorFeatures @ 0x14023D0CC (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall ShouldEnableInputVirtualization(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  if ( RIMIsRunningOnDesktop(a1) )
  {
    if ( (unsigned int)W32GetCurrentWin32kSessionId() == 1 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
      v9 = 0;
      RIMRegQueryDWord((__int64)&DestinationString, L"IsVailContainer", 0, &v9);
      v3 = v9;
      if ( (v9 & 0x1F) != 0 )
      {
        v4 = v9 & 1;
        *(_BYTE *)(W32GetUserSessionState(v2) + 19416) = v4;
        *(_BYTE *)(W32GetUserSessionState(v5) + 19417) = (v3 & 2) != 0;
        *(_BYTE *)(W32GetUserSessionState(v6) + 19418) = (v3 & 4) != 0;
        *(_BYTE *)(W32GetUserSessionState(v7) + 19419) = (v3 & 8) != 0;
        *(_BYTE *)(W32GetUserSessionState(v8) + 19420) = (v3 & 0x10) != 0;
        return 1;
      }
    }
  }
  else
  {
    DestinationString = 0LL;
    HviGetHypervisorFeatures(&DestinationString);
    if ( (*(_QWORD *)&DestinationString.Length & 0x100000000000LL) != 0
      && (int)RtlIsApiSetImplemented("SchemaExt-Composable-Vail") >= 0 )
    {
      return 1;
    }
  }
  return 0;
}
