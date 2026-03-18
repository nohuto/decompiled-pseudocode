/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x14018CE9C
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x140242EE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024311C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F6E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x140250DCC (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396DE0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(struct _KTHREAD **this, char a2)
{
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  if ( this[18] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9130;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsStopResetLockExclusiveOwner()",
      9130LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9131;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 9131LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9133;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"this->IsBddFallbackDriver()", 9133LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 50) = 1;
  }
  else
  {
    if ( this[391] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9145;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDisplayOnlyAdapter()", 9145LL, 0LL, 0LL, 0LL, 0LL);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this[390], 0LL);
    DmmClearDisplayManagerReferencesForAdapter((const struct DXGADAPTER *)this);
    *((_DWORD *)this + 50) = 3;
  }
}
