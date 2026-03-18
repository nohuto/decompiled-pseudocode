/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14095D51C
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406ECB2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406ECC34 (PiCMCreateObject.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14095B57C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14095B740 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14095B948 (PiCMOpenObjectKey.c)
 *     PiCMOpenClassKey @ 0x14095CAF8 (PiCMOpenClassKey.c)
 *     PiCMSetObjectProperty @ 0x14095D17C (PiCMSetObjectProperty.c)
 *     PiCMRegisterDeviceInterface @ 0x14095DC04 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x14095E16C (PiCMSetRegistryProperty.c)
 *     PiDqIrpPropertySet @ 0x14095E610 (PiDqIrpPropertySet.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABC48C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABC5BC (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x140ABD29C (PiCMSetDeviceProblem.c)
 *     PiSwDispatch @ 0x140AC02F0 (PiSwDispatch.c)
 *     PiCMDeleteDevice @ 0x140AC08A4 (PiCMDeleteDevice.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
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
