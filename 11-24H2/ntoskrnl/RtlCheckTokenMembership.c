/*
 * XREFs of RtlCheckTokenMembership @ 0x1403B5750
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407A95B0 (EtwpUserInAdminOrLogUsersGroup.c)
 *     PopValidateContextMembership @ 0x1409A0A00 (PopValidateContextMembership.c)
 *     ExpCheckIRTimerAccess @ 0x140A16AEC (ExpCheckIRTimerAccess.c)
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 *     PopIsRunningAsLocalSystem @ 0x140A6A934 (PopIsRunningAsLocalSystem.c)
 *     PopNetUpdateStandbyRequest @ 0x140ABD818 (PopNetUpdateStandbyRequest.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     NtFilterBootOption @ 0x140AD74D0 (NtFilterBootOption.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
