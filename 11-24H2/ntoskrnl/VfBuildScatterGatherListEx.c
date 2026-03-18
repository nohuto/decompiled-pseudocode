/*
 * XREFs of VfBuildScatterGatherListEx @ 0x140B85DB0
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B84C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B84EB4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     ViCheckMdlLength @ 0x140B8842C (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
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
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx

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
    v13 = ViCheckMdlLength(a4, a5, a6);
    if ( v13 )
    {
      v14 = v13;
      ViHalPreprocessOptions(
        byte_140E0E940,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v13,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v14, 0LL, 0LL, byte_140E0E940);
    }
  }
  v15 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, a4);
  v16 = v15;
  if ( AdapterInformationInternal )
  {
    if ( v15 < 0 )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  return v16;
}
