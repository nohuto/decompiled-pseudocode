/*
 * XREFs of ShouldEnableInputVirtualization @ 0x1C00837F0
 * Callers:
 *     InputInitialize @ 0x1C00814D4 (InputInitialize.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C004FEC0 (RIMIsRunningOnDesktop.c)
 *     RIMRegQueryDWord @ 0x1C006DA64 (RIMRegQueryDWord.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     HviGetHypervisorFeatures @ 0x1C02358D4 (HviGetHypervisorFeatures.c)
 */

char __fastcall ShouldEnableInputVirtualization(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  if ( RIMIsRunningOnDesktop(a1, a2, a3, a4) )
  {
    if ( *(_DWORD *)SGDGetUserSessionState(v5, v4, v6, v7) == 1 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
      v9 = 0;
      RIMRegQueryDWord((__int64)&DestinationString, L"IsVailContainer", 0, &v9);
      if ( (v9 & 0x1F) != 0 )
      {
        byte_1C02908A6 = v9 & 1;
        byte_1C02908A5 = (v9 & 2) != 0;
        byte_1C02908A8 = (v9 & 4) != 0;
        byte_1C02908A7 = (v9 & 8) != 0;
        byte_1C02908A4 = (v9 & 0x10) != 0;
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
