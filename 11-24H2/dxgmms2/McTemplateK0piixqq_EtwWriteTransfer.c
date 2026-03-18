/*
 * XREFs of McTemplateK0piixqq_EtwWriteTransfer @ 0x14000D3D0
 * Callers:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x140005720 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiSendToExecutionQueue @ 0x140017660 (VidSchiSendToExecutionQueue.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x14001A970 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     VidSchiResetContextQuantumAtISR @ 0x140036800 (VidSchiResetContextQuantumAtISR.c)
 *     VidSchiStartContextRunningTimeAtISR @ 0x140036A50 (VidSchiStartContextRunningTimeAtISR.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

__int64 McTemplateK0piixqq_EtwWriteTransfer()
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
