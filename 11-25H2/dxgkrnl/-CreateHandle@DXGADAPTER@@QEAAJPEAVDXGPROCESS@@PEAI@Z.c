/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14031F1A0
 * Callers:
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401E7260 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021EC60 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031E518 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14037DFF0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  int v7; // ebx
  unsigned int v8; // ebp
  struct ADAPTER_RENDER *v9; // rdx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3303;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess != NULL", 3303LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 50) != 1 )
  {
    v7 = -1073741130;
    WdLogSingleEntry2(3LL, this, -1073741130LL);
    WdLogGlobalForLineNumber = 3315;
    return (unsigned int)v7;
  }
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 248));
  v8 = HMGRTABLE::AllocHandle((unsigned int *)a2 + 70, (__int64)this, 1, 0, 0);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)a2 + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 248, 0LL);
  KeLeaveCriticalRegion();
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  if ( !v8 )
  {
    v7 = -1073741801;
LABEL_13:
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return (unsigned int)v7;
  }
  v9 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 391);
  if ( v9 )
  {
    v7 = DXGPROCESS::OpenAdapter(a2, v9, (*((_DWORD *)a2 + 102) & 0x80) != 0);
    if ( v7 < 0 )
    {
      DXGPROCESS::FreeResourceHandleNoRefSafe(a2, v8);
      goto LABEL_13;
    }
  }
  *a3 = v8;
  return 0LL;
}
