/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1408EEA78
 * Callers:
 *     EtwpQueryTrace @ 0x1408360C0 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x14083638C (EtwpCheckNotificationAccess.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1409E37B0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(PS_PROTECTION *a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(a1[1530], (PS_PROTECTION)49) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
