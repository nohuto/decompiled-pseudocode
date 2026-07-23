/*
 * XREFs of HalpIommuGetDeviceId @ 0x14054FBC0
 * Callers:
 *     IommuDomainAttachDevice @ 0x140564090 (IommuDomainAttachDevice.c)
 *     IommupCreateDeviceId @ 0x140564FBC (IommupCreateDeviceId.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1406FCDC4 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoQueryInterface @ 0x14071E040 (IoQueryInterface.c)
 */

__int64 __fastcall HalpIommuGetDeviceId(__int64 a1, _QWORD *a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rbx
  int Interface; // edi
  int v6; // eax
  __int64 v7; // rdx
  _BYTE v9[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v10; // [rsp+48h] [rbp-1h]

  memset_0(v9, 0, 0x50uLL);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x746C6644u);
  Interface = IoQueryInterface(
                a1,
                0,
                (unsigned int)&GUID_IOMMU_BUS_INTERFACE,
                80,
                2,
                (__int64)DeviceAttachmentBaseRefWithTag,
                v9);
  ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x746C6644u);
  if ( Interface >= 0 )
  {
    v6 = guard_dispatch_icall_no_overrides(v10, 0LL);
    Interface = v6;
    if ( v6 == -1073741789 )
    {
      v7 = 0LL;
    }
    else if ( v6 < 0 )
    {
LABEL_8:
      guard_dispatch_icall_no_overrides(v10, v7);
      goto LABEL_9;
    }
    Interface = -1073741823;
    goto LABEL_8;
  }
  if ( Interface != -1073741670 )
    Interface = -1073741275;
LABEL_9:
  *a2 = 0LL;
  return (unsigned int)Interface;
}
