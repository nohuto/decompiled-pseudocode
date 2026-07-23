/*
 * XREFs of _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408AEF9C
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1408AEE34 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140821834 (_RegRtlOpenPredefinedKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     _RegRtlCreateKeyTransacted @ 0x140928644 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x140928794 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlSetValue @ 0x14097EB88 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        ULONG a7)
{
  unsigned int v7; // r11d
  int v12; // ebx
  unsigned int v14; // r9d
  DEVPROPKEY **v15; // rcx
  DEVPROPKEY *v16; // r10
  DEVPROPKEY **v17; // r8
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  HANDLE v24; // rsi
  __int64 v25; // rax
  int inited; // edi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int CreateOptions; // [rsp+30h] [rbp-69h]
  HANDLE v31; // [rsp+58h] [rbp-41h] BYREF
  HANDLE v32; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+67h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  KeyHandle = 0LL;
  v32 = 0LL;
  v12 = 0;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v14 = 0;
  v15 = &off_140B3D1B0;
  do
  {
    v16 = *v15;
    v17 = v15;
    if ( v7 == (*v15)->pid )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v22 )
        break;
    }
    ++v14;
    v15 += 2;
    v17 = 0LL;
  }
  while ( v14 < 3 );
  if ( !v17 )
    return (unsigned int)-1073741264;
  v18 = *((_DWORD *)v17 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 == 18 )
        goto LABEL_9;
    }
    else if ( a5 < 2 )
    {
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
LABEL_9:
  if ( !a3 )
  {
    v12 = CmOpenDeviceInterfaceRegKey(a1, a2, 48, v14, 1, 0, (__int64)&Handle, 0LL);
    if ( v12 < 0 )
      goto LABEL_19;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 == 2 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( !v23 )
    {
      v24 = Handle;
      if ( a3 )
        v24 = a3;
      if ( a1 && (v25 = *(_QWORD *)(a1 + 224)) != 0 )
      {
        LOBYTE(CreateOptions) = 0;
        inited = RegRtlCreateKeyTransacted(
                   v24,
                   L"Device Parameters",
                   0LL,
                   2LL,
                   0LL,
                   CreateOptions,
                   &KeyHandle,
                   0LL,
                   *(_QWORD *)(v25 + 8));
      }
      else
      {
        v31 = 0LL;
        memset(&ObjectAttributes, 0, 44);
        DestinationString = 0LL;
        if ( !(unsigned __int8)RegRtlIsPredefinedKey(v24)
          || (inited = RegRtlOpenPredefinedKey(v27, (__int64)&v31), inited >= 0) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, L"Device Parameters");
          if ( inited >= 0 )
          {
            if ( v31 )
              v24 = v31;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v24;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 704;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            inited = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL);
          }
        }
        if ( v31 )
          ZwClose(v31);
      }
      if ( inited == -1073741444 )
      {
LABEL_18:
        v12 = -1073741772;
        goto LABEL_19;
      }
      if ( inited < 0 )
      {
        v12 = inited;
        goto LABEL_19;
      }
      v21 = RegRtlSetValue(KeyHandle, a7);
LABEL_17:
      if ( v21 != -1073741444 )
      {
        if ( v21 < 0 )
          v12 = v21;
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    goto LABEL_60;
  }
  if ( v19 != 256 )
  {
    if ( v19 == 3 )
    {
      v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( !v28 )
        goto LABEL_69;
    }
    if ( v19 == 4 )
    {
      v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
        v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
      if ( !v29 )
      {
LABEL_69:
        v12 = -1073741790;
        goto LABEL_19;
      }
    }
    goto LABEL_60;
  }
  v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v20 )
  {
LABEL_60:
    v12 = -1073741264;
    goto LABEL_19;
  }
  v12 = CmOpenDeviceInterfaceRegKey(a1, a2, 49, v14, 2, 0, (__int64)&v32, 0LL);
  if ( v12 >= 0 )
  {
    v21 = RegRtlSetValue(v32, a7);
    goto LABEL_17;
  }
LABEL_19:
  if ( v32 )
    ZwClose(v32);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
