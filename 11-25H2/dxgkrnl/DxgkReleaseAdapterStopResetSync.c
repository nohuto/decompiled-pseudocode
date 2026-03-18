/*
 * XREFs of DxgkReleaseAdapterStopResetSync @ 0x14018722C
 * Callers:
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140054E8C (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A628 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140242EE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024311C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DxgkReleaseAdapterStopResetSync(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a1 )
  {
    v3 = a1 + 136;
    if ( a2 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v3 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 152));
      ExReleasePushLockSharedEx(a1 + 136, 0LL);
    }
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 296;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"No hAdapter specified", 296LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
