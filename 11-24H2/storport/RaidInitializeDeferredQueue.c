/*
 * XREFs of RaidInitializeDeferredQueue @ 0x14006B018
 * Callers:
 *     RaidAdapterInitializeWmi @ 0x140038AF0 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterConfigureResources @ 0x140054EDC (RaidAdapterConfigureResources.c)
 *     NvmeAdapterConfigureResources @ 0x1400CD914 (NvmeAdapterConfigureResources.c)
 *     NvmeAdapterInitializeWmi @ 0x1400D3850 (NvmeAdapterInitializeWmi.c)
 * Callees:
 *     RaidAdjustDeferredQueueDepth @ 0x140037FC8 (RaidAdjustDeferredQueueDepth.c)
 */

__int64 __fastcall RaidInitializeDeferredQueue(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a4 < 0x20 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 112) = a5;
  *(_WORD *)(a1 + 2) = a4;
  KeInitializeDpc((PRKDPC)(a1 + 8), (PKDEFERRED_ROUTINE)RaidDeferredQueueDpcRoutine, a2);
  return RaidAdjustDeferredQueueDepth((union _SLIST_HEADER *)a1);
}
