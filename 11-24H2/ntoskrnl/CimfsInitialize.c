/*
 * XREFs of CimfsInitialize @ 0x140C5FEBC
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x1409A2C00 (RtlStringFromGUID.c)
 *     IoCreateSymbolicLink @ 0x140A1E270 (IoCreateSymbolicLink.c)
 *     CimfsGetDiskParameters @ 0x140C5FDE4 (CimfsGetDiskParameters.c)
 *     CompositefsBootIsEnabled @ 0x140C60AC4 (CompositefsBootIsEnabled.c)
 */

__int64 __fastcall CimfsInitialize(__int64 a1, char a2)
{
  ULONG_PTR v4; // rbx
  unsigned int v5; // r15d
  int IsEnabled; // edi
  _QWORD *v7; // r13
  __int64 v8; // rax
  char *v9; // rax
  _QWORD *v10; // rdx
  char *v11; // r12
  _QWORD *i; // rcx
  const WCHAR *v13; // rdx
  _BYTE v15[4]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR v16; // [rsp+3Ch] [rbp-CCh] BYREF
  __int128 v17; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING GuidString_8; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DeviceName_8; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v22[36]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD *v23; // [rsp+128h] [rbp+20h] BYREF
  __int128 v24; // [rsp+130h] [rbp+28h]
  unsigned int v25; // [rsp+140h] [rbp+38h]
  char v26; // [rsp+144h] [rbp+3Ch] BYREF
  __int128 v27; // [rsp+198h] [rbp+90h] BYREF
  wchar_t pszDest[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t SourceString[64]; // [rsp+228h] [rbp+120h] BYREF

  v22[1] = 0;
  SymbolicLinkName = 0LL;
  DeviceName_8 = 0LL;
  v17 = 0LL;
  DestinationString_8 = 0LL;
  memset_0(v22, 0, 0x8CuLL);
  v4 = 0LL;
  LODWORD(v16) = 0;
  *(_QWORD *)&GuidString_8.Length = 0LL;
  v27 = 0LL;
  GuidString_8.Buffer = 0LL;
  v5 = 0;
  IsEnabled = 0;
  v7 = 0LL;
  memset_0(&v23, 0, 0x70uLL);
  v8 = *(_QWORD *)(a1 + 240);
  v15[0] = 0;
  if ( *(_DWORD *)(v8 + 3840) )
  {
    IsEnabled = CompositefsBootIsEnabled(v15);
    if ( IsEnabled < 0 || !v15[0] )
    {
      v9 = strstr(*(const char **)(a1 + 184), "cimfs{");
      v10 = *(_QWORD **)(a1 + 232);
      v11 = v9;
      for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
      {
        if ( i[7] )
        {
          v7 = i;
          IsEnabled = CimfsGetDiskParameters(i[7], v22, 0LL, &v27, &v16);
          if ( IsEnabled < 0 )
          {
            v4 = 1LL;
            goto LABEL_35;
          }
          v5 = v16;
          break;
        }
      }
      if ( a2 )
        CimfsSetBootInformation(a1, v22, &v27, v5);
      v4 = 0LL;
      if ( v11 )
      {
        if ( !a2 )
          goto LABEL_35;
      }
      else if ( a2 )
      {
        goto LABEL_35;
      }
      if ( v7 )
      {
        v25 = v5;
        v23 = v22;
        v24 = v27;
        IsEnabled = PnpBootDeviceWait(a1, 1, (__int64)&CimfsInitializeBootDisk, (__int64)&v23);
        if ( IsEnabled < 0 )
        {
          v4 = 2LL;
          goto LABEL_35;
        }
        v13 = (const WCHAR *)&v26;
      }
      else
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
        {
          IsEnabled = -1073741811;
          v4 = 8LL;
          goto LABEL_35;
        }
        v13 = L"\\Device\\vmsmb\\VSMB-{dcc079ae-60ba-4d07-847c-3493609c0870}\\os";
      }
      RtlInitUnicodeString(&DestinationString_8, v13);
      IsEnabled = CimfsMountBootVolume(a1, &DestinationString_8);
      if ( IsEnabled >= 0 )
      {
        CimfsSetBootInformation(0LL, 0LL, 0LL, 0LL);
        v4 = 0LL;
        if ( v11 )
        {
          IsEnabled = RtlStringFromGUID((const GUID *const)(*(_QWORD *)(a1 + 240) + 3816LL), &GuidString_8);
          if ( IsEnabled >= 0 )
          {
            IsEnabled = RtlStringCbPrintfW(pszDest, 0x78uLL, L"\\ArcName\\cimfs%wZ", &GuidString_8);
            if ( IsEnabled >= 0 )
            {
              DWORD1(v17) = *(_DWORD *)(&GuidString_8.MaximumLength + 1);
              *((_QWORD *)&v17 + 1) = _mm_srli_si128((__m128i)GuidString_8, 8).m128i_u64[0] + 2;
              LOWORD(v17) = GuidString_8.Length - 4;
              WORD1(v17) = GuidString_8.MaximumLength - 4;
              IsEnabled = RtlStringCbPrintfW(SourceString, 0x78uLL, L"\\Device\\cimfs\\%wZ", &v17);
              if ( IsEnabled >= 0 )
              {
                RtlInitUnicodeString(&SymbolicLinkName, pszDest);
                RtlInitUnicodeString(&DeviceName_8, SourceString);
                v4 = 0LL;
                IsEnabled = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName_8);
                if ( IsEnabled < 0 )
                  v4 = 7LL;
              }
              else
              {
                v4 = 6LL;
              }
            }
            else
            {
              v4 = 5LL;
            }
          }
          else
          {
            v4 = 4LL;
          }
        }
      }
      else
      {
        v4 = 3LL;
      }
    }
  }
LABEL_35:
  RtlFreeAnsiString(&GuidString_8);
  if ( IsEnabled < 0 )
    KeBugCheckEx(0x7Bu, v4, IsEnabled, 0LL, 0LL);
  return (unsigned int)IsEnabled;
}
