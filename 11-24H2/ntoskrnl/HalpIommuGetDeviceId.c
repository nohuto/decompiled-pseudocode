/*
 * XREFs of HalpIommuGetDeviceId @ 0x140552280
 * Callers:
 *     IommuDomainAttachDevice @ 0x140566390 (IommuDomainAttachDevice.c)
 *     IommupCreateDeviceId @ 0x140567530 (IommupCreateDeviceId.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x1406FF184 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoQueryInterface @ 0x1407204B0 (IoQueryInterface.c)
 */

__int64 __fastcall HalpIommuGetDeviceId(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  void *DeviceAttachmentBaseRefWithTag; // rbx
  int Interface; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char v14[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v15; // [rsp+48h] [rbp-1h]
  __int64 v16; // [rsp+B8h] [rbp+6Fh] BYREF

  memset_0(v14, 0, 0x50uLL);
  v16 = 0LL;
  v4 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x746C6644u);
  Interface = IoQueryInterface(
                a1,
                0,
                (unsigned int)&GUID_IOMMU_BUS_INTERFACE,
                80,
                2,
                (__int64)DeviceAttachmentBaseRefWithTag,
                v14);
  ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x746C6644u);
  if ( Interface >= 0 )
  {
    v7 = guard_dispatch_icall_no_overrides(v15, 0LL, 0LL, &v16);
    Interface = v7;
    if ( v7 == -1073741789 )
    {
      v8 = v16;
      if ( v16 )
      {
        v12 = HalpMmAllocCtxAlloc(v9, v16);
        v4 = v12;
        if ( v12 )
          Interface = guard_dispatch_icall_no_overrides(v15, v16, v12, 0LL);
        else
          Interface = -1073741670;
        goto LABEL_11;
      }
    }
    else if ( v7 < 0 )
    {
LABEL_11:
      guard_dispatch_icall_no_overrides(v15, v8, v10, v11);
      goto LABEL_12;
    }
    Interface = -1073741823;
    goto LABEL_11;
  }
  if ( Interface != -1073741670 )
    Interface = -1073741275;
LABEL_12:
  *a2 = v4;
  return (unsigned int)Interface;
}
