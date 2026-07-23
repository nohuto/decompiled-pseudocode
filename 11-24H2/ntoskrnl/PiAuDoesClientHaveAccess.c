/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1408B9FF8
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F62B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F63C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F6578 (PiCMDeleteDevice.c)
 *     PiSwDispatch @ 0x14072E770 (PiSwDispatch.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x14094AF58 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14094B1EC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14094B3B0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14094B5B8 (PiCMOpenObjectKey.c)
 *     PiCMSetRegistryProperty @ 0x1409CD848 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x1409EFF1C (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x1409F2F90 (PiDqIrpPropertySet.c)
 *     PiCMGetDeviceIdList @ 0x140A15D5C (PiCMGetDeviceIdList.c)
 *     PiCMRegisterDeviceInterface @ 0x140A79094 (PiCMRegisterDeviceInterface.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABB8E4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABBA14 (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x140ABC210 (PiCMSetDeviceProblem.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 */

BOOLEAN __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK DesiredAccess)
{
  PSECURITY_DESCRIPTOR v1; // rbx
  BOOLEAN v3; // bl
  BOOLEAN result; // al
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  v1 = PiAuSecurityObject;
  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( !PiAuSecurityObject )
    return 0;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v3 = SeAccessCheck(
         v1,
         &SubjectSecurityContext,
         0,
         DesiredAccess,
         0,
         0LL,
         (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
         KeGetCurrentThread()->PreviousMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  result = v3;
  if ( AccessStatus < 0 )
    return 0;
  return result;
}
