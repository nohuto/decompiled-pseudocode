/*
 * XREFs of HalpDmaGetIommuInterface @ 0x14053C6E8
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x140550BD4 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FF3F4 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x1407204B0 (IoQueryInterface.c)
 */

__int64 __fastcall HalpDmaGetIommuInterface(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  result = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 2, a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a2[8] )
    {
      return 0LL;
    }
    else
    {
      guard_dispatch_icall_no_overrides(a2[1], v4, v5, v6);
      return 3221225474LL;
    }
  }
  return result;
}
