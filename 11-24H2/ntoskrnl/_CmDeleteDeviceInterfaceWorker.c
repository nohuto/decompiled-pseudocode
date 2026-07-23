/*
 * XREFs of _CmDeleteDeviceInterfaceWorker @ 0x140818ED8
 * Callers:
 *     _CmDeleteDeviceInterface @ 0x1409AABD0 (_CmDeleteDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140818B04 (_CmDeleteDeviceInterfaceRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x14081CA00 (_CmRaiseDeleteEvent.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1408AEE34 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1408B3D7C (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceWorker(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  int v4; // ebx
  int *v7; // r14
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // eax
  void *Pool2; // rdi
  int v12; // r14d
  int DeviceInterfaceMappedPropertyKeys; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rbp
  unsigned int i; // ebp
  int v17; // eax
  __int64 v18; // r9
  _DWORD v20[4]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v21[0] = 768;
    v7 = v21;
    v21[1] = 512;
    v8 = 0;
    v21[2] = 256;
    while ( v8 < 3 )
    {
      v9 = *v7;
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, *v7 | 0x30u, a4, 1);
      if ( v10 && v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637
        || (v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, v9 | 0x31u, a4, 0)) != 0
        && v10 != -1073741772
        && v10 != -1073741811
        && v10 != -1073741637
        && v10 != -1073741535 )
      {
        v4 = v10;
        if ( v10 < 0 )
          return (unsigned int)v4;
        break;
      }
      ++v8;
      ++v7;
    }
    Pool2 = 0LL;
    v12 = 0;
    v20[0] = 0;
    while ( 1 )
    {
      LOBYTE(a4) = 1;
      DeviceInterfaceMappedPropertyKeys = CmGetDeviceInterfaceMappedPropertyKeys(
                                            a1,
                                            a2,
                                            0,
                                            a4,
                                            (__int64)Pool2,
                                            v12,
                                            (__int64)v20);
      if ( DeviceInterfaceMappedPropertyKeys != -1073741789 )
        break;
      v12 = v20[0];
      v15 = 20LL * v20[0];
      if ( v15 > 0xFFFFFFFF )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741811;
        goto LABEL_26;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v15, 0x52504E50u);
      if ( !Pool2 )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741801;
LABEL_26:
        v4 = DeviceInterfaceMappedPropertyKeys;
        goto LABEL_45;
      }
    }
    if ( DeviceInterfaceMappedPropertyKeys && DeviceInterfaceMappedPropertyKeys != -1073741275 )
      goto LABEL_26;
    for ( i = 0; i < v20[0]; ++i )
    {
      v17 = CmSetDeviceInterfaceMappedProperty(a1, a2, (unsigned int)Pool2 + 20 * i, 0, 0LL, 0);
      if ( v17 && v17 != -1073741275 && v17 != -1073741790 && v17 != -1073741802 && v17 != -1073741637 )
      {
        v4 = v17;
        break;
      }
    }
    if ( v4 >= 0 )
    {
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 48, v14, 1);
      if ( DeviceInterfaceMappedPropertyKeys
        && DeviceInterfaceMappedPropertyKeys != -1073741772
        && DeviceInterfaceMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_26;
      }
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 49, v18, 0);
      if ( DeviceInterfaceMappedPropertyKeys )
      {
        if ( DeviceInterfaceMappedPropertyKeys != -1073741772
          && DeviceInterfaceMappedPropertyKeys != -1073741811
          && DeviceInterfaceMappedPropertyKeys != -1073741535 )
        {
          goto LABEL_26;
        }
      }
      CmRaiseDeleteEvent(a1, a2, 3LL);
    }
LABEL_45:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
