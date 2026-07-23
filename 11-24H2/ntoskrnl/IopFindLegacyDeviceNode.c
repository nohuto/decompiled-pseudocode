/*
 * XREFs of IopFindLegacyDeviceNode @ 0x140AAA1C8
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1409BE034 (IopLegacyResourceAllocation.c)
 * Callees:
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14072B9FC (IopCreateRootEnumeratedDeviceObject.c)
 *     PipAllocateDeviceNode @ 0x140979B04 (PipAllocateDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     IopDestroyDeviceNode @ 0x1409BD84C (IopDestroyDeviceNode.c)
 */

__int64 __fastcall IopFindLegacyDeviceNode(struct _DRIVER_OBJECT *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int DeviceNode; // ebx
  void *v9; // rcx
  unsigned int v10; // eax
  PVOID v11; // rsi
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PDEVICE_OBJECT v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  DeviceNode = -1073741823;
  if ( !a2 )
  {
    v12 = (_QWORD *)IopLegacyDeviceNode;
    P = (PVOID)IopLegacyDeviceNode;
    v13 = IopLegacyDeviceNode;
    v14 = IopLegacyDeviceNode;
    if ( IopLegacyDeviceNode )
    {
      v15 = IopLegacyDeviceNode;
      v16 = IopLegacyDeviceNode;
      do
      {
        v14 = v16;
        if ( *(struct _DRIVER_OBJECT **)(v15 + 432) == a1 )
          break;
        v12 = (_QWORD *)*v12;
        P = v12;
        v13 = (__int64)v12;
        v15 = (__int64)v12;
        v16 = (__int64)v12;
        v14 = (__int64)v12;
      }
      while ( v12 );
    }
    if ( v13 )
    {
      *a4 = *(_QWORD *)(v14 + 32);
      *a3 = v12;
      return 0;
    }
    DeviceObject = 0LL;
    DeviceNode = IopCreateRootEnumeratedDeviceObject(&DeviceObject);
    if ( (DeviceNode & 0x80000000) != 0 )
      return DeviceNode;
    v17 = DeviceObject;
    v18 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    DeviceNode = PipAllocateDeviceNode((__int64)v18, (__int64)&P);
    if ( DeviceNode != -1073740946 )
    {
      v19 = P;
      if ( P )
      {
        v17->DriverObject = a1;
        PipSetDevNodeFlags((__int64)v19, 0x20001u);
        PipSetDevNodeState((__int64)v19, 772);
        v20 = IopLegacyDeviceNode;
        v19[54] = a1;
        *v19 = v20;
        if ( v20 )
          *(_QWORD *)(v20 + 8) = v19;
        IopLegacyDeviceNode = (__int64)v19;
        *a4 = v17;
        *a3 = v19;
        return DeviceNode;
      }
    }
    IoDeleteDevice(v17);
    return (unsigned int)-1073741670;
  }
  v9 = *(void **)(*(_QWORD *)(a2 + 312) + 40LL);
  P = v9;
  if ( v9 )
  {
    *a4 = a2;
    *a3 = v9;
    return 0;
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x1000) == 0 )
  {
    v10 = PipAllocateDeviceNode(a2, (__int64)&P);
    v11 = P;
    DeviceNode = v10;
    if ( P )
    {
      if ( v10 != -1073740946 )
      {
        PipSetDevNodeFlags((__int64)P, 0x20000u);
        *a4 = a2;
        *a3 = v11;
        return 0;
      }
      IopDestroyDeviceNode((char *)P);
      return DeviceNode;
    }
    return (unsigned int)-1073741670;
  }
  return DeviceNode;
}
