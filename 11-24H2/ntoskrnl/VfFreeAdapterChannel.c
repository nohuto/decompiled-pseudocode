/*
 * XREFs of VfFreeAdapterChannel @ 0x140B86490
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140610E4C (ViRemoveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B84B24 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B84E20 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeAdapterChannel(int a1)
{
  __int64 AdapterInformationInternal; // rdi
  __int64 RealDmaAdapter; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx

  VF_ASSERT_IRQL(2u);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  guard_dispatch_icall_no_overrides(RealDmaAdapter, RealDmaAdapter, v4, v5);
  if ( AdapterInformationInternal )
  {
    _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
    v6 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, 0LL);
    if ( v6 )
    {
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v6 + 48));
      if ( *(_QWORD *)(v6 + 96) )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v6);
    }
  }
}
