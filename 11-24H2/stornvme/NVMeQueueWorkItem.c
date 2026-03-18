/*
 * XREFs of NVMeQueueWorkItem @ 0x14002393C
 * Callers:
 *     NVMeWriteBufferFirmwareDownload @ 0x140002140 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140012380 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 *     FirmwareDownload @ 0x14001FABC (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x140022470 (NVMeFirmwareActivateCompletion.c)
 *     NVMeSanitizeCommandCompletion @ 0x140024A60 (NVMeSanitizeCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1400251A0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x14002A33C (NVMeReenumerateNameSpaceIdentify.c)
 *     ProcessNvmeSanitizeStatus @ 0x14002D20C (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeQueueWorkItem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  result = StorPortExtendedFunction(29LL, a1, &v7, a4);
  if ( !(_DWORD)result )
    return StorPortExtendedFunction(30LL, a1, a2, v7);
  return result;
}
