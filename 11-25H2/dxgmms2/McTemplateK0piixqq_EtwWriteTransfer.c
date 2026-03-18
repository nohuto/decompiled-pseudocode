/*
 * XREFs of McTemplateK0piixqq_EtwWriteTransfer @ 0x140018838
 * Callers:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x140005720 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiSendToExecutionQueue @ 0x140022AC0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x140025DD0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 *     VidSchiResetContextQuantumAtISR @ 0x140037DE0 (VidSchiResetContextQuantumAtISR.c)
 *     VidSchiStartContextRunningTimeAtISR @ 0x140038030 (VidSchiStartContextRunningTimeAtISR.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 McTemplateK0piixqq_EtwWriteTransfer()
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
