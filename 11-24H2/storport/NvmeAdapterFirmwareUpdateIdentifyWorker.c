/*
 * XREFs of NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D3410
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerGetCommandEffectsLog @ 0x1400C7A20 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400C7C64 (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400C81A8 (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400EE0A8 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerIdentify @ 0x1400EF360 (NvmeControllerIdentify.c)
 */

void __fastcall NvmeAdapterFirmwareUpdateIdentifyWorker(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rax

  NvmeControllerIdentify(Context, Context, IoWorkItem);
  NvmeControllerGetIoCommandSetIdentify(Context);
  NvmeControllerGetCommandEffectsLog(Context, 1);
  NvmeControllerGetSupportedLogPagesLog(Context, 1);
  NvmeControllerGetFeatureIdentifiersSupportedLog(Context, 1);
  v4 = Context[74];
  if ( v4 )
    *(_QWORD *)((char *)Context + 841) = *(_QWORD *)(v4 + 64);
}
