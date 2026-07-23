/*
 * XREFs of _CmDeleteDeviceContainerWorker @ 0x14081A19C
 * Callers:
 *     _CmDeleteDeviceContainer @ 0x140819D14 (_CmDeleteDeviceContainer.c)
 * Callees:
 *     _CmDeleteDeviceContainerRegKey @ 0x140819E3C (_CmDeleteDeviceContainerRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x14081CA00 (_CmRaiseDeleteEvent.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x140A959B4 (_CmSetDeviceContainerMappedProperty.c)
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x140A988B4 (_CmGetDeviceContainerMappedPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceContainerWorker(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  int v4; // edi
  unsigned int *v7; // r14
  int i; // ebx
  int v9; // eax
  void *Pool2; // rbx
  unsigned int v11; // ebp
  int DeviceContainerMappedPropertyKeys; // eax
  int v13; // edx
  int v14; // r8d
  unsigned __int64 v15; // r14
  __int64 j; // r11
  int v17; // eax
  int v18; // r11d
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v20 = 336;
    v7 = &v20;
    for ( i = 0; !i; i = 1 )
    {
      v9 = CmDeleteDeviceContainerRegKey(a1, a2, *v7);
      if ( v9 && v9 != -1073741772 && v9 != -1073741811 && v9 != -1073741637 )
      {
        v4 = v9;
        if ( v9 < 0 )
          return (unsigned int)v4;
        break;
      }
      ++v7;
    }
    Pool2 = 0LL;
    v11 = 0;
    v20 = 0;
    while ( 1 )
    {
      DeviceContainerMappedPropertyKeys = CmGetDeviceContainerMappedPropertyKeys(
                                            a1,
                                            a2,
                                            a3,
                                            a4,
                                            (__int64)Pool2,
                                            v11,
                                            (__int64)&v20);
      if ( DeviceContainerMappedPropertyKeys != -1073741789 )
        break;
      v11 = v20;
      v15 = 20LL * v20;
      if ( v15 > 0xFFFFFFFF )
      {
        DeviceContainerMappedPropertyKeys = -1073741811;
        goto LABEL_21;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v15, 0x52504E50u);
      if ( !Pool2 )
      {
        DeviceContainerMappedPropertyKeys = -1073741801;
LABEL_21:
        v4 = DeviceContainerMappedPropertyKeys;
        goto LABEL_36;
      }
    }
    if ( DeviceContainerMappedPropertyKeys && DeviceContainerMappedPropertyKeys != -1073741275 )
      goto LABEL_21;
    for ( j = 0LL; (unsigned int)j < v20; j = (unsigned int)(v18 + 1) )
    {
      v17 = CmSetDeviceContainerMappedProperty(5 * (int)j, v13, v14, 0, (__int64)Pool2 + 20 * j);
      if ( v17 && v17 != -1073741275 && v17 != -1073741790 && v17 != -1073741802 && v17 != -1073741637 )
      {
        v4 = v17;
        break;
      }
    }
    if ( v4 >= 0 )
    {
      DeviceContainerMappedPropertyKeys = CmDeleteDeviceContainerRegKey(a1, a2, 0x50u);
      if ( DeviceContainerMappedPropertyKeys
        && DeviceContainerMappedPropertyKeys != -1073741772
        && DeviceContainerMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_21;
      }
      CmRaiseDeleteEvent(a1, a2, 5LL);
    }
LABEL_36:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
