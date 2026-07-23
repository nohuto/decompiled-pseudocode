/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8
 * Callers:
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14081F520 (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedProperty @ 0x1409ADBE4 (_CmGetInstallerClassMappedProperty.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1408C3EF8 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegValue(
        _QWORD *a1,
        WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _BYTE *v9; // r13
  void *v10; // r10
  int v11; // ebx
  DEVPROPKEY **v12; // rdx
  int v13; // r11d
  int v14; // r15d
  unsigned int v15; // r9d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // rcx
  HANDLE v20; // rdx
  const WCHAR *v21; // r8
  __int64 (__fastcall *v22)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *); // rax
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rax
  HANDLE v27; // rdx
  const WCHAR *v28; // r8
  int v29; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  int i; // edi
  const WCHAR *v39; // r8
  HANDLE v40; // rdx
  int ValueIndirect; // eax
  __int64 v42; // rax
  HANDLE v43; // rdx
  const WCHAR *v44; // rdi
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // [rsp+28h] [rbp-81h]
  bool v48[4]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v49; // [rsp+44h] [rbp-65h] BYREF
  int v50; // [rsp+48h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  int v52; // [rsp+58h] [rbp-51h] BYREF
  _QWORD *v53; // [rsp+60h] [rbp-49h]
  _DWORD *v54; // [rsp+68h] [rbp-41h]
  HANDLE v55; // [rsp+70h] [rbp-39h] BYREF
  void *v56; // [rsp+78h] [rbp-31h]
  WCHAR *v57; // [rsp+80h] [rbp-29h]
  wchar_t Str2[12]; // [rsp+88h] [rbp-21h] BYREF

  v9 = (_BYTE *)a6;
  v10 = a3;
  v57 = a2;
  v11 = 0;
  v56 = a3;
  v12 = &off_140B3F2F0;
  v13 = *(_DWORD *)(a4 + 16);
  v14 = 0;
  v53 = a1;
  v15 = 0;
  v54 = a8;
  Handle = 0LL;
  v55 = 0LL;
  v50 = 0;
  v49 = 0;
  v48[0] = 0;
  v52 = 0;
  do
  {
    v16 = *v12;
    v17 = v12;
    if ( v13 == (*v12)->pid )
    {
      v31 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v31 )
        break;
    }
    ++v15;
    v12 += 4;
    v17 = 0LL;
  }
  while ( v15 < 0xD );
  if ( !v17 )
    return (unsigned int)-1073741802;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v18 = a7;
    v9 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
  }
  else
  {
    v18 = 0;
  }
  if ( v10 )
  {
LABEL_10:
    v19 = *(unsigned int *)(a4 + 16);
    if ( (_DWORD)v19 == 7 )
    {
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoInstallClass.fmtid.Data4;
      if ( !v26 )
        goto LABEL_33;
    }
    if ( (_DWORD)v19 == 8 )
    {
      v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data1 )
        v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoDisplayClass.fmtid.Data4;
      if ( !v33 )
        goto LABEL_33;
    }
    if ( (_DWORD)v19 == 9 )
    {
      v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_SilentInstall.fmtid.Data1 )
        v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_SilentInstall.fmtid.Data4;
      if ( !v34 )
        goto LABEL_33;
    }
    if ( (_DWORD)v19 == 10 )
    {
      v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_NoUseClass.fmtid.Data1 )
        v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_NoUseClass.fmtid.Data4;
      if ( !v32 )
      {
LABEL_33:
        v27 = Handle;
        v28 = (const WCHAR *)v17[2];
        v49 = 22;
        if ( v10 )
          v27 = v10;
        v29 = PnpCtxRegQueryValue(v19, v27, v28, &v50, Str2, &v49);
        if ( v29 != -1073741772 && v29 != -1073741444 )
        {
          if ( v29 >= 0 )
          {
            *v54 = 1;
            *a5 = *((_DWORD *)v17 + 2);
            if ( v18 )
            {
              Str2[10] = 0;
              v36 = wcsicmp(L"0", Str2);
LABEL_79:
              *v9 = -(v36 != 0);
              goto LABEL_37;
            }
LABEL_78:
            v11 = -1073741789;
            goto LABEL_37;
          }
LABEL_77:
          v11 = v29;
          goto LABEL_37;
        }
        goto LABEL_36;
      }
    }
    if ( (_DWORD)v19 == 15 )
    {
      v35 = *(_QWORD *)a4 - DEVPKEY_DeviceClass_FSFilterClass;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceClass_FSFilterClass )
        v35 = *(_QWORD *)(a4 + 8) - 0x6633D7A7C96808AFLL;
      if ( !v35 )
        goto LABEL_33;
    }
    else if ( (_DWORD)v19 == 2 )
    {
      v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_Name.fmtid.Data1 )
        v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_Name.fmtid.Data4;
      if ( !v37 )
      {
        for ( i = 0; i < 2; ++i )
        {
          if ( i )
          {
            v39 = &word_140AEDAC0;
          }
          else
          {
            v39 = (const WCHAR *)v17[2];
            if ( !v39 )
              goto LABEL_36;
          }
          v40 = Handle;
          v49 = v18;
          if ( v10 )
            v40 = v10;
          ValueIndirect = PnpCtxRegQueryValueIndirect(
                            (__int64)v53,
                            (__int64)v40,
                            (__int64)v39,
                            (__int64)&v50,
                            (__int64)v9,
                            (__int64)&v49,
                            (__int64)v48);
          v14 = ValueIndirect;
          if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
          {
            if ( !ValueIndirect || ValueIndirect == -1073741789 )
            {
              v11 = 0;
              goto LABEL_94;
            }
            v11 = ValueIndirect;
            break;
          }
          v10 = v56;
          v11 = -1073741275;
        }
        if ( v11 < 0 )
          goto LABEL_37;
LABEL_94:
        v24 = v14 == 0;
        goto LABEL_25;
      }
      v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data1 )
        v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceClass_DHPRebalanceOptOut.fmtid.Data4;
      if ( !v42 )
      {
        v43 = Handle;
        v44 = (const WCHAR *)v17[2];
        if ( v10 )
          v43 = v10;
        v49 = 4;
        v45 = PnpOpenPropertiesKey((__int64)v53, (__int64)v43, 0LL, 1u, 0, v47, &v55);
        v11 = v45;
        if ( v45 != -1073741772 )
        {
          if ( v45 < 0 )
            goto LABEL_37;
          v29 = PnpCtxRegQueryValue(v46, v55, v44, &v50, &v52, &v49);
          if ( v29 != -1073741772 && v29 != -1073741444 )
          {
            if ( v29 >= 0 )
            {
              *v54 = 1;
              *a5 = *((_DWORD *)v17 + 2);
              if ( v18 )
              {
                v36 = v52;
                goto LABEL_79;
              }
              goto LABEL_78;
            }
            goto LABEL_77;
          }
        }
        goto LABEL_36;
      }
    }
    v20 = Handle;
    v21 = (const WCHAR *)v17[2];
    if ( v10 )
      v20 = v10;
    v49 = v18;
    v22 = (__int64 (__fastcall *)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *))v53[65];
    if ( !v22 || v22 == PnpRegQueryValueIndirect )
      v23 = PnpRegQueryValueIndirect((__int64)v53, v20, v21, &v50, v9, &v49, v48);
    else
      v23 = guard_dispatch_icall_no_overrides(v53, v20);
    if ( v23 == -1073741772 || v23 == -1073741444 )
    {
LABEL_36:
      v11 = -1073741275;
      goto LABEL_37;
    }
    if ( v23 && v23 != -1073741789 )
    {
      v11 = v23;
      goto LABEL_37;
    }
    if ( v50 != *((_DWORD *)v17 + 6) )
    {
      v11 = -1073741811;
      goto LABEL_37;
    }
    v24 = v23 == 0;
LABEL_25:
    *v54 = v49;
    v25 = *((_DWORD *)v17 + 2);
    *a5 = v25;
    if ( !v24 || !v18 )
      v11 = -1073741789;
    if ( v25 == 18 && v48[0] )
      *a5 = 25;
    goto LABEL_37;
  }
  v11 = CmOpenCommonClassRegKey(v53, v57, 32, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( v11 >= 0 )
  {
    v10 = v56;
    goto LABEL_10;
  }
LABEL_37:
  if ( v55 )
    ZwClose(v55);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
