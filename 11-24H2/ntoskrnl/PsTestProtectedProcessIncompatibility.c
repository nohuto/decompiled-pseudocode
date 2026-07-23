/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1409E358C
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1408FDA74 (DbgkCopyProcessDebugPort.c)
 *     NtRemoveProcessDebug @ 0x1409E3070 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409E31E0 (NtDebugActiveProcess.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     DbgkOpenProcessDebugPort @ 0x140A64974 (DbgkOpenProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlTestProtectedAccess @ 0x1409E37B0 (RtlTestProtectedAccess.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(char a1, PS_PROTECTION *a2, PS_PROTECTION *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10

  if ( a2 == a3 || !a1 || RtlTestProtectedAccess(a2[1530], a3[1530]) )
    return 0;
  if ( qword_140F04BD8 )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(v4, v3) == 0;
  return 1;
}
