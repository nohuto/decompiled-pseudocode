/*
 * XREFs of VfBuildScatterGatherListEx @ 0x140B87DB0
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B86C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B86EB4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B86F40 (VF_ASSERT_IRQL.c)
 *     ViCheckMdlLength @ 0x140B8A42C (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfBuildScatterGatherListEx(
        int a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 RealDmaAdapter; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    if ( !a4 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 196));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 200));
    VERIFY_BUFFER_LOCKED(a4);
    v12 = ViCheckMdlLength(a4, a5, a6);
    if ( v12 )
    {
      v13 = v12;
      ViHalPreprocessOptions(
        byte_140E0E9F4,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v12,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v13, 0LL, 0LL, byte_140E0E9F4);
    }
  }
  v14 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  v15 = v14;
  if ( AdapterInformationInternal )
  {
    if ( v14 < 0 )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  return v15;
}
