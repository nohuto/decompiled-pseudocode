/*
 * XREFs of _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14081FD5C
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140980AE0 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        int a7)
{
  int v7; // r11d
  HANDLE v9; // rdx
  int v10; // ebx
  unsigned int v12; // r10d
  DEVPROPKEY **v14; // r9
  int v15; // r15d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rdi
  DEVPROPKEY *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v24; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v9 = 0LL;
  v10 = 0;
  v24 = 0;
  v12 = 0;
  Handle = 0LL;
  v14 = &off_140B3D6F0;
  v15 = a1;
  do
  {
    v16 = *v14;
    v17 = v14;
    if ( v7 == (*v14)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v17 = 0LL;
    ++v12;
    v14 += 4;
  }
  while ( v12 < 2 );
  if ( !v17 )
    return (unsigned int)-1073741264;
  if ( a5 != *((_DWORD *)v17 + 2) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v10 = CmOpenDeviceRegKey(v15, a2, 16, 0, 2, 0, (__int64)&Handle, 0LL);
    if ( v10 < 0 )
      goto LABEL_31;
    v9 = Handle;
  }
  v18 = v17[2];
  v19 = *((unsigned int *)v17 + 6);
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_26;
  v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
    v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
  if ( v20 )
  {
LABEL_26:
    if ( a3 )
      v9 = a3;
    v22 = PnpCtxRegSetValue(a1, v9, v18, v19, a6, a7);
    if ( v22 != -1073741444 )
    {
      if ( v22 < 0 )
        v10 = v22;
      goto LABEL_31;
    }
  }
  else
  {
    if ( *a6 == 0xFF )
      v24 = 1;
    if ( a3 )
      v9 = a3;
    v21 = PnpCtxRegSetValue(a1, v9, v18, v19, &v24, 4);
    if ( v21 != -1073741444 )
    {
      if ( v21 < 0 )
        v10 = v21;
      goto LABEL_31;
    }
  }
  v10 = -1073741810;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v10;
}
