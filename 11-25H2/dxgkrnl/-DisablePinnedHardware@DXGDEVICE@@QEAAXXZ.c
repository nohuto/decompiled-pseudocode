/*
 * XREFs of ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1402BB68C
 * Callers:
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1402BAB9C (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1402BB740 (-UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1402BB848 (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DisablePinnedHardware(DXGDEVICE *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v2 + 184)
    && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1700;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1700LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGDEVICE::UnpinDeviceResources(this);
  DXGDEVICE::UnpinDeviceAllocations(this);
}
