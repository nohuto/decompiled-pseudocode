/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1409E85CC
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1408A781C (DbgkCopyProcessDebugPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     NtRemoveProcessDebug @ 0x1409E80B0 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409E8220 (NtDebugActiveProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x140A6B414 (DbgkOpenProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlTestProtectedAccess @ 0x1409E87F0 (RtlTestProtectedAccess.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10

  v3 = a2;
  if ( a2 == a3 )
    return 0;
  if ( !(_BYTE)a1 )
    return 0;
  LOBYTE(a2) = *(_BYTE *)(a3 + 1530);
  LOBYTE(a1) = *(_BYTE *)(v3 + 1530);
  if ( (unsigned __int8)RtlTestProtectedAccess(a1, a2) )
    return 0;
  if ( qword_140F04938 )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(v6, v5, v4, v5) == 0;
  return 1;
}
