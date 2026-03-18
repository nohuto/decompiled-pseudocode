/*
 * XREFs of VfPutDmaAdapter @ 0x140B87690
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140610D1C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B84FC0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 *     ViReleaseDmaAdapter @ 0x140B89A1C (ViReleaseDmaAdapter.c)
 */

__int64 __fastcall VfPutDmaAdapter(ULONG_PTR a1)
{
  char v2; // bp
  int v3; // edi
  __int64 AdapterInformationInternal; // rax
  ULONG_PTR v5; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 RealDmaAdapter; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax

  VF_ASSERT_MAX_IRQL();
  v2 = 0;
  v3 = 0;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v5 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_28;
  v3 = _InterlockedDecrement((volatile signed __int32 *)(AdapterInformationInternal + 76));
  if ( v3 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140E0E954,
      "Driver has attempted to access an adapter (%p) that has already been released.",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, v5, 0LL, byte_140E0E954);
  }
  ViFlushZeroMapRegisterBaseWcbs(v5);
  if ( *(_DWORD *)(v5 + 212) != *(_DWORD *)(v5 + 216) )
  {
    ViHalPreprocessOptions(
      byte_140E0E950,
      "Cannot put adapter %p until all adapter channels are freed (%x left).",
      (const void *)8,
      a1);
    VfReportIssueWithOptions(
      0xE6u,
      8uLL,
      a1,
      (unsigned int)(*(_DWORD *)(v5 + 212) - *(_DWORD *)(v5 + 216)),
      v5,
      byte_140E0E950);
  }
  if ( *(_DWORD *)(v5 + 204) != *(_DWORD *)(v5 + 208) )
  {
    ViHalPreprocessOptions(
      byte_140E0E94C,
      "Cannot put adapter %p until all common buffers are freed (%x left).",
      (const void *)7,
      a1);
    VfReportIssueWithOptions(
      0xE6u,
      7uLL,
      a1,
      (unsigned int)(*(_DWORD *)(v5 + 204) - *(_DWORD *)(v5 + 208)),
      v5,
      byte_140E0E94C);
  }
  if ( *(_DWORD *)(v5 + 192) )
  {
    ViHalPreprocessOptions(
      byte_140E0E970,
      "Cannot put adapter %p until all map registers are freed (%x left).",
      (const void *)9,
      a1);
    VfReportIssueWithOptions(0xE6u, 9uLL, a1, *(int *)(v5 + 192), v5, byte_140E0E970);
  }
  if ( *(_DWORD *)(v5 + 200) )
  {
    ViHalPreprocessOptions(
      byte_140E0E96C,
      "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
      (const void *)0xA,
      a1);
    VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, *(int *)(v5 + 200), v5, byte_140E0E96C);
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140F03A90);
  if ( !*(_QWORD *)(v5 + 64) )
  {
    v7 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      v8 = *(_QWORD **)(v5 + 8);
      if ( *v8 == v5 )
      {
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        goto LABEL_25;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
  if ( *(_BYTE *)(v5 + 74) )
    goto LABEL_17;
  if ( !*(_BYTE *)(v5 + 75) )
  {
    v5 = 0LL;
    goto LABEL_25;
  }
  v2 = 1;
  if ( v3 <= 0 )
  {
LABEL_17:
    v9 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      v10 = *(_QWORD **)(v5 + 8);
      if ( *v10 == v5 )
      {
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        goto LABEL_25;
      }
    }
    goto LABEL_23;
  }
LABEL_25:
  KeReleaseSpinLock(&qword_140F03A90, v6);
  if ( v5 && !v2 )
    ViReleaseDmaAdapter(v5);
LABEL_28:
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  result = guard_dispatch_icall_no_overrides(RealDmaAdapter, RealDmaAdapter, v12, v13);
  if ( v5 && v2 && v3 <= 0 )
    return ViReleaseDmaAdapter(v5);
  return result;
}
