/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x1409BB294
 * Callers:
 *     PiDeviceRegistration @ 0x1409BAFC8 (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     PiForEachDriverQueryRoutine @ 0x1409BB7E0 (PiForEachDriverQueryRoutine.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  wchar_t *v5; // rsi
  __int64 v6; // rdx
  WCHAR *v7; // rdi
  unsigned __int64 v8; // rcx
  WCHAR *v9; // rax
  int DeviceRegProp; // ebx
  WCHAR *Pool2; // rax
  unsigned int i; // r15d
  __int64 v14; // r12
  char v15; // cl
  __int64 v16; // rax
  int ObjectProperty; // eax
  __int64 v18; // rcx
  HANDLE v19; // r9
  unsigned int v20; // r8d
  WCHAR *v21; // rdx
  int InstallerClassRegProp; // eax
  ULONG v23; // [rsp+60h] [rbp-79h] BYREF
  ULONG v24; // [rsp+64h] [rbp-75h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-71h] BYREF
  int v26; // [rsp+6Ch] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-69h] BYREF
  HANDLE v28; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v29[4]; // [rsp+80h] [rbp-59h] BYREF
  WCHAR v30[40]; // [rsp+A0h] [rbp-39h] BYREF

  Handle = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v26 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1[1];
  if ( (unsigned __int16)v6 < 2u || (v7 = (WCHAR *)*((_QWORD *)a1 + 1)) == 0LL )
  {
    v7 = 0LL;
    goto LABEL_12;
  }
  v8 = *a1;
  if ( (unsigned __int16)v8 > (unsigned __int16)v6 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v8 )
  {
    if ( !*v7 )
      goto LABEL_12;
    Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, 2uLL, 0x75737050u);
    v7 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      goto LABEL_12;
    }
    return (unsigned int)-1073741670;
  }
  if ( *v7
    && ((_WORD)v8 != (_WORD)v6 || v7[((unsigned __int64)(unsigned int)v8 >> 1) - 1])
    && (v8 > v6 - 2 || v7[(v8 >> 1) - 1] && v7[v8 >> 1]) )
  {
    v9 = (WCHAR *)ExAllocatePool2(0x100uLL, v8 + 2, 0x75737050u);
    v7 = v9;
    if ( v9 )
    {
      memmove(v9, *((const void **)a1 + 1), *a1);
      v7[(unsigned __int64)*a1 >> 1] = 0;
      goto LABEL_12;
    }
    return (unsigned int)-1073741670;
  }
LABEL_12:
  DeviceRegProp = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v7, 16, 0, 131097, 0, (__int64)&v28, 0LL);
  if ( DeviceRegProp >= 0 )
  {
    v24 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v7,
                      (__int64)v28,
                      9u,
                      (__int64)&v25,
                      (__int64)v30,
                      (__int64)&v24,
                      0);
    if ( DeviceRegProp >= 0 && v25 == 1 && v24 )
      DeviceRegProp = CmOpenCommonClassRegKey(*(_QWORD **)&PiPnpRtlCtx, v30, 32, 0, 131097, 0, (__int64)&Handle, 0LL);
    v29[2] = a3;
    v29[0] = a1;
    v29[1] = PiProcessDriverInstance;
    v24 = 170;
    v5 = (wchar_t *)ExAllocatePool2(0x100uLL, 0xAAuLL, 0x20207050u);
    if ( !v5 )
    {
LABEL_18:
      DeviceRegProp = -1073741670;
      goto LABEL_19;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= 5 )
        goto LABEL_19;
      v14 = 4LL * i;
      v15 = qword_140002B70[v14 + 2];
      if ( !v15 || Handle )
        break;
LABEL_40:
      ;
    }
    v16 = qword_140002B70[v14 + 1];
    v23 = v24;
    if ( v15 )
    {
      if ( v16 )
        ObjectProperty = PnpGetObjectProperty(
                           *(_QWORD **)&PiPnpRtlCtx,
                           v30,
                           2u,
                           Handle,
                           0LL,
                           v16,
                           &v26,
                           v5,
                           v24,
                           (__int64)&v23,
                           0);
      else
        ObjectProperty = CmGetInstallerClassRegProp(
                           *(_QWORD **)&PiPnpRtlCtx,
                           v30,
                           (__int64)Handle,
                           qword_140002B70[v14],
                           (__int64)&v25,
                           (__int64)v5,
                           (__int64)&v23);
    }
    else if ( v16 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         *(_QWORD **)&PiPnpRtlCtx,
                         v7,
                         1u,
                         v28,
                         0LL,
                         v16,
                         &v26,
                         v5,
                         v24,
                         (__int64)&v23,
                         0);
    }
    else
    {
      ObjectProperty = CmGetDeviceRegProp(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)v7,
                         (__int64)v28,
                         qword_140002B70[v14],
                         (__int64)&v25,
                         (__int64)v5,
                         (__int64)&v23,
                         0);
    }
    DeviceRegProp = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
    {
LABEL_38:
      if ( DeviceRegProp == -1073741275 )
      {
        DeviceRegProp = 0;
      }
      else
      {
        if ( DeviceRegProp < 0 )
          goto LABEL_19;
        DeviceRegProp = PiForEachDriverQueryRoutine(v25, v5, v23, qword_140002B70[4 * i + 3], v29);
        if ( DeviceRegProp < 0 )
          goto LABEL_19;
      }
      goto LABEL_40;
    }
    ExFreePoolWithTag(v5, 0);
    v24 = v23;
    v5 = (wchar_t *)ExAllocatePool2(0x100uLL, v23, 0x20207050u);
    if ( !v5 )
      goto LABEL_18;
    v18 = qword_140002B70[v14 + 1];
    if ( LOBYTE(qword_140002B70[4 * i + 2]) )
    {
      if ( !v18 )
      {
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  *(_QWORD **)&PiPnpRtlCtx,
                                  v30,
                                  (__int64)Handle,
                                  qword_140002B70[4 * i],
                                  (__int64)&v25,
                                  (__int64)v5,
                                  (__int64)&v23);
        goto LABEL_54;
      }
      v19 = Handle;
      v21 = v30;
      v20 = 2;
    }
    else
    {
      if ( !v18 )
      {
        InstallerClassRegProp = CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (__int64)v7,
                                  (__int64)v28,
                                  qword_140002B70[4 * i],
                                  (__int64)&v25,
                                  (__int64)v5,
                                  (__int64)&v23,
                                  0);
        goto LABEL_54;
      }
      v19 = v28;
      v20 = 1;
      v21 = v7;
    }
    InstallerClassRegProp = PnpGetObjectProperty(
                              *(_QWORD **)&PiPnpRtlCtx,
                              v21,
                              v20,
                              v19,
                              0LL,
                              v18,
                              &v26,
                              v5,
                              v24,
                              (__int64)&v23,
                              0);
LABEL_54:
    DeviceRegProp = InstallerClassRegProp;
    goto LABEL_38;
  }
LABEL_19:
  if ( v7 )
    PnpUnicodeStringToWstrFree(v7, (__int64)a1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v28 )
    ZwClose(v28);
  return (unsigned int)DeviceRegProp;
}
