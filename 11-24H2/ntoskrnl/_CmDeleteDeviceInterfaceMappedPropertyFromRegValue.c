/*
 * XREFs of _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AF360
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1408AEE34 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceMappedPropertyFromRegValue(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // ebx
  unsigned int v10; // r8d
  DEVPROPKEY **v11; // rcx
  DEVPROPKEY *v12; // r9
  DEVPROPKEY **v13; // r10
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  HANDLE v24[5]; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0;
  v24[0] = 0LL;
  Handle = 0LL;
  if ( v4 < 2 )
    return (unsigned int)-1073741264;
  v10 = 0;
  v11 = &off_140B3D1B0;
  do
  {
    v12 = *v11;
    v13 = v11;
    if ( v4 == (*v11)->pid )
    {
      v14 = *(_QWORD *)a4 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v12->fmtid.Data1 )
        v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !v14 )
        break;
    }
    v13 = 0LL;
    ++v10;
    v11 += 2;
  }
  while ( v10 < 3 );
  if ( !v13 )
    return (unsigned int)-1073741264;
  if ( a3 || (v5 = CmOpenDeviceInterfaceRegKey(a1, a2, 48, (_DWORD)v12, 1, 0, (__int64)v24, 0LL), v5 >= 0) )
  {
    v15 = *(_DWORD *)(a4 + 16);
    if ( v15 == 2 )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
      if ( !v16 )
      {
        v17 = (int)v24[0];
        if ( a3 )
          v17 = a3;
        v18 = PnpCtxRegOpenKey(a1, v17, (unsigned int)L"Device Parameters", 0, 2, (__int64)&Handle);
        if ( v18 != -1073741772 && v18 != -1073741444 )
        {
          if ( v18 < 0
            || (v18 = PnpCtxRegDeleteValue(v19, Handle, L"FriendlyName"), v18 != -1073741772)
            && v18 != -1073741444
            && v18 < 0 )
          {
            v5 = v18;
          }
        }
        goto LABEL_40;
      }
      goto LABEL_39;
    }
    if ( v15 != 3 )
      goto LABEL_37;
    v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
      v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
    if ( v20 )
    {
LABEL_37:
      if ( v15 != 4 )
        goto LABEL_47;
      v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
      if ( v21 )
      {
LABEL_47:
        if ( v15 != 256 )
          goto LABEL_39;
        v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( v22 )
        {
LABEL_39:
          v5 = -1073741264;
          goto LABEL_40;
        }
      }
    }
    v5 = -1073741790;
  }
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( v24[0] )
    ZwClose(v24[0]);
  return (unsigned int)v5;
}
