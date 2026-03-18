/*
 * XREFs of PopEtEnergyTrackerInitialize @ 0x1407516C0
 * Callers:
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 * Callees:
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopEtDeferredInitDxgContext @ 0x140750E90 (PopEtDeferredInitDxgContext.c)
 *     PopEtEnergyTrackerFindDxgAdapters @ 0x1407514F8 (PopEtEnergyTrackerFindDxgAdapters.c)
 */

void __fastcall PopEtEnergyTrackerInitialize(__int64 a1)
{
  __int64 v2; // rax

  memset_0((void *)a1, 0, 0x298uLL);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 52) = 0;
  memset_0((void *)(a1 + 80), 0, 0x208uLL);
  v2 = PopEtGlobals;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 96) = v2 + 968;
  if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *(_DWORD *)(PopEtGlobals + 1096) == -1 )
      PopEtDeferredInitDxgContext();
    PopEtEnergyTrackerFindDxgAdapters(a1);
  }
}
