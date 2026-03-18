/*
 * XREFs of MmIsDriverVerifying @ 0x14049F5C0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     VfDifCaptureIoCallbacks @ 0x14049F4E8 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14049F548 (VfDifCaptureDriverEntry.c)
 *     VfIsVerificationEnabled @ 0x1404AD600 (VfIsVerificationEnabled.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopQueryInformation @ 0x140861A40 (IopQueryInformation.c)
 *     IopWriteFile @ 0x1408C3790 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     IopGetBasicInformationFile @ 0x1408ED534 (IopGetBasicInformationFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     VfGetPristineDispatchRoutine @ 0x140B7D8AC (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140B7D8FC (VfGetPristineDriverInit.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B82BB8 (IovUtilIsVerifiedDeviceStack.c)
 *     VfDevObjPreAddDevice @ 0x140B99678 (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140B996C4 (VfDevObjPostAddDevice.c)
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
