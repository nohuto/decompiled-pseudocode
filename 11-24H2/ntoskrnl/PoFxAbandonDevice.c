/*
 * XREFs of PoFxAbandonDevice @ 0x140A74894
 * Callers:
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 * Callees:
 *     PopPluginAbandonDevice @ 0x1404D98B8 (PopPluginAbandonDevice.c)
 *     PopDirectedDripsDiagDestroyDeviceDiagnostic @ 0x140A74970 (PopDirectedDripsDiagDestroyDeviceDiagnostic.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A74A30 (PopFxUnregisterDeviceOrWait.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140A74AA8 (PopDiagTraceFxDevicePreparation.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG_PTR v6; // rcx
  __int64 v7; // rax
  signed __int32 v8; // eax
  signed __int32 v9; // ett

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
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
      PopPluginAbandonDevice(v6, a1 + 128, v4, v5);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 144), a1 + 128, 0LL);
    *(_QWORD *)(a1 + 144) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFE);
  }
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFD) & 2) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 48) != v7 && v7 )
    {
      _m_prefetchw((const void *)(a1 + 296));
      v8 = *(_DWORD *)(a1 + 296);
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v8, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x2000) == 0 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 136), 0x4D584650u);
    }
    *(_OWORD *)(a1 + 128) = 0LL;
  }
}
