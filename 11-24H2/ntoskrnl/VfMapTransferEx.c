/*
 * XREFs of VfMapTransferEx @ 0x140B874C0
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140B84CE8 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B84EB4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B84FC0 (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x140B88368 (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x140B8842C (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfMapTransferEx(int a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, unsigned int *a6)
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
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED(a2);
    ViCheckAdapterBuffers(AdapterInformationInternal);
    v12 = ViCheckMdlLength(a2, a4, *a6);
    if ( v12 )
    {
      v13 = v12;
      ViHalPreprocessOptions(
        byte_140E0E948,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v12,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v13, 0LL, 0LL, byte_140E0E948);
    }
  }
  v14 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, a4);
  v15 = v14;
  if ( AdapterInformationInternal && v14 >= 0 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(AdapterInformationInternal, *a6, 1);
  return v15;
}
