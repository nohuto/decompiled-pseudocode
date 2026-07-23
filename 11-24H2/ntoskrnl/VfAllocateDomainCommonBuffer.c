/*
 * XREFs of VfAllocateDomainCommonBuffer @ 0x14060F0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViGetAdapterInformation @ 0x140B8AE80 (ViGetAdapterInformation.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 *     ViHalTrackDomainCommonBuffer @ 0x140B8B310 (ViHalTrackDomainCommonBuffer.c)
 */

__int64 __fastcall VfAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *Pool2; // rdi
  __int64 RealDmaAdapter; // rbp
  unsigned int v12; // ebx
  int v13; // eax

  Pool2 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( !ViGetAdapterInformation(a1) || (Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x566C6148u)) != 0LL )
  {
    v13 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
    v12 = v13;
    if ( Pool2 )
    {
      if ( v13 < 0 )
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
  return v12;
}
