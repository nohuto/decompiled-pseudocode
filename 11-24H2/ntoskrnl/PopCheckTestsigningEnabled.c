/*
 * XREFs of PopCheckTestsigningEnabled @ 0x140747620
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x140765E80 (PopDripsWatchdogTakeAction.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 */

bool PopCheckTestsigningEnabled()
{
  char v0; // bl
  ULONG v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 8LL;
  v2 = 0;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v3, 8u, &v2) >= 0 )
    return (v3 & 0x200000000LL) != 0;
  return v0;
}
