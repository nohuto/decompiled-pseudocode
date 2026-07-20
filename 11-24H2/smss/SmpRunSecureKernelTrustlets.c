/*
 * XREFs of SmpRunSecureKernelTrustlets @ 0x140017E00
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     RtlUnicodeStringCat @ 0x140013454 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x14001352C (RtlUnicodeStringCatString.c)
 *     NtPnpGetDeviceInterfaceList @ 0x14001E410 (NtPnpGetDeviceInterfaceList.c)
 *     NtPnpInitializeLibrary @ 0x14001EB38 (NtPnpInitializeLibrary.c)
 *     NtPnpOpenDeviceInterfaceKey @ 0x14001EBFC (NtPnpOpenDeviceInterfaceKey.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpRunSecureKernelTrustlets(_BYTE *a1)
{
  signed int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // ebx
  _WORD *Heap; // rdi
  ULONG v8; // r14d
  _WORD *v9; // r15
  int DeviceInterfaceList; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  ULONG v13; // eax
  NTSTATUS v14; // eax
  const wchar_t *v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // r9d
  USHORT v18; // r14
  NTSTATUS v19; // eax
  const wchar_t *v20; // r8
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING Handle_8; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD KeyValueInformation[2]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v31; // [rsp+80h] [rbp-88h]
  wchar_t pszSrc[514]; // [rsp+84h] [rbp-84h] BYREF
  _BYTE BaseAddress[1024]; // [rsp+488h] [rbp+380h] BYREF

  DestinationString_8 = 0LL;
  Handle_8 = 0LL;
  SourceString_8 = 0LL;
  memset_0(BaseAddress, 0, sizeof(BaseAddress));
  ResultLength[0] = 0;
  Handle = 0LL;
  ResultLength[1] = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString_8, L"SecureKernelTrustlet");
  RtlInitUnicodeString(&SourceString_8, L"async secure ");
  v2 = NtPnpInitializeLibrary();
  v6 = v2;
  if ( v2 < 0 )
  {
    SmpLogFailureString((__int64)"SmpRunSecureKernelTrustlets", 0x80Cu, (__int64)L"Failed to initialize NtPnpApi.", v2);
    return v6;
  }
  Heap = BaseAddress;
  v8 = 512;
  while ( 1 )
  {
    v9 = Heap;
    DeviceInterfaceList = NtPnpGetDeviceInterfaceList(v4, v3, v5, v8, (__int64)Heap, (__int64)ResultLength);
    v6 = DeviceInterfaceList;
    if ( DeviceInterfaceList != -1073741789 )
      break;
    v13 = ResultLength[0];
    if ( ResultLength[0] <= v8 )
    {
      v6 = -1073741595;
      SmpLogFailureString(
        (__int64)"SmpRunSecureKernelTrustlets",
        0x82Bu,
        (__int64)L"Retrieving the list of interfaces returned that the buffer is too small but the required size is not larger.",
        0xC00000E5);
      goto LABEL_13;
    }
    if ( Heap && Heap != (_WORD *)BaseAddress )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
      v13 = ResultLength[0];
    }
    v8 = v13;
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, 2LL * v13);
    if ( !Heap )
    {
      v6 = -1073741670;
LABEL_13:
      SmpLogFailureString(
        (__int64)"SmpRunSecureKernelTrustlets",
        0x843u,
        (__int64)L"Failed to get list of interfaces.",
        v6);
      goto LABEL_49;
    }
  }
  if ( DeviceInterfaceList < 0 )
    goto LABEL_13;
  if ( !*Heap )
    goto LABEL_49;
  do
  {
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    v14 = NtPnpOpenDeviceInterfaceKey(v9, v11, v12, &Handle);
    v6 = v14;
    if ( v14 != -1073741772 )
    {
      if ( v14 < 0 )
      {
        v15 = L"Failed to open interface key.";
        v16 = 2141;
        goto LABEL_42;
      }
      ResultLength[1] = 0;
      v14 = NtQueryValueKey(
              Handle,
              &DestinationString_8,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x410u,
              &ResultLength[1]);
      v6 = v14;
      if ( v14 == -1073741772 )
      {
        v17 = -1073741772;
        v15 = L"SecureKernelTrustlet registry key not found";
        v16 = 2156;
LABEL_43:
        SmpLogFailureString((__int64)"SmpRunSecureKernelTrustlets", v16, (__int64)v15, v17);
        goto LABEL_44;
      }
      if ( v14 == -2147483643 || v14 == -1073741789 )
      {
        v15 = L"Registry Buffer too small";
        v16 = 2163;
        goto LABEL_42;
      }
      if ( v14 < 0 )
      {
        v15 = L"Failed to query SecureKernelTrustlet registry value.";
        v16 = 2169;
LABEL_42:
        v17 = v14;
        goto LABEL_43;
      }
      if ( KeyValueInformation[1] != 1 )
      {
        v17 = -1073741788;
        v15 = L"SecureKernelTrustlet registry value is the wrong type.";
        v16 = 2177;
        goto LABEL_43;
      }
      v18 = SourceString_8.Length + v31;
      if ( (unsigned __int16)(SourceString_8.Length + v31) < SourceString_8.Length || v18 < v31 )
      {
        v17 = -1073741811;
        v15 = L"Provided trustlet path is too long.";
        v16 = 2185;
        goto LABEL_43;
      }
      *a1 = 1;
      Handle_8.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v18);
      if ( !Handle_8.Buffer )
      {
        v17 = -1073741670;
        v15 = L"Failed to allocate memory for trustlet path buffer.";
        v16 = 2199;
        goto LABEL_43;
      }
      Handle_8.Length = 0;
      Handle_8.MaximumLength = v18;
      v19 = RtlUnicodeStringCat(&Handle_8, &SourceString_8);
      v6 = v19;
      if ( v19 >= 0 )
      {
        v19 = RtlUnicodeStringCatString(&Handle_8, pszSrc);
        v6 = v19;
        if ( v19 >= 0 )
        {
          v6 = SmpExecuteCommand((__int64)&Handle_8, 0, v22, 0, 0LL);
LABEL_38:
          if ( Handle_8.Buffer )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Handle_8.Buffer);
          goto LABEL_44;
        }
        v20 = L"Failed to append registry data to trustlet path.";
        v21 = 2218;
      }
      else
      {
        v20 = L"Failed to add prefix to trustlet path.";
        v21 = 2210;
      }
      SmpLogFailureString((__int64)"SmpRunSecureKernelTrustlets", v21, (__int64)v20, v19);
      goto LABEL_38;
    }
LABEL_44:
    v23 = -1LL;
    do
      ++v23;
    while ( v9[v23] );
    v9 += v23 + 1;
  }
  while ( *v9 );
  if ( Handle )
    NtClose(Handle);
LABEL_49:
  if ( Heap && Heap != (_WORD *)BaseAddress )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  if ( NtPnpDeviceApiDriverHandle )
  {
    NtClose(NtPnpDeviceApiDriverHandle);
    NtPnpDeviceApiDriverHandle = 0LL;
  }
  return v6;
}
