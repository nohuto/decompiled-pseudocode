/*
 * XREFs of NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC
 * Callers:
 *     NvmeAdapterStorMQControllerInitializeWorker @ 0x1400D97A0 (NvmeAdapterStorMQControllerInitializeWorker.c)
 * Callees:
 *     NvmeControllerAdvancedInitialize @ 0x1400EA71C (NvmeControllerAdvancedInitialize.c)
 *     NvmeControllerCreateAdminQueue @ 0x1400EBE6C (NvmeControllerCreateAdminQueue.c)
 *     NvmeControllerGetReadyTimeout @ 0x1400EED34 (NvmeControllerGetReadyTimeout.c)
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F3814 (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 *     NvmeGetRegistrySettings @ 0x1400F92F8 (NvmeGetRegistrySettings.c)
 *     NvmeControllerCreateExtendedCommandPool @ 0x1401291AC (NvmeControllerCreateExtendedCommandPool.c)
 */

__int64 __fastcall NvmeAdapterFinalizeStorMQMiniportControllerStart(_QWORD *DeferredContext)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  unsigned int v4; // edi

  v1 = DeferredContext[16];
  *((_DWORD *)DeferredContext + 155) = *(_DWORD *)(v1 + 200);
  DeferredContext[121] &= ~2uLL;
  NvmeGetRegistrySettings();
  NvmeControllerQueryStorMQProperty(DeferredContext, 8LL, 4LL);
  NvmeControllerQueryStorMQProperty(DeferredContext, 0LL, 8LL);
  DeferredContext[73] = 0LL;
  *((_DWORD *)DeferredContext + 2) = 1;
  *((_DWORD *)DeferredContext + 304) = 4;
  *((_DWORD *)DeferredContext + 305) = NvmeControllerGetReadyTimeout(DeferredContext);
  NvmeControllerQueryStorMQProperty(DeferredContext, 36LL, 4LL);
  *((_WORD *)DeferredContext + 3) = 1;
  NvmeControllerQueryStorMQProperty(DeferredContext, 2147483652LL, 4LL);
  *((_BYTE *)DeferredContext + 1729) = 1;
  if ( (*(_BYTE *)(v1 + 416) & 8) != 0
    && !(unsigned int)NvmeControllerQueryStorMQProperty(DeferredContext, 2147483653LL, 1LL) )
  {
    *((_BYTE *)DeferredContext + 1729) = 1;
  }
  NvmeControllerCreateAdminQueue(DeferredContext);
  NvmeControllerCreateExtendedCommandPool(DeferredContext);
  NvmeControllerReset(DeferredContext, v3, 1LL);
  NvmeControllerInitPhase1(DeferredContext);
  v4 = NvmeControllerAdvancedInitialize(DeferredContext);
  if ( FeatureFixTRIMAddSCSIPassthrough )
    **(_QWORD **)(DeferredContext[161] + 40LL) = KeQueryUnbiasedInterruptTime();
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(DeferredContext[161] + 40LL) + 192LL), 1, 0) )
    KeSetCoalescableTimer(
      (PKTIMER)(*(_QWORD *)(DeferredContext[161] + 40LL) + 128LL),
      (LARGE_INTEGER)-50000000LL,
      0x7D0u,
      0x12Cu,
      (PKDPC)(*(_QWORD *)(DeferredContext[161] + 40LL) + 64LL));
  return v4;
}
