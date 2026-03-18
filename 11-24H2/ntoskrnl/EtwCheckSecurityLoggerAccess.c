/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x14094A508
 * Callers:
 *     EtwpQueryTrace @ 0x1408347C0 (EtwpQueryTrace.c)
 *     EtwpCheckNotificationAccess @ 0x140838344 (EtwpCheckNotificationAccess.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1409E87F0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, __int64 a2)
{
  if ( !(_BYTE)a2 )
    return 0LL;
  LOBYTE(a1) = *(_BYTE *)(a1 + 1530);
  LOBYTE(a2) = 49;
  return (unsigned __int8)RtlTestProtectedAccess(a1, a2) == 0 ? 0xC0000022 : 0;
}
