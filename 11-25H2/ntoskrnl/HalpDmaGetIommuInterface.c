/*
 * XREFs of HalpDmaGetIommuInterface @ 0x140539EE4
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E274 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x1406F3604 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x1407143B0 (IoQueryInterface.c)
 */

__int64 __fastcall HalpDmaGetIommuInterface(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int16 v5; // [rsp+20h] [rbp-28h]

  v5 = 2;
  result = IoQueryInterface(a1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, v5, a1, a2);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a2 + 64) )
    {
      return 0LL;
    }
    else
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 8), v4);
      return 3221225474LL;
    }
  }
  return result;
}
