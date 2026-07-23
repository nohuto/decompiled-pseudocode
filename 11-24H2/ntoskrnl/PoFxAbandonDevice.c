/*
 * XREFs of PoFxAbandonDevice @ 0x140A6EBB4
 * Callers:
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopPluginAbandonDevice @ 0x1404D3334 (PopPluginAbandonDevice.c)
 *     PopDirectedDripsDiagDestroyDeviceDiagnostic @ 0x140A6EC90 (PopDirectedDripsDiagDestroyDeviceDiagnostic.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A6ED50 (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140A6EDC8 (PopDiagTraceFxDevicePreparation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  ULONG_PTR v4; // rcx
  __int64 v5; // rax
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  PopDirectedDripsDiagDestroyDeviceDiagnostic();
  _m_prefetchw((const void *)(a1 + 296));
  v2 = *(_DWORD *)(a1 + 296);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 1) != 0 )
  {
    PopFxUnregisterDeviceOrWait(a1);
    v4 = *(_QWORD *)(a1 + 144);
    if ( v4 )
      PopPluginAbandonDevice(v4, a1 + 128);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 144), a1 + 128, 0LL);
    *(_QWORD *)(a1 + 144) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFE);
  }
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFD) & 2) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 48) != v5 && v5 )
    {
      _m_prefetchw((const void *)(a1 + 296));
      v6 = *(_DWORD *)(a1 + 296);
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v6, v6);
      }
      while ( v7 != v6 );
      if ( (v6 & 0x2000) == 0 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 136), 0x4D584650u);
    }
    *(_OWORD *)(a1 + 128) = 0LL;
  }
}
