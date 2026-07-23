/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x1408C37A0
 * Callers:
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _MapCmDevicePropertyToRegType @ 0x140469874 (_MapCmDevicePropertyToRegType.c)
 *     RtlStringCbCopyNExW @ 0x140483DC0 (RtlStringCbCopyNExW.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall CmGetDeviceRegPropWorker(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int *a7,
        __int16 a8)
{
  const wchar_t *v10; // r10
  NTSTATUS inited; // edi
  unsigned int v13; // edx
  wchar_t *v14; // rsi
  unsigned int v15; // r12d
  const wchar_t *v16; // r8
  __int64 (__fastcall *v17)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  HANDLE v18; // rdx
  NTSTATUS v19; // eax
  int v20; // ecx
  HANDLE v22; // r8
  NTSTATUS DeviceRegProp; // eax
  int InstallerClassRegProp; // eax
  int v25; // eax
  wchar_t *v26; // rax
  const wchar_t *v27; // r8
  _DWORD *v28; // rdx
  __int64 v29; // rax
  int v30; // r9d
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PWSTR *ppszDestEnda; // [rsp+20h] [rbp-E0h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+30h] [rbp-D0h]
  unsigned int cbDest; // [rsp+60h] [rbp-A0h]
  unsigned int cbDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v38; // [rsp+70h] [rbp-90h]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v43[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v44; // [rsp+ECh] [rbp-14h]

  v38 = a5;
  v10 = a2;
  inited = 0;
  pszSrc = a2;
  Handle = 0LL;
  v37 = 0;
  cbDest_4 = 0;
  v41 = 0;
  DestinationString = 0LL;
  if ( a8 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v13 = *a7;
  if ( *a7 )
  {
    if ( !pszDest )
      return 3221225485LL;
  }
  v14 = 0LL;
  v15 = a4 - 1;
  *a7 = 0;
  if ( v13 )
    v14 = pszDest;
  cbDest = v13;
  *a5 = 0;
  if ( v15 > 0x24 )
    return 3221226032LL;
  if ( a4 != 37 )
  {
    if ( a4 != 25 )
    {
      switch ( a4 )
      {
        case 1:
        case 2:
        case 3:
        case 5:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
          goto LABEL_10;
        default:
          return 3221226032LL;
      }
    }
    return 3221226032LL;
  }
LABEL_10:
  if ( !a3 )
  {
    inited = CmOpenDeviceRegKey(a1, (_DWORD)v10, 16, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_29;
    v13 = cbDest;
    v10 = pszSrc;
  }
  switch ( a4 )
  {
    case 29:
LABEL_14:
      switch ( v15 )
      {
        case 0u:
          v16 = L"DeviceDesc";
          goto LABEL_17;
        case 1u:
        case 3u:
        case 5u:
        case 6u:
        case 9u:
        case 0xAu:
        case 0xEu:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x18u:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x22u:
        case 0x23u:
          inited = -1073741264;
          goto LABEL_29;
        case 2u:
          v16 = L"CompatibleIDs";
          goto LABEL_17;
        case 4u:
          v16 = L"Service";
          goto LABEL_17;
        case 7u:
          v16 = L"Class";
          goto LABEL_17;
        case 8u:
          v16 = L"ClassGUID";
          goto LABEL_17;
        case 0xBu:
          v16 = L"Mfg";
          goto LABEL_17;
        case 0xCu:
          v16 = L"FriendlyName";
          goto LABEL_17;
        case 0xDu:
          v16 = L"LocationInformation";
          goto LABEL_17;
        case 0xFu:
          v16 = L"Capabilities";
          goto LABEL_17;
        case 0x10u:
          v16 = L"UINumber";
          goto LABEL_17;
        case 0x11u:
          v16 = L"UpperFilters";
          goto LABEL_17;
        case 0x12u:
          v16 = L"LowerFilters";
          goto LABEL_17;
        case 0x17u:
          v16 = L"Security";
          goto LABEL_17;
        case 0x19u:
          v16 = L"DeviceType";
          goto LABEL_17;
        case 0x1Au:
          v16 = L"Exclusive";
          goto LABEL_17;
        case 0x1Bu:
          v16 = L"DeviceCharacteristics";
          goto LABEL_17;
        case 0x1Cu:
          v16 = L"Address";
          goto LABEL_17;
        case 0x1Du:
          v16 = L"UINumberDescFormat";
          goto LABEL_17;
        case 0x21u:
          v16 = L"RemovalPolicy";
          goto LABEL_17;
        case 0x24u:
          v16 = L"ContainerID";
          goto LABEL_17;
        default:
          return 3221226032LL;
      }
    case 8:
      v22 = Handle;
      cbDest_4 = 78;
      if ( a3 )
        v22 = a3;
      DeviceRegProp = CmGetDeviceRegProp(
                        a1,
                        (__int64)v10,
                        (__int64)v22,
                        9u,
                        (__int64)&v37,
                        (__int64)v43,
                        (__int64)&cbDest_4,
                        0);
      inited = DeviceRegProp;
      if ( DeviceRegProp == -1073741789 )
      {
        inited = -1073741595;
      }
      else if ( !DeviceRegProp )
      {
        v44 = 0;
        ppszDestEnda = (NTSTRSAFE_PWSTR *)v38;
        *a7 = cbDest;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  a1,
                                  (unsigned int)v43,
                                  0,
                                  8,
                                  (__int64)ppszDestEnda,
                                  (__int64)v14,
                                  (__int64)a7);
        inited = InstallerClassRegProp;
        goto LABEL_42;
      }
      break;
    case 23:
      v26 = wcschr(v10, 0x5Cu);
      if ( v26 )
      {
        v27 = pszSrc;
        v28 = v38;
        *a7 = (_DWORD)v26 - (_DWORD)pszSrc + 2;
        *v28 = 1;
        v29 = *a7;
        if ( cbDest < (unsigned int)v29 )
          inited = -1073741789;
        else
          inited = RtlStringCbCopyNExW(v14, cbDest, v27, v29 - 2, ppszDestEnd, pcbRemaining, dwFlags);
      }
      else
      {
        inited = -1073741811;
      }
      break;
    case 36:
      v30 = (int)Handle;
      if ( a3 )
        v30 = (int)a3;
      InstallerClassRegProp = PnpGetObjectProperty(
                                a1,
                                (_DWORD)v10,
                                1,
                                v30,
                                0LL,
                                (__int64)&DEVPKEY_Device_LocationPaths,
                                (__int64)&v41,
                                (__int64)v14,
                                v13,
                                (__int64)a7,
                                0);
      inited = InstallerClassRegProp;
      *v38 = 7;
      if ( InstallerClassRegProp < 0 )
      {
LABEL_42:
        if ( InstallerClassRegProp == -1073741772 )
LABEL_43:
          inited = -1073741275;
      }
      break;
    default:
      switch ( a4 )
      {
        case 15:
        case 20:
        case 21:
        case 22:
        case 31:
        case 32:
        case 33:
        case 35:
          inited = RtlInitUnicodeStringEx(&DestinationString, v10);
          if ( inited < 0 )
            goto LABEL_29;
          if ( *(_QWORD *)(a1 + 256) )
          {
            v25 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
            inited = v25;
            if ( v25 == -2147483643 )
            {
              inited = -1073741789;
            }
            else
            {
              if ( v25 == -1073741772 )
                goto LABEL_43;
              if ( v25 < 0 && v25 != -1073741789 )
                goto LABEL_29;
            }
            *a7 = cbDest;
            *v38 = MapCmDevicePropertyToRegType(a4);
            goto LABEL_29;
          }
          inited = -1073741822;
          break;
        default:
          switch ( a4 )
          {
            case 2:
              v16 = L"HardwareID";
              break;
            case 10:
              v16 = L"Driver";
              break;
            case 11:
              v16 = L"ConfigFlags";
              break;
            default:
              goto LABEL_14;
          }
LABEL_17:
          v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 520);
          cbDest_4 = v13;
          v18 = Handle;
          if ( a3 )
            v18 = a3;
          if ( !v17 || v17 == PnpRegQueryValueIndirect )
            v19 = PnpRegQueryValueIndirect(a1, v18, v16, &v37, v14, &cbDest_4, 0LL);
          else
            v19 = guard_dispatch_icall_no_overrides(a1, v18);
          if ( v19 == -1073741772 || v19 == -1073741444 )
            goto LABEL_43;
          if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
          {
            inited = v19;
            goto LABEL_29;
          }
          v20 = v37;
          if ( v37 == 1 )
          {
            if ( cbDest_4 < 2 )
            {
              inited = -1073741275;
              goto LABEL_29;
            }
          }
          else if ( v37 == 7 )
          {
            if ( cbDest_4 < 2 )
              goto LABEL_43;
          }
          else if ( cbDest_4 != 4 && v37 == 4 )
          {
            goto LABEL_43;
          }
          *a7 = cbDest_4;
          *v38 = v20;
          if ( v19 || !cbDest )
            inited = -1073741789;
          goto LABEL_29;
      }
      break;
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
