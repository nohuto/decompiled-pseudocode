/*
 * XREFs of HalpIommuGetDeviceId @ 0x14054F980
 * Callers:
 *     IommuDomainAttachDevice @ 0x140563B20 (IommuDomainAttachDevice.c)
 *     IommupCreateDeviceId @ 0x140564960 (IommupCreateDeviceId.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1406F3394 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoQueryInterface @ 0x1407143B0 (IoQueryInterface.c)
 */

__int64 __fastcall HalpIommuGetDeviceId(__int64 a1, _QWORD *a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rbx
  int Interface; // edi
  int v6; // eax
  _BYTE v8[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v9; // [rsp+48h] [rbp-1h]

  memset_0(v8, 0, 0x50uLL);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x746C6644u);
  Interface = IoQueryInterface(a1, 0LL, &GUID_IOMMU_BUS_INTERFACE, 80LL, 2, DeviceAttachmentBaseRefWithTag, v8);
  ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x746C6644u);
  if ( Interface >= 0 )
  {
    v6 = guard_dispatch_icall_no_overrides(v9);
    Interface = v6;
    if ( v6 == -1073741789 || v6 >= 0 )
      Interface = -1073741823;
    guard_dispatch_icall_no_overrides(v9);
  }
  else if ( Interface != -1073741670 )
  {
    Interface = -1073741275;
  }
  *a2 = 0LL;
  return (unsigned int)Interface;
}
