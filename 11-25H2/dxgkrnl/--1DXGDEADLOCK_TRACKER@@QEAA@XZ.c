/*
 * XREFs of ??1DXGDEADLOCK_TRACKER@@QEAA@XZ @ 0x1402A5F38
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1403C1824 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1403BC710 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::~DXGDEADLOCK_TRACKER(DXGDEADLOCK_TRACKER *this)
{
  __int64 v1; // rbx
  DXGDEADLOCK_TRACKER **v3; // rdx
  DXGDEADLOCK_TRACKER **v4; // rcx
  __int64 v5; // rbx

  v1 = *((_QWORD *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1 + 4928, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v1 + 4936) = KeGetCurrentThread();
  v3 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 28);
  if ( v3[1] != (DXGDEADLOCK_TRACKER *)((char *)this + 224)
    || (v4 = (DXGDEADLOCK_TRACKER **)*((_QWORD *)this + 29), *v4 != (DXGDEADLOCK_TRACKER *)((char *)this + 224)) )
  {
    __fastfail(3u);
  }
  *v4 = (DXGDEADLOCK_TRACKER *)v3;
  v3[1] = (DXGDEADLOCK_TRACKER *)v4;
  v5 = *((_QWORD *)this + 3);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v5 + 4936) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 4928, 0LL);
  KeLeaveCriticalRegion();
  DXGDEADLOCK_TRACKER::Cancel(this);
  DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 3));
}
