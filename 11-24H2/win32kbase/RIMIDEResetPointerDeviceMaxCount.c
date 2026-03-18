/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1401E6C48
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1401BCE90 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14019AA40 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F19DC (RIMCmAllocPointerDeviceContacts.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  int v6; // eax

  v2 = 0;
  if ( a1[91] != 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 559);
  if ( !a1[194] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 560);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 561);
  v5 = a2 + 1;
  if ( a1[6] != 7 )
    v5 = a2;
  RIMCmFreePointerDeviceContacts((__int64)a1);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) >= 0 )
  {
    if ( Win32AllocPoolZInitImpl(256LL, 8LL * v5, 0x78707352u) )
    {
      a1[194] = v5;
      v6 = 0;
      goto LABEL_14;
    }
    RIMCmFreePointerDeviceContacts((__int64)a1);
  }
  v6 = 1;
LABEL_14:
  LOBYTE(v2) = v6 == 0;
  return v2;
}
