/*
 * XREFs of ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140189A90
 * Callers:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DXGGLOBAL_DestroyAdapter @ 0x14006C2E0 (DXGGLOBAL_DestroyAdapter.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1403593D0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1403953C4 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140418390 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1403DBA60 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

void __fastcall DXGGLOBAL::DestroyAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
    (DXGGLOBAL *)((char *)this + 305272),
    (void (*)(void *))DXGGLOBAL::DelayDestroyAdapterWork,
    a2);
}
