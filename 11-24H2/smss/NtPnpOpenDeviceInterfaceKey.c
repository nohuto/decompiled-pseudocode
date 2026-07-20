/*
 * XREFs of NtPnpOpenDeviceInterfaceKey @ 0x14001EBFC
 * Callers:
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     NtPnpInitializeInputRegistryData @ 0x14001EAAC (NtPnpInitializeInputRegistryData.c)
 */

__int64 __fastcall NtPnpOpenDeviceInterfaceKey(const wchar_t *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // ecx
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-88h]
  PVOID InputBuffer; // [rsp+30h] [rbp-78h]
  __int64 InputBufferLength; // [rsp+38h] [rbp-70h]
  __int128 OutputBuffer; // [rsp+50h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v11; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v12[56]; // [rsp+70h] [rbp-38h] BYREF

  memset(v12, 0, 48);
  OutputBuffer = 0LL;
  v11 = 0LL;
  if ( NtPnpDeviceApiDriverHandle )
  {
    if ( a1 && a4 )
    {
      *a4 = 0LL;
      v5 = NtPnpInitializeInputRegistryData(
             (__int64)a1,
             a2,
             a1,
             (__int64)a4,
             (__int64)IoStatusBlock,
             2,
             (__int64)InputBuffer,
             InputBufferLength,
             (size_t)v12);
      if ( v5 >= 0 )
      {
        v5 = NtDeviceIoControlFile(
               NtPnpDeviceApiDriverHandle,
               0LL,
               0LL,
               0LL,
               &v11,
               0x470853u,
               v12,
               0x30u,
               &OutputBuffer,
               0x10u);
        if ( v5 >= 0 )
        {
          v5 = DWORD1(OutputBuffer);
          if ( (SDWORD1(OutputBuffer) & 0x80000000) == 0 )
            *a4 = *((_QWORD *)&OutputBuffer + 1);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073740759;
  }
  return (unsigned int)v5;
}
