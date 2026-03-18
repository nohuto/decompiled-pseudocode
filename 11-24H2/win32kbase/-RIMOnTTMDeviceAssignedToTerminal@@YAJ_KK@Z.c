/*
 * XREFs of ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1401F2A90
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ?SetDeviceTerminalId@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1401F2B44 (-SetDeviceTerminalId@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 */

__int64 __fastcall RIMOnTTMDeviceAssignedToTerminal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 320);
  InputTraceLogging::RIM::SetDeviceTerminalId((const struct RIMDEV *)a1, a2);
  RIMLockExclusive(v2 + 104);
  if ( *(_DWORD *)(a1 + 1300) != a2 )
    *(_DWORD *)(a1 + 1300) = a2;
  RIMUnlockExclusive(v2 + 104);
  return 0LL;
}
