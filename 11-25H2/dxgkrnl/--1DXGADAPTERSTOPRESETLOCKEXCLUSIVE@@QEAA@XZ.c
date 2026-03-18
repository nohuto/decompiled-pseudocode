/*
 * XREFs of ??1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ @ 0x140068634
 * Callers:
 *     DxgkStartPnPStop @ 0x14019E5EC (DxgkStartPnPStop.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGADAPTERSTOPRESETLOCKEXCLUSIVE::~DXGADAPTERSTOPRESETLOCKEXCLUSIVE(
        DXGADAPTERSTOPRESETLOCKEXCLUSIVE *this)
{
  __int64 v2; // rbx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 8) = 0;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v2 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)this);
  }
}
