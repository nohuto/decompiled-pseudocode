/*
 * XREFs of _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceRegKeyPath @ 0x1408E0940 (_CmGetDeviceRegKeyPath.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegDeleteKey @ 0x1406F6960 (_PnpCtxRegDeleteKey.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenCommonClassRegKey @ 0x1408C5CDC (_CmOpenCommonClassRegKey.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A58B88 (_CmCreateOrdinalInstanceKey.c)
 */

__int64 __fastcall CmGetDeviceSoftwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  int DeviceRegProp; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  size_t v26; // rcx
  int OrdinalInstanceKey; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+38h] [rbp-C8h]
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE v34; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v37[24]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[48]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v39[40]; // [rsp+100h] [rbp+0h] BYREF

  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( (a3 & 0x200) != 0 )
    {
      if ( !a4 )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)(a2 + 2 * v19) );
        v21 = v19 + 100;
        if ( v21 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        if ( a8 )
          *a8 = v21;
        if ( (unsigned int)v21 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                 L"System\\CurrentControlSet\\Enum",
                                 a2,
                                 L"Driver Parameters");
        return (unsigned int)-1073741789;
      }
      if ( a4 != -1 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *(_WORD *)(a2 + 2 * v22) );
        v23 = v22 + 97;
        if ( v23 > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        if ( a8 )
          *a8 = v23;
        if ( (unsigned int)v23 <= (unsigned int)cchDest )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 (unsigned int)cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%04u\\%s\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles",
                                 a4,
                                 L"System\\CurrentControlSet\\Enum",
                                 a2,
                                 L"Driver Parameters");
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741811;
    }
    v24 = -1LL;
    do
      ++v24;
    while ( *(_WORD *)(a2 + 2 * v24) );
    v25 = v24 + 49;
    if ( (a3 & 0x100) != 0 )
    {
      if ( v25 <= 0xFFFFFFFF )
      {
        if ( a8 )
          *a8 = v25;
        v26 = (unsigned int)cchDest;
        if ( (unsigned int)v25 > (unsigned int)cchDest )
          return (unsigned int)-1073741789;
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               v26,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s\\%s",
                               L"System\\CurrentControlSet\\Enum",
                               a2,
                               L"Driver Parameters");
      }
    }
    else if ( v25 <= 0xFFFFFFFF )
    {
      if ( a8 )
        *a8 = v25;
      v26 = (unsigned int)cchDest;
      if ( (unsigned int)v25 > (unsigned int)cchDest )
        return (unsigned int)-1073741789;
      return (unsigned int)RtlStringCchPrintfExW(
                             pszDest,
                             v26,
                             0LL,
                             0LL,
                             0x800u,
                             L"%s\\%s\\%s",
                             L"System\\CurrentControlSet\\Enum",
                             a2,
                             L"Driver Parameters");
    }
    return (unsigned int)-1073741675;
  }
  v32 = 88;
  v34 = 0LL;
  Handle = 0LL;
  v33 = 0;
  DestinationString = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0LL, 0xAu, (__int64)&v33, (__int64)SourceString, (__int64)&v32, 0);
  if ( DeviceRegProp == -1073741275 )
  {
    if ( a5 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 240), 1u);
      v32 = 88;
      v33 = 0;
      DeviceRegProp = CmGetDeviceRegProp(a1, a2, 0LL, 0xAu, (__int64)&v33, (__int64)SourceString, (__int64)&v32, 0);
      if ( DeviceRegProp == -1073741275 )
      {
        v32 = 78;
        v33 = 0;
        v18 = CmGetDeviceRegProp(a1, a2, 0LL, 9u, (__int64)&v33, (__int64)v39, (__int64)&v32, 0);
        DeviceRegProp = v18;
        if ( v18 == -1073741275 )
        {
          DeviceRegProp = -1073741772;
        }
        else if ( v18 >= 0 )
        {
          v39[38] = 0;
          DeviceRegProp = CmOpenCommonClassRegKey((_QWORD *)a1, v39, 32, 0, 131103, 0, (__int64)&v34, 0LL);
          if ( DeviceRegProp >= 0 )
          {
            OrdinalInstanceKey = CmCreateOrdinalInstanceKey(a1, v34, v37);
            DeviceRegProp = OrdinalInstanceKey;
            if ( OrdinalInstanceKey >= 0 )
            {
              DeviceRegProp = RtlStringCchPrintfExW(SourceString, 0x2CuLL, 0LL, 0LL, 0x800u, L"%s\\%s", v39, v37);
              if ( DeviceRegProp >= 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                if ( DeviceRegProp >= 0 )
                {
                  DeviceRegProp = CmSetDeviceRegProp(
                                    a1,
                                    a2,
                                    0,
                                    10,
                                    1,
                                    (__int64)DestinationString.Buffer,
                                    DestinationString.MaximumLength,
                                    0);
                  if ( DeviceRegProp < 0 )
                    PnpCtxRegDeleteKey(a1, (__int64)v34, (__int64)v37);
                }
              }
            }
          }
        }
      }
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 240));
      KeLeaveCriticalRegionThread();
      if ( Handle )
        ZwClose(Handle);
    }
    else
    {
      DeviceRegProp = -1073741772;
    }
  }
  if ( v34 )
    ZwClose(v34);
  if ( DeviceRegProp >= 0 )
  {
    if ( (a3 & 0x200) == 0 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( SourceString[v13] );
      v14 = v13 + 40;
      if ( v14 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        *a8 = v14;
      if ( (unsigned int)v14 <= (unsigned int)cchDest )
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               (unsigned int)cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s",
                               L"System\\CurrentControlSet\\Control\\Class",
                               SourceString);
      return (unsigned int)-1073741789;
    }
    if ( !a4 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( SourceString[v20] );
      v28 = v20 + 91;
      if ( v28 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        *a8 = v28;
      if ( (unsigned int)v28 <= (unsigned int)cchDest )
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               (unsigned int)cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s\\%s",
                               L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                               L"System\\CurrentControlSet\\Control\\Class",
                               SourceString);
      return (unsigned int)-1073741789;
    }
    if ( a4 != -1 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( SourceString[v29] );
      v30 = v29 + 88;
      if ( v30 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        *a8 = v30;
      if ( (unsigned int)v30 <= (unsigned int)cchDest )
      {
        LODWORD(v31) = a4;
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               (unsigned int)cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%04u\\%s\\%s",
                               L"System\\CurrentControlSet\\Hardware Profiles",
                               v31,
                               L"System\\CurrentControlSet\\Control\\Class",
                               SourceString);
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DeviceRegProp;
}
