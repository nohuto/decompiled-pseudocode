/*
 * XREFs of VfCancelAdapterChannel @ 0x140B85FE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140610E4C (ViRemoveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B84B24 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B84E20 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

char __fastcall VfCancelAdapterChannel(int a1, __int64 a2, __int64 a3)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rbp
  __int64 v8; // r9
  char v9; // al
  char v10; // di
  __int64 v11; // rbx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v9 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, v8);
  v10 = v9;
  if ( AdapterInformationInternal )
  {
    if ( v9 )
    {
      v11 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, a3);
      if ( v11 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v11 + 48));
        if ( *(_QWORD *)(v11 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v11);
      }
    }
  }
  return v10;
}
