/*
 * XREFs of ObQueryNameString @ 0x1408C0E00
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402A1BDC (IopAttachDeviceToDeviceStackSafe.c)
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     IopGetFileVolumeNameInformation @ 0x14049B5AC (IopGetFileVolumeNameInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BCD2C (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x14060169C (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x140B5A140 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140B5CB30 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140B8B894 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
