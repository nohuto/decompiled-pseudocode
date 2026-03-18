/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1408BC6A8
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F82B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F83C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F8578 (PiCMDeleteDevice.c)
 *     PiSwDispatch @ 0x140730760 (PiSwDispatch.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x140963498 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14096372C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x1409638F0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140963AF8 (PiCMOpenObjectKey.c)
 *     PiCMSetRegistryProperty @ 0x14099B0D8 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x1409F75AC (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x1409FA620 (PiDqIrpPropertySet.c)
 *     PiCMGetDeviceIdList @ 0x140A19E98 (PiCMGetDeviceIdList.c)
 *     PiCMRegisterDeviceInterface @ 0x140A6E630 (PiCMRegisterDeviceInterface.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140ABCF28 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140AC00A8 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140AC0780 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140AC08B0 (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x140AC10B0 (PiCMSetDeviceProblem.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
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
