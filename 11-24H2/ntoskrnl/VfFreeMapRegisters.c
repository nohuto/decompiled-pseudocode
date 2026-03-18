/*
 * XREFs of VfFreeMapRegisters @ 0x140B867E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     ViRemoveChannelWcb @ 0x140610E4C (ViRemoveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B84E20 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeMapRegisters(int a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbp
  char v7; // r14
  __int64 AdapterInformationInternal; // rsi
  __int64 RealDmaAdapter; // rbx
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rbx

  v6 = 0LL;
  v7 = 0;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v6 = a2;
    if ( a2 == -559026163 )
    {
      a2 = 0LL;
      v7 = 1;
      v6 = 0LL;
    }
    else if ( a2 && *(_DWORD *)a2 == -1393569779 )
    {
      a2 = *(_QWORD *)(a2 + 48);
    }
  }
  guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, v10);
  if ( AdapterInformationInternal )
  {
    if ( v7 == 1 )
      v6 = -559026163LL;
    v11 = ViRemoveChannelWcb(AdapterInformationInternal, v6, 0LL);
    v12 = (_QWORD *)v11;
    if ( v11 )
    {
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v11 + 48));
      if ( v12[12] )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v12);
    }
  }
}
