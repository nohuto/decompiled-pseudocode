/*
 * XREFs of McTemplateK0pqqxqqtppx_EtwWriteTransfer @ 0x14000D2CC
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

__int64 McTemplateK0pqqxqqtppx_EtwWriteTransfer()
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
