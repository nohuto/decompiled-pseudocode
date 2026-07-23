/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B3FA8
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1408B3D7C (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     _CmGetDeviceInterfaceReferenceString @ 0x1408B4F88 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1408C9070 (_CmGetDeviceInterfaceClassGuid.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  _DWORD *v9; // rsi
  int v10; // r13d
  __int64 v11; // r14
  int DeviceInterfaceClassGuid; // ebx
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  int DeviceInterfaceReferenceString; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int ObjectProperty; // eax
  __int64 v22; // rax
  __int64 Pool2; // rax
  void *v24; // r15
  unsigned int v25; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v26[3]; // [rsp+64h] [rbp-Ch] BYREF
  int v27; // [rsp+B0h] [rbp+40h]
  int v29; // [rsp+C8h] [rbp+58h] BYREF

  v27 = a1;
  v8 = a5;
  v9 = a8;
  v10 = a2;
  v11 = a6;
  DeviceInterfaceClassGuid = 0;
  v29 = 0;
  *a5 = 0;
  *v9 = 0;
  v25 = 0;
  v26[0] = 0;
  if ( v11 )
  {
    v13 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 >= 2 )
  {
    switch ( v14 )
    {
      case 0xAu:
        v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
          v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
        if ( !v20 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             3,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_DeviceInterface_FriendlyName,
                             (__int64)v8,
                             v11,
                             v13,
                             (__int64)&v29,
                             0);
          DeviceInterfaceClassGuid = ObjectProperty;
          if ( !ObjectProperty || ObjectProperty == -1073741789 )
            *v9 = v29;
        }
        break;
      case 4u:
        v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
          v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
        if ( !v16 )
        {
          *v9 = 16;
          *v8 = 13;
          if ( v13 < 0x10 )
            DeviceInterfaceClassGuid = -1073741789;
          else
            DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(a1, a2, v11);
        }
        break;
      case 5u:
        v17 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1 )
          v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data4;
        if ( !v17 )
        {
          DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(a1, a2, v11, v13 >> 1, &v25);
          DeviceInterfaceClassGuid = DeviceInterfaceReferenceString;
          if ( DeviceInterfaceReferenceString == -1073741772 )
          {
            DeviceInterfaceClassGuid = -1073741275;
          }
          else if ( !DeviceInterfaceReferenceString || DeviceInterfaceReferenceString == -1073741789 )
          {
            v19 = 2LL * v25;
            if ( v19 > 0xFFFFFFFF )
            {
              DeviceInterfaceClassGuid = -1073741595;
            }
            else
            {
              *v9 = v19;
              *v8 = 18;
            }
          }
        }
        break;
      case 2u:
        v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
          v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
        if ( !v22 )
        {
          Pool2 = ExAllocatePool2(0x100uLL, 0x190uLL, 0x52504E50u);
          v24 = (void *)Pool2;
          if ( Pool2 )
          {
            DeviceInterfaceClassGuid = PnpGetObjectProperty(
                                         v27,
                                         v10,
                                         3,
                                         a3,
                                         0LL,
                                         (__int64)&DEVPKEY_Device_InstanceId,
                                         (__int64)v26,
                                         Pool2,
                                         400,
                                         (__int64)&v29,
                                         0);
            if ( DeviceInterfaceClassGuid >= 0 )
            {
              if ( v26[0] != 18
                || (DeviceInterfaceClassGuid = PnpGetObjectProperty(
                                                 v27,
                                                 (_DWORD)v24,
                                                 1,
                                                 0,
                                                 0LL,
                                                 (__int64)&DEVPKEY_Device_ContainerId,
                                                 (__int64)v8,
                                                 v11,
                                                 v13,
                                                 (__int64)&v29,
                                                 0),
                    DeviceInterfaceClassGuid == -1073741772) )
              {
                DeviceInterfaceClassGuid = -1073741275;
              }
            }
            ExFreePoolWithTag(v24, 0);
            if ( !DeviceInterfaceClassGuid || DeviceInterfaceClassGuid == -1073741789 )
              *v9 = v29;
          }
          else
          {
            DeviceInterfaceClassGuid = -1073741801;
          }
        }
        break;
    }
  }
  else
  {
    return (unsigned int)-1073741264;
  }
  return (unsigned int)DeviceInterfaceClassGuid;
}
