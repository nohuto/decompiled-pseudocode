/*
 * XREFs of ?RemoveDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14006CB50
 * Callers:
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1403B4470 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::RemoveDxgDevice(DXGK_VIRTUAL_GPU_PARAV *this, struct _LIST_ENTRY *a2)
{
  char *v2; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v2 = (char *)this + 288;
  DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
  Flink = a2->Flink;
  if ( a2->Flink )
  {
    if ( Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    a2->Blink = 0LL;
    a2->Flink = 0LL;
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
