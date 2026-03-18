/*
 * XREFs of VfFlushAdapterBuffersEx @ 0x140B863E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B84FC0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFlushAdapterBuffersEx(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 RealDmaAdapter; // rsi
  __int64 AdapterInformationInternal; // rdi
  __int64 result; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
    VF_ASSERT_MAX_IRQL();
  result = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, a4);
  if ( AdapterInformationInternal )
  {
    if ( !(_DWORD)result )
      _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
  }
  return result;
}
