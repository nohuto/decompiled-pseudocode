/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A937F0
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x14081FF04 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _CmOpenInstallerClassRegKey @ 0x1409AE8F4 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegValue(
        _QWORD *a1,
        WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // r11d
  int v8; // ebx
  DEVPROPKEY **v10; // r9
  unsigned int i; // r10d
  DEVPROPKEY *v15; // rdx
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r14
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rax
  const wchar_t *v24; // rax
  HANDLE v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  HANDLE v29; // rdx
  __int64 v30; // rax
  HANDLE v31; // rdx
  int v32; // eax
  __int64 v34; // [rsp+28h] [rbp-38h]
  int v35; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v36; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v35 = 0;
  v36 = 0LL;
  v10 = &off_140B3F2F0;
  Handle = 0LL;
  for ( i = 0; i < 0xD; ++i )
  {
    v15 = *v10;
    v16 = v10;
    if ( v7 == (*v10)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    v10 += 4;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return (unsigned int)-1073741811;
    }
    else if ( a5 >= 2 )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( a3 || (v8 = CmOpenInstallerClassRegKey(a1, a2, 0LL, (__int64)v10, 3, 0, (__int64)&v36, 0LL), v8 >= 0) )
  {
    v19 = *(_DWORD *)(a4 + 16);
    v20 = (__int64)v16[2];
    v21 = *((_DWORD *)v16 + 6);
    if ( v19 == 7 )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v22 )
        goto LABEL_36;
    }
    if ( v19 == 8 )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v22 )
        goto LABEL_36;
    }
    if ( v19 == 9 )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v22 )
        goto LABEL_36;
    }
    if ( v19 == 10 )
    {
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v22 )
        goto LABEL_36;
    }
    v22 = a7;
    switch ( v19 )
    {
      case 15:
        v23 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
          v23 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
        if ( !v23 )
        {
LABEL_36:
          if ( !a7 )
          {
LABEL_37:
            v8 = -1073741811;
            goto LABEL_70;
          }
          LOBYTE(v22) = *a6;
          if ( *a6 == 0xFF )
          {
            v24 = L"1";
          }
          else
          {
            if ( (_BYTE)v22 )
              goto LABEL_37;
            v24 = L"0";
          }
          v25 = v36;
          if ( a3 )
            v25 = a3;
LABEL_44:
          v26 = PnpCtxRegSetValue(v22, v25, v20, v21, (__int64)v24, 4u);
          if ( v26 == -1073741444 )
          {
            v8 = -1073741772;
          }
          else if ( v26 < 0 )
          {
            v8 = v26;
          }
          goto LABEL_70;
        }
        break;
      case 2:
        v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
          v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
        if ( !v27 )
        {
          if ( !a7 )
            goto LABEL_37;
          if ( *a6 == 0xFF )
          {
            v28 = 1;
          }
          else
          {
            if ( *a6 )
              goto LABEL_37;
            v28 = 0;
          }
          v29 = v36;
          v35 = v28;
          if ( a3 )
            v29 = a3;
          v8 = PnpOpenPropertiesKey((__int64)a1, (__int64)v29, 0LL, 2u, 1, v34, &Handle);
          if ( v8 < 0 )
            goto LABEL_70;
          v25 = Handle;
          v24 = (const wchar_t *)&v35;
          goto LABEL_44;
        }
        break;
      case 3:
        v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_ClassName.fmtid.Data1 )
          v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_ClassName.fmtid.Data4;
        if ( !v30 && a7 > 0x40 )
          goto LABEL_37;
        break;
    }
    v31 = v36;
    if ( a3 )
      v31 = a3;
    v32 = PnpCtxRegSetValue(a7, v31, v20, v21, (__int64)a6, a7);
    if ( v32 < 0 )
      v8 = v32;
  }
LABEL_70:
  if ( Handle )
    ZwClose(Handle);
  if ( v36 )
    ZwClose(v36);
  return (unsigned int)v8;
}
