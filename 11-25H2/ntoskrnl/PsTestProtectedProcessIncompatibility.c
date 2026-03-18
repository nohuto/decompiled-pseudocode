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

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r10

  v3 = a2;
  if ( a2 == a3 )
    return 0;
  if ( !(_BYTE)a1 )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a3 + 1530);
  LOBYTE(a1) = *(_BYTE *)(v3 + 1530);
  if ( (unsigned __int8)RtlTestProtectedAccess(a1, a2) )
    return 0;
  if ( qword_140F04558 )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(v4) == 0;
  return 1;
}
