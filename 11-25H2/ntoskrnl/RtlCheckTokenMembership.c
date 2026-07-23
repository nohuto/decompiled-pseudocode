/*
 * XREFs of RtlCheckTokenMembership @ 0x140472D90
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14079A0A0 (EtwpUserInAdminOrLogUsersGroup.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 *     ExpCheckIRTimerAccess @ 0x140A1671C (ExpCheckIRTimerAccess.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopIsRunningAsLocalSystem @ 0x140A1C494 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x140AA56EC (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x140ABE740 (PopNetUpdateStandbyRequest.c)
 *     NtFilterBootOption @ 0x140ACE260 (NtFilterBootOption.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
