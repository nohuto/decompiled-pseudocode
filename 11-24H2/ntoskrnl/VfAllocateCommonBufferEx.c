/*
 * XREFs of VfAllocateCommonBufferEx @ 0x140B87640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140B9E150 (Below4gb_AllocateCommonBuffer_Entry.c)
 */

__int64 __fastcall VfAllocateCommonBufferEx(int a1, __int64 a2)
{
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  __int64 v6; // rbx
  __int64 result; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v6 = AdapterInformationInternal;
  if ( (MmVerifierData & 0x4000000) != 0 && AdapterInformationInternal )
    Below4gb_AllocateCommonBuffer_Entry(*(_QWORD *)(AdapterInformationInternal + 80));
  result = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  if ( result )
  {
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 204));
  }
  return result;
}
