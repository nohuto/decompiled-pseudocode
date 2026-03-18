/*
 * XREFs of ObQueryNameString @ 0x140969A10
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     IopGetFileVolumeNameInformation @ 0x14049B84C (IopGetFileVolumeNameInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x14060D6C8 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x140B69F80 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140B6BC10 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140B9B874 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
