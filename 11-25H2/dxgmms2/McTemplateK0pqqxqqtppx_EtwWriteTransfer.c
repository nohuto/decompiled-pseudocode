/*
 * XREFs of McTemplateK0pqqxqqtppx_EtwWriteTransfer @ 0x140018734
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 McTemplateK0pqqxqqtppx_EtwWriteTransfer()
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
