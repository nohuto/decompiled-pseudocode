/*
 * XREFs of ?DdiSubmitCommandToHwQueue@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x14003AD10
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400479E0 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandToHwQueue(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE *))DxgCoreInterface[57])(
           this,
           a2);
}
