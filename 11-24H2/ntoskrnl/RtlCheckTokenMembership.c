/*
 * XREFs of RtlCheckTokenMembership @ 0x140471820
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407A9470 (EtwpUserInAdminOrLogUsersGroup.c)
 *     PopValidateContextMembership @ 0x1409BA3B0 (PopValidateContextMembership.c)
 *     ExpCheckIRTimerAccess @ 0x140A20CBC (ExpCheckIRTimerAccess.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     PopIsRunningAsLocalSystem @ 0x140A71554 (PopIsRunningAsLocalSystem.c)
 *     PopNetUpdateStandbyRequest @ 0x140AC2530 (PopNetUpdateStandbyRequest.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     NtFilterBootOption @ 0x140AD8E50 (NtFilterBootOption.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
