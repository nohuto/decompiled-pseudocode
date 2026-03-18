/*
 * XREFs of ?EnableMsBddFallback@DXGADAPTER@@QEAAXEAEAU_GUID@@PEAX@Z @ 0x14018F0FC
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x140249CE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x140249F1C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSetStartPnPTransitionSessionized @ 0x1401FD158 (DxgkSetStartPnPTransitionSessionized.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x140257C04 (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403826AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTER::EnableMsBddFallback(struct _KTHREAD **this, char a2, struct _GUID *a3, void *a4)
{
  int updated; // eax
  __int64 v8; // rbx

  if ( this[18] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9191;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsStopResetLockExclusiveOwner()",
      9191LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9192;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      9192LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9194;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"this->IsBddFallbackDriver()", 9194LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    *((_DWORD *)this + 50) = 1;
    if ( a4 )
    {
      DxgkSetStartPnPTransitionSessionized(a4);
      this[31] = (struct _KTHREAD *)*((_QWORD *)a4 + 6);
    }
  }
  else
  {
    if ( this[391] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9216;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDisplayOnlyAdapter()", 9216LL, 0LL, 0LL, 0LL, 0LL);
    }
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this[390], 0LL);
    DmmClearDisplayManagerReferencesForAdapter((const struct DXGADAPTER *)this);
    *((_DWORD *)this + 50) = 3;
    updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_STOP, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 )
    {
      v8 = updated;
      WdLogSingleEntry2(2LL, this, updated);
      WdLogGlobalForLineNumber = 9232;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to send Stop WNF for Adapter=0x%I64x with Status=0x%I64x",
        (__int64)this,
        v8,
        0LL,
        0LL,
        0LL);
    }
  }
}
