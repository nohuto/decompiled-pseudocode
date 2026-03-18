/*
 * XREFs of VfAllocateCommonBufferWithBounds @ 0x140B85790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140B9C150 (Below4gb_AllocateCommonBuffer_Entry.c)
 */

__int64 __fastcall VfAllocateCommonBufferWithBounds(int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  __int64 v10; // rbx
  __int64 result; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v10 = AdapterInformationInternal;
  if ( AdapterInformationInternal && (MmVerifierData & 0x4000000) != 0 )
    Below4gb_AllocateCommonBuffer_Entry(*(_QWORD *)(AdapterInformationInternal + 80));
  result = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, a4);
  if ( result )
  {
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 204));
  }
  return result;
}
