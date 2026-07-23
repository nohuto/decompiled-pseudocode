/*
 * XREFs of MmIsDriverVerifying @ 0x140499230
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     VfDifCaptureIoCallbacks @ 0x140499158 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x1404991B8 (VfDifCaptureDriverEntry.c)
 *     VfIsVerificationEnabled @ 0x1404A8EB0 (VfIsVerificationEnabled.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     IopGetBasicInformationFile @ 0x1409567DC (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     IopQueryInformation @ 0x1409C4DC0 (IopQueryInformation.c)
 *     VfGetPristineDispatchRoutine @ 0x140B8F88C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140B8F8DC (VfGetPristineDriverInit.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B94B98 (IovUtilIsVerifiedDeviceStack.c)
 *     VfDevObjPreAddDevice @ 0x140BAB64C (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140BAB698 (VfDevObjPostAddDevice.c)
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
