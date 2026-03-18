/*
 * XREFs of ViReleaseDmaAdapter @ 0x140B89A1C
 * Callers:
 *     VfGetDmaAdapter @ 0x140B86940 (VfGetDmaAdapter.c)
 *     VfHalDeleteDevice @ 0x140B871A0 (VfHalDeleteDevice.c)
 *     VfPutDmaAdapter @ 0x140B87690 (VfPutDmaAdapter.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 */

void __fastcall ViReleaseDmaAdapter(ULONG_PTR a1)
{
  void *RealDmaAdapter; // r14
  KIRQL v3; // al
  PVOID *v4; // rbp
  PVOID *v5; // rbx
  __int64 v6; // rsi
  LONG_PTR v7; // rax
  ULONG_PTR v8; // rbx

  RealDmaAdapter = (void *)ViGetRealDmaAdapter(a1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
  v4 = *(PVOID **)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 312), v3);
  if ( v4 )
  {
    v5 = v4;
    v6 = 32LL;
    do
    {
      if ( *v5 )
        MmFreeContiguousMemory(*v5);
      ++v5;
      --v6;
    }
    while ( v6 );
    ExFreePoolWithTag(v4, 0);
  }
  v7 = ObfDereferenceObject(RealDmaAdapter);
  v8 = v7;
  if ( *(int *)(a1 + 76) > 0 && v7 && (v7 != 1 || !*(_BYTE *)(a1 + 74)) )
  {
    ViHalPreprocessOptions(
      byte_140E0E9A8,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v7,
      (__int64)RealDmaAdapter,
      a1);
    VfReportIssueWithOptions(0xE6u, 0x11uLL, v8, (ULONG_PTR)RealDmaAdapter, a1, byte_140E0E9A8);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
