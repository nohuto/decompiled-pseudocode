/*
 * XREFs of McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer @ 0x14000D4F4
 * Callers:
 *     VidSchiCompleteSignalCommmand @ 0x14000DCD0 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

__int64 McTemplateK0qPR0PR0XR0TR0qpp_EtwWriteTransfer()
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
