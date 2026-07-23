/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1409BC040
 * Callers:
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     DbgkCopyProcessDebugPort @ 0x1408F4068 (DbgkCopyProcessDebugPort.c)
 *     NtRemoveProcessDebug @ 0x1409BA890 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409BB6C0 (NtDebugActiveProcess.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x140A689A0 (DbgkOpenProcessDebugPort.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlTestProtectedAccess @ 0x1409BC0CC (RtlTestProtectedAccess.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(char a1, PS_PROTECTION *a2, PS_PROTECTION *a3)
{
  __int64 v3; // r10

  if ( a2 == a3 || !a1 || RtlTestProtectedAccess(a2[1530], a3[1530]) )
    return 0;
  if ( qword_140F04558 )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(v3) == 0;
  return 1;
}
