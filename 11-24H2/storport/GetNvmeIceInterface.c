/*
 * XREFs of GetNvmeIceInterface @ 0x1401839B0
 * Callers:
 *     RegisterForNvmeIceInterfaceCallback @ 0x140183D80 (RegisterForNvmeIceInterfaceCallback.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaQueryInterface @ 0x14003C01C (RaQueryInterface.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GetNvmeIceInterface(struct _UNICODE_STRING *a1, _QWORD *a2, _QWORD *a3)
{
  _WORD *v5; // rbx
  char v6; // bp
  unsigned int v7; // esi
  int DeviceObjectPointer; // edi
  __int64 Pool; // rax
  int Interface; // eax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  DeviceObject = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 72;
  DeviceObjectPointer = IoGetDeviceObjectPointer(a1, 0x180u, (PFILE_OBJECT *)&Object, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() && EnableNVMeICEV2 )
    {
      v7 = 168;
      v6 = 1;
    }
    Pool = RaidAllocatePool(64LL, v7, 1917018450LL, 0LL);
    v5 = (_WORD *)Pool;
    if ( !Pool )
    {
      DeviceObjectPointer = -1073741670;
      goto LABEL_17;
    }
    if ( v6 )
    {
      Interface = RaQueryInterface(DeviceObject, (unsigned __int64)&GUID_NVME_ICE_INTERFACE_V2, v7, 2u, Pool);
      DeviceObjectPointer = Interface;
      if ( Interface >= 0 )
      {
        if ( v5[1] != 2 )
        {
LABEL_10:
          DeviceObjectPointer = -1073741637;
          goto LABEL_17;
        }
        *a3 = v5;
LABEL_16:
        v5 = 0LL;
        goto LABEL_17;
      }
      if ( Interface != -1073741637 )
        goto LABEL_17;
    }
    DeviceObjectPointer = RaQueryInterface(
                            DeviceObject,
                            (unsigned __int64)&GUID_NVME_ICE_INTERFACE,
                            v7,
                            1u,
                            (__int64)v5);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_17;
    if ( v5[1] != 1 )
      goto LABEL_10;
    *a2 = v5;
    goto LABEL_16;
  }
LABEL_17:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72436152u);
  return (unsigned int)DeviceObjectPointer;
}
