/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1402BD67C
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BD4A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402BD920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14038C2B8 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1403942D4 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  ADAPTER_RENDER **v1; // rbx
  __int64 v3; // rcx
  char *v4; // rsi
  ADAPTER_RENDER *v5; // rbx
  char *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx

  v1 = (ADAPTER_RENDER **)((char *)this + 3128);
  v3 = *((_QWORD *)this + 391);
  v4 = (char *)v1;
  if ( v3 )
  {
    if ( !(unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v3, 2LL)
      || !(unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*v1, 1LL) )
    {
      goto LABEL_20;
    }
    v4 = (char *)this + 3128;
  }
  DXGADAPTER::AcquireCoreResourceExclusive(this, 2LL, 1LL);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    goto LABEL_20;
  v5 = *v1;
  if ( v5 )
  {
    if ( DXGADAPTER::IsDxgmms2(this) )
    {
      v6 = v4;
    }
    else
    {
      if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(v5) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4673;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"IsCoreResourceExclusiveOwner()",
          4673LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_QWORD *)v5 + 172) )
        goto LABEL_20;
      v6 = (char *)this + 3128;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 760LL) + 8LL) + 1024LL))(*(_QWORD *)(*(_QWORD *)v4 + 768LL))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 736LL) + 8LL) + 936LL))(*(_QWORD *)(*(_QWORD *)v6 + 744LL))
      || *((_BYTE *)this + 3053) )
    {
LABEL_20:
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this, 0LL);
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
      return;
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
  {
LABEL_19:
    KeLeaveCriticalRegion();
    goto LABEL_20;
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 14) = KeGetCurrentThread();
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 4232LL) )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
    goto LABEL_19;
  }
  *((_DWORD *)this + 40) = 1;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 14) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  v7 = *((_QWORD *)this + 391);
  if ( v7 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v7 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 24, 0LL);
    KeLeaveCriticalRegion();
    v8 = *((_QWORD *)this + 391);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v8 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 48, 0LL);
    KeLeaveCriticalRegion();
  }
}
