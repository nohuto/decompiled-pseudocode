/*
 * XREFs of NvmeAdapterStorMQPowerUpDeviceLastStepB @ 0x140132028
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x14012FE8C (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterStorMQPowerUpDeviceLastStepB(__int64 a1)
{
  struct _ERESOURCE *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  KeEnterCriticalRegion();
  v2 = (struct _ERESOURCE *)(a1 + 1176);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
  v3 = (_QWORD *)(a1 + 1288);
  for ( i = *(_QWORD **)(a1 + 1288); i != v3; i = (_QWORD *)*i )
  {
    if ( FeatureFixTRIMAddSCSIPassthrough )
      **(_QWORD **)(i[147] + 40LL) = KeQueryUnbiasedInterruptTime();
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(i[147] + 40LL) + 192LL), 1, 0) )
      KeSetCoalescableTimer(
        (PKTIMER)(*(_QWORD *)(i[147] + 40LL) + 128LL),
        (LARGE_INTEGER)-50000000LL,
        0x7D0u,
        0x12Cu,
        (PKDPC)(*(_QWORD *)(i[147] + 40LL) + 64LL));
  }
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
}
