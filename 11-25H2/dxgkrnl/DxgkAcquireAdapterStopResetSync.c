/*
 * XREFs of DxgkAcquireAdapterStopResetSync @ 0x1401873E0
 * Callers:
 *     ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140054E8C (-CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140242EE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024311C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DxgkAcquireAdapterStopResetSync(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a1 )
  {
    v3 = a1 + 136;
    if ( a2 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v3, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v3 + 8) = KeGetCurrentThread();
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v3, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 16));
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 267;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"No hAdapter specified", 267LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
