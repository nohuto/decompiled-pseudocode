/*
 * XREFs of ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEBAJXZ @ 0x1400382FC
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400F8690 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1401111DC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(DXG_DEFERRED_WORK_QUEUE *this)
{
  DXG_DEFERRED_WORK_QUEUE *v1; // rbx
  __int64 v2; // rcx
  DXG_DEFERRED_WORK_QUEUE *v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v1 = this;
  v4 = this;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v2);
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  LODWORD(v1) = *((_DWORD *)v1 + 10);
  v5 = 1;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v4);
  return (unsigned int)v1;
}
