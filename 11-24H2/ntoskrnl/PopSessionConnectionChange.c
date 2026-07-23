/*
 * XREFs of PopSessionConnectionChange @ 0x140AC8CFC
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1FC (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PopSessionDisconnected @ 0x1409A0C38 (PopSessionDisconnected.c)
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A24C58 (PopAcquireAdaptiveLock.c)
 *     PopSessionConnected @ 0x140AC8C44 (PopSessionConnected.c)
 */

void __fastcall PopSessionConnectionChange(unsigned int a1, char *a2, __int64 a3)
{
  char v6; // di
  char v7; // bl
  const char *v8; // rax
  const char *v9; // r8

  Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
  v6 = *a2;
  v7 = a2[1];
  PopAcquireAdaptiveLock(1);
  v8 = "Connected";
  if ( !v6 )
    v8 = "Disconnected";
  v9 = "Console";
  if ( !v7 )
    v9 = "Remote";
  PopPrintEx(3, (int)"PopAdaptive:>>>>>%s session %u is %s\n", v9, a1, v8);
  if ( v6 )
    PopSessionConnected(a1, (__int64)a2, a3);
  else
    PopSessionDisconnected(a1, a3);
  PopReleaseAdaptiveLock();
}
