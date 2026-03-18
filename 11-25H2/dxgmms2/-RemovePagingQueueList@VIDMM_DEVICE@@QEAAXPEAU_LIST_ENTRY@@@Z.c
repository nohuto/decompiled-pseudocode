/*
 * XREFs of ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003FDA0
 * Callers:
 *     VidMmDestroyPagingQueue_0 @ 0x1400FE640 (VidMmDestroyPagingQueue_0.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VIDMM_DEVICE::RemovePagingQueueList(VIDMM_DEVICE *this, struct _LIST_ENTRY *a2)
{
  char *v3; // rbx
  __int64 v4; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v3 = (char *)this + 112;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v4);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  Flink = a2->Flink;
  if ( a2->Flink )
  {
    if ( Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    a2->Flink = 0LL;
    a2->Blink = 0LL;
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(Blink);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
