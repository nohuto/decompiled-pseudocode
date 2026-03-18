/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x140B85870
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x140610C18 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ADD_MAP_REGISTERS @ 0x140B84A18 (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegisters(int a1, unsigned int *a2)
{
  __int64 AdapterInformationInternal; // rsi
  __int64 RealDmaAdapter; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx

  if ( KeGetCurrentIrql() > 2u )
    VfDisableHalVerifier();
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  v8 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, v6, v7);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    _InterlockedAdd((volatile signed __int32 *)(AdapterInformationInternal + 184), *a2);
    ADD_MAP_REGISTERS(AdapterInformationInternal, *a2, 0);
    if ( ViVerifyDma )
    {
      if ( !v8 )
        return -559026163LL;
    }
  }
  return v8;
}
