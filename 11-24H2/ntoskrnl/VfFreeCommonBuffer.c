/*
 * XREFs of VfFreeCommonBuffer @ 0x140B86660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140B84BC0 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B84FC0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHalFreeDomainCommonBuffer @ 0x140B89178 (ViHalFreeDomainCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x140B89D3C (ViSpecialFreeCommonBuffer.c)
 */

void __fastcall VfFreeCommonBuffer(int a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  char v9; // si
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  char v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v9 = 0;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v12 = a5;
  v13 = AdapterInformationInternal;
  if ( !AdapterInformationInternal
    || (VF_ASSERT_MAX_IRQL(), (v9 = ViHalFreeDomainCommonBuffer(&v15)) != 0)
    || (LOBYTE(v14) = v12,
        !(unsigned int)ViSpecialFreeCommonBuffer(*(_QWORD *)(*(_QWORD *)(RealDmaAdapter + 8) + 24LL), v13, a4, v14)) )
  {
    guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, a4);
    if ( v13 )
    {
      if ( !v9 )
        DECREMENT_COMMON_BUFFERS(v13);
    }
  }
}
