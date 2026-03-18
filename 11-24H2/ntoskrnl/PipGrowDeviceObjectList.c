/*
 * XREFs of PipGrowDeviceObjectList @ 0x140A0C3C8
 * Callers:
 *     PipDeviceObjectListAdd @ 0x140A0CA30 (PipDeviceObjectListAdd.c)
 * Callees:
 *     PipDeviceObjectListAdd @ 0x140A0CA30 (PipDeviceObjectListAdd.c)
 *     PipFreeDeviceObjectList @ 0x140A0CAD8 (PipFreeDeviceObjectList.c)
 *     PiAllocateDeviceObjectList @ 0x140A0D820 (PiAllocateDeviceObjectList.c)
 *     PipDeviceObjectListElementAt @ 0x140A56D84 (PipDeviceObjectListElementAt.c)
 */

__int64 __fastcall PipGrowDeviceObjectList(__int64 *a1)
{
  unsigned int *v1; // rdi
  unsigned int v2; // ebx
  __int64 DeviceObjectList; // rax
  unsigned int i; // esi
  unsigned int v7; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+38h] BYREF
  __int64 v9; // [rsp+70h] [rbp+40h] BYREF
  __int64 v10; // [rsp+78h] [rbp+48h] BYREF

  v1 = (unsigned int *)*a1;
  v2 = 0;
  v9 = 0LL;
  v8 = 0;
  v7 = 0;
  DeviceObjectList = PiAllocateDeviceObjectList(v1[3], 2 * v1[1]);
  v10 = DeviceObjectList;
  if ( DeviceObjectList )
  {
    for ( i = 0; i < *v1; ++i )
    {
      PipDeviceObjectListElementAt((_DWORD)v1, i, (unsigned int)&v9, (unsigned int)&v8, (__int64)&v7);
      PipDeviceObjectListAdd(&v10, v9, v8, v7);
    }
    PipFreeDeviceObjectList(v1);
    DeviceObjectList = v10;
  }
  else
  {
    v2 = -1073741670;
  }
  *a1 = DeviceObjectList;
  return v2;
}
