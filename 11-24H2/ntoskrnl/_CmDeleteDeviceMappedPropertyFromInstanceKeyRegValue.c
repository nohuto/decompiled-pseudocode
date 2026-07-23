/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14081E888
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140980AE0 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue(__int64 a1, int a2, void *a3, __int64 a4)
{
  int v4; // ebp
  DEVPROPKEY **v5; // r10
  int v7; // ebx
  HANDLE v8; // rdx
  unsigned int v10; // r11d
  int v11; // r15d
  DEVPROPKEY *v12; // r8
  DEVPROPKEY **v13; // rdi
  int v14; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = &off_140B3D6F0;
  v7 = 0;
  v8 = 0LL;
  Handle[0] = 0LL;
  v10 = 0;
  v11 = a1;
  do
  {
    v12 = *v5;
    v13 = v5;
    if ( v4 == (*v5)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v12->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v13 = 0LL;
    ++v10;
    v5 += 4;
  }
  while ( v10 < 2 );
  if ( !v13 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_12;
  v7 = CmOpenDeviceRegKey(v11, a2, 16, 0, 2, 0, (__int64)Handle, 0LL);
  if ( v7 >= 0 )
  {
    v8 = Handle[0];
LABEL_12:
    if ( a3 )
      v8 = a3;
    v14 = PnpCtxRegDeleteValue(a1, v8, v13[2]);
    if ( v14 != -1073741772 && v14 != -1073741444 && v14 < 0 )
      v7 = v14;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v7;
}
