/*
 * XREFs of PopEtEnergyTrackerInitialize @ 0x14075D06C
 * Callers:
 *     PopEtEnergyTrackerCreate @ 0x14075CC00 (PopEtEnergyTrackerCreate.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopEtDeferredInitDxgContext @ 0x14075C860 (PopEtDeferredInitDxgContext.c)
 *     PopEtEnergyTrackerFindDxgAdapters @ 0x14075CEA8 (PopEtEnergyTrackerFindDxgAdapters.c)
 */

void __fastcall PopEtEnergyTrackerInitialize(__int64 a1)
{
  __int64 v2; // rcx

  memset_0((void *)a1, 0, 0x298uLL);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  memset_0((void *)(a1 + 80), 0, 0x208uLL);
  v2 = PopEtGlobals;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 96) = v2 + 968;
  if ( *(_DWORD *)(v2 + 1096) == -1 )
    PopEtDeferredInitDxgContext();
  PopEtEnergyTrackerFindDxgAdapters(a1);
}
