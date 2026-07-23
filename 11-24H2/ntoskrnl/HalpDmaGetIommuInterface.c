/*
 * XREFs of HalpDmaGetIommuInterface @ 0x140539F74
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E514 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406FD034 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x14071E040 (IoQueryInterface.c)
 */

__int64 __fastcall HalpDmaGetIommuInterface(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 2, a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a2[8] )
    {
      return 0LL;
    }
    else
    {
      guard_dispatch_icall_no_overrides(a2[1], v4);
      return 3221225474LL;
    }
  }
  return result;
}
