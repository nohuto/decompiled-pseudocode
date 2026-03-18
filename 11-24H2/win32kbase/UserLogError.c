/*
 * XREFs of UserLogError @ 0x1400A6760
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1400A8638 (RIMApiSetValidateDeviceSignature.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1401D1F64 (RIMFreeSpecificDevOnCreateFailure.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     <none>
 */

void __fastcall UserLogError(int a1)
{
  _DWORD *ErrorLogEntry; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(gpWin32kDriverObject, 0x30u);
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a1;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
