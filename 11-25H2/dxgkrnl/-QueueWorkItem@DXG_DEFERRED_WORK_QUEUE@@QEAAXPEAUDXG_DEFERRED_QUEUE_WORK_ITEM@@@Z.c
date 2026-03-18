/*
 * XREFs of ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x140054A58
 * Callers:
 *     ?SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEAX@Z @ 0x1403DB5A0 (-SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004CD9C (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
        DXG_DEFERRED_WORK_QUEUE *this,
        struct DXG_DEFERRED_QUEUE_WORK_ITEM *a2)
{
  DXG_DEFERRED_WORK_QUEUE **v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v6, this);
  v4 = (DXG_DEFERRED_WORK_QUEUE **)*((_QWORD *)this + 4);
  if ( *v4 != (DXG_DEFERRED_WORK_QUEUE *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 24;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  *((_QWORD *)this + 4) = a2;
  if ( ++*((_DWORD *)this + 10) == 1 )
  {
    KeResetEvent((PRKEVENT)this + 2);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 72), *((WORK_QUEUE_TYPE *)this + 26));
  }
  if ( v7 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v5 = v6;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
