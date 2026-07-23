/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B42D0
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1408B3D7C (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        _QWORD *a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rax
  int inited; // ebx
  _DWORD *v11; // r8
  _BYTE *v14; // r13
  int v15; // r15d
  unsigned int v16; // r12d
  unsigned int v17; // r10d
  DEVPROPKEY **v18; // rdx
  DEVPROPKEY *v19; // r9
  DEVPROPKEY **v20; // r11
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v25; // rax
  HANDLE v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 (__fastcall *v30)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v31; // eax
  int v32; // edi
  _DWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // [rsp+44h] [rbp-3Ch] BYREF
  int v37; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v38; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v39; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  char v43; // [rsp+D8h] [rbp+58h] BYREF

  v8 = a8;
  inited = 0;
  Handle = 0LL;
  v11 = a5;
  v39 = 0LL;
  v38 = 0LL;
  v37 = 0;
  *a5 = 0;
  *v8 = 0;
  v36 = 0;
  v14 = (_BYTE *)a6;
  v43 = 0;
  if ( a6 )
  {
    v15 = a7;
    v14 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  v17 = 0;
  v18 = &off_140B3D1B0;
  do
  {
    v19 = *v18;
    v20 = v18;
    if ( v16 == (*v18)->pid )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
      if ( !v21 )
        break;
    }
    v20 = 0LL;
    ++v17;
    v18 += 2;
  }
  while ( v17 < 3 );
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    inited = CmOpenDeviceInterfaceRegKey((_DWORD)a1, (_DWORD)a2, 48, (_DWORD)v19, 1, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_22;
    v11 = a5;
  }
  v22 = *(_DWORD *)(a4 + 16);
  if ( v22 != 2 )
  {
    if ( v22 == 3 )
    {
      v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( !v23 )
      {
        *a8 = 1;
        *v11 = 17;
        if ( v15 )
        {
          DestinationString = 0LL;
          inited = RtlInitUnicodeStringEx(&DestinationString, a2);
          if ( inited >= 0 )
          {
            if ( a1[36] )
              inited = guard_dispatch_icall_no_overrides(a1, &DestinationString);
            else
              inited = -1073741822;
          }
          if ( inited >= 0 )
            *v14 = 0;
        }
        else
        {
          inited = -1073741789;
        }
        goto LABEL_22;
      }
      goto LABEL_67;
    }
    if ( v22 == 256 )
    {
      v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( !v34 )
      {
        inited = CmOpenDeviceInterfaceRegKey((_DWORD)a1, (_DWORD)a2, 49, (_DWORD)v19, 1, 0, (__int64)&v39, 0LL);
        if ( inited < 0 )
          goto LABEL_22;
        v36 = v15;
        v32 = PnpCtxRegQueryValue(v35, v39, L"DeviceInstance", &v37, v14, &v36);
        ZwClose(v39);
        if ( v32 != -1073741772 && v32 != -1073741444 )
        {
          if ( !v32 || v32 == -1073741789 )
          {
            *a8 = v36;
            *a5 = 18;
            if ( v32 || !v15 )
              inited = -1073741789;
            goto LABEL_22;
          }
          goto LABEL_65;
        }
        goto LABEL_63;
      }
    }
LABEL_67:
    inited = -1073741264;
    goto LABEL_22;
  }
  v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
    v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
  if ( v25 )
    goto LABEL_67;
  v26 = Handle;
  if ( a3 )
    v26 = a3;
  if ( a1 && (v27 = a1[28]) != 0 )
    v28 = *(_QWORD *)(v27 + 8);
  else
    v28 = 0LL;
  v29 = RegRtlOpenKeyTransacted(v26, L"Device Parameters", 0LL, 1LL, &v38, v28);
  if ( v29 == -1073741772 || v29 == -1073741444 )
    goto LABEL_63;
  if ( v29 >= 0 )
  {
    v30 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1[65];
    v36 = v15;
    if ( !v30 || v30 == PnpRegQueryValueIndirect )
      v31 = PnpRegQueryValueIndirect(a1, v38, L"FriendlyName", &v37, v14, &v36, &v43);
    else
      v31 = guard_dispatch_icall_no_overrides(a1, v38);
    v32 = v31;
    ZwClose(v38);
    if ( v32 != -1073741772 && v32 != -1073741444 )
    {
      if ( !v32 || v32 == -1073741789 )
      {
        *a8 = v36;
        v33 = a5;
        *a5 = 18;
        if ( v32 || !v15 )
          inited = -1073741789;
        if ( v43 )
          *v33 = 25;
        goto LABEL_22;
      }
LABEL_65:
      inited = v32;
      goto LABEL_22;
    }
LABEL_63:
    inited = -1073741275;
    goto LABEL_22;
  }
  inited = v29;
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
