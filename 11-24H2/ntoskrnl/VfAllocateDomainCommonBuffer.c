/*
 * XREFs of VfAllocateDomainCommonBuffer @ 0x140610B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViGetAdapterInformation @ 0x140B88E80 (ViGetAdapterInformation.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViHalTrackDomainCommonBuffer @ 0x140B89310 (ViHalTrackDomainCommonBuffer.c)
 */

__int64 __fastcall VfAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *Pool2; // rdi
  __int64 RealDmaAdapter; // rbp
  unsigned int v14; // ebx
  int v15; // eax

  Pool2 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( !ViGetAdapterInformation(a1) || (Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL)) != 0LL )
  {
    v15 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, a3, a4);
    v14 = v15;
    if ( Pool2 )
    {
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        Pool2[2] = *a8;
        ViHalTrackDomainCommonBuffer(Pool2);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v14;
}
