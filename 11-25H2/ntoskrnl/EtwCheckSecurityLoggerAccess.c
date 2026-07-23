/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1408BDEFC
 * Callers:
 *     EtwpQueryTrace @ 0x140895150 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x140898DE4 (EtwpCheckNotificationAccess.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1409BC0CC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(PS_PROTECTION *a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(a1[1530], (PS_PROTECTION)49) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
