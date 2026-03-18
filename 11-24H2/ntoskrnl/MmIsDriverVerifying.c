/*
 * XREFs of MmIsDriverVerifying @ 0x14049E430
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     VfDifCaptureIoCallbacks @ 0x14049E358 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049E3B8 (VfDifCaptureDriverEntry.c)
 *     VfIsVerificationEnabled @ 0x1404AE5A0 (VfIsVerificationEnabled.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopWriteFile @ 0x1408C1630 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     IopGetBasicInformationFile @ 0x14096DFD0 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     IopQueryInformation @ 0x1409D4F90 (IopQueryInformation.c)
 *     VfGetPristineDispatchRoutine @ 0x140B8D88C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140B8D8DC (VfGetPristineDriverInit.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B92B98 (IovUtilIsVerifiedDeviceStack.c)
 *     VfDevObjPreAddDevice @ 0x140BA964C (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140BA9698 (VfDevObjPostAddDevice.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax
  _DWORD *DriverSection; // rcx

  result = 0;
  if ( (_DWORD)VfRuleClasses )
  {
    DriverSection = DriverObject->DriverSection;
    if ( DriverSection )
      return (DriverSection[26] >> 25) & 1;
  }
  return result;
}
