/*
 * XREFs of NtQueryInformationToken @ 0x1801620B0
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     EtwpWriteToPrivateBuffers @ 0x18003B480 (EtwpWriteToPrivateBuffers.c)
 *     RtlCheckTokenCapability @ 0x18003BE90 (RtlCheckTokenCapability.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1800B3330 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800C6760 (RtlpValidOwnerSubjectContext.c)
 *     RtlpValidLabelSubjectContext @ 0x1800C6DA4 (RtlpValidLabelSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C8C40 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C90B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlDefaultNpAcl @ 0x1800CD980 (RtlDefaultNpAcl.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1800CDDC0 (RtlGetAppContainerNamedObjectPath.c)
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 *     RtlCheckSandboxedToken @ 0x18010D730 (RtlCheckSandboxedToken.c)
 *     RtlRemovePrivileges @ 0x18010EA30 (RtlRemovePrivileges.c)
 *     AVrfpAppendCurrentUserSid @ 0x18011040C (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x180118224 (RtlpIsAppContainer.c)
 *     RtlNewInstanceSecurityObject @ 0x1801338F0 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x180133A40 (RtlNewSecurityGrantedAccess.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationToken()
{
  __int64 result; // rax

  result = 33LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
