/*
 * XREFs of _CmDeleteDevicePanelWorker @ 0x14081D60C
 * Callers:
 *     _CmDeleteDevicePanel @ 0x14081D10C (_CmDeleteDevicePanel.c)
 * Callees:
 *     _CmRaiseDeleteEvent @ 0x14081CA00 (_CmRaiseDeleteEvent.c)
 *     _CmDeleteDevicePanelRegKey @ 0x14081D234 (_CmDeleteDevicePanelRegKey.c)
 *     _CmGetDevicePanelMappedPropertyKeys @ 0x14081DC10 (_CmGetDevicePanelMappedPropertyKeys.c)
 *     _CmSetDevicePanelMappedProperty @ 0x14081E420 (_CmSetDevicePanelMappedProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDevicePanelWorker(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  int v4; // edi
  unsigned int *v7; // r14
  int i; // ebx
  int v9; // eax
  void *Pool2; // rbx
  unsigned int v11; // ebp
  int DevicePanelMappedPropertyKeys; // eax
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
    v20 = 352;
    v7 = &v20;
    for ( i = 0; !i; i = 1 )
    {
      v9 = CmDeleteDevicePanelRegKey(a1, a2, *v7);
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
      DevicePanelMappedPropertyKeys = CmGetDevicePanelMappedPropertyKeys(
                                        a1,
                                        a2,
                                        a3,
                                        a4,
                                        (__int64)Pool2,
                                        v11,
                                        (__int64)&v20);
      if ( DevicePanelMappedPropertyKeys != -1073741789 )
        break;
      v11 = v20;
      v15 = 20LL * v20;
      if ( v15 > 0xFFFFFFFF )
      {
        DevicePanelMappedPropertyKeys = -1073741811;
        goto LABEL_21;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v15, 0x52504E50u);
      if ( !Pool2 )
      {
        DevicePanelMappedPropertyKeys = -1073741801;
LABEL_21:
        v4 = DevicePanelMappedPropertyKeys;
        goto LABEL_36;
      }
    }
    if ( DevicePanelMappedPropertyKeys && DevicePanelMappedPropertyKeys != -1073741275 )
      goto LABEL_21;
    for ( j = 0LL; (unsigned int)j < v20; j = (unsigned int)(v18 + 1) )
    {
      v17 = CmSetDevicePanelMappedProperty(5 * (int)j, v13, v14, 0, (__int64)Pool2 + 20 * j);
      if ( v17 && v17 != -1073741275 && v17 != -1073741790 && v17 != -1073741802 && v17 != -1073741637 )
      {
        v4 = v17;
        break;
      }
    }
    if ( v4 >= 0 )
    {
      DevicePanelMappedPropertyKeys = CmDeleteDevicePanelRegKey(a1, a2, 0x60u);
      if ( DevicePanelMappedPropertyKeys
        && DevicePanelMappedPropertyKeys != -1073741772
        && DevicePanelMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_21;
      }
      CmRaiseDeleteEvent(a1, a2, 6u);
    }
LABEL_36:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
