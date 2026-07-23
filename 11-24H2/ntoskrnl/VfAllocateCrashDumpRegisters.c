/*
 * XREFs of VfAllocateCrashDumpRegisters @ 0x140B87870
 * Callers:
 *     <none>
 * Callees:
 *     VfDisableHalVerifier @ 0x14060F1D8 (VfDisableHalVerifier.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ADD_MAP_REGISTERS @ 0x140B86A18 (ADD_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140B86F40 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfAllocateCrashDumpRegisters(int a1, unsigned int *a2)
{
  __int64 AdapterInformationInternal; // rsi
  __int64 RealDmaAdapter; // rax
  __int64 v6; // rbx

  if ( KeGetCurrentIrql() > 2u )
    VfDisableHalVerifier();
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  v6 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    _InterlockedAdd((volatile signed __int32 *)(AdapterInformationInternal + 184), *a2);
    ADD_MAP_REGISTERS(AdapterInformationInternal, *a2, 0);
    if ( ViVerifyDma )
    {
      if ( !v6 )
        return -559026163LL;
    }
  }
  return v6;
}
