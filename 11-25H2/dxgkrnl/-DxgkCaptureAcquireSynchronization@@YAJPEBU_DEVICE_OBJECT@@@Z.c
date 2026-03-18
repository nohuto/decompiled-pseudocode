/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403E52A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BD4A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1403D9480 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1403DC98C (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v6; // rdi
  char *v7; // rbx
  struct DXGADAPTER *v8; // rbx
  struct DXGADAPTER *v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = 0LL;
  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1, &v9);
  v3 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v2);
    v6 = (struct _KTHREAD **)Current;
    if ( Current )
    {
      v7 = (char *)Current + 216;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v7, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)v7 + 1) = KeGetCurrentThread();
      v8 = v9;
      DXGPROCESS::AcquireDeviceLockForAllDevices(v6, v9);
      DXGADAPTER::AcquireCoreSync((__int64)v8, 1);
      DXGADAPTER::AcquireDdiSync((__int64)v8, 1);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 75;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, DxgAdapterFromChild);
    WdLogGlobalForLineNumber = 65;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DpiGetDxgAdapterFromChild failed in DxgkCaptureSynchronize, returning 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v3;
  }
}
