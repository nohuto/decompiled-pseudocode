/*
 * XREFs of VhdInitialize @ 0x140C5F424
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlStringCbCatW @ 0x140443D48 (RtlStringCbCatW.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VhdiMountVhdFile @ 0x14082A898 (VhdiMountVhdFile.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x1409A2C00 (RtlStringFromGUID.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     VhdiGetDiskParameters @ 0x140C5F72C (VhdiGetDiskParameters.c)
 */

__int64 __fastcall VhdInitialize(__int64 a1)
{
  const char *v2; // rcx
  int DiskParameters; // ebx
  char *v4; // rax
  _QWORD *v5; // rax
  _QWORD *i; // rcx
  ULONG_PTR v7; // rdi
  char v8; // r12
  const wchar_t *v9; // r13
  int v10; // ecx
  __int64 v11; // r15
  __int64 v12; // rax
  ULONG_PTR v13; // rdi
  wchar_t *Pool2; // rax
  wchar_t *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // esi
  _DWORD *v19; // r12
  __int64 v20; // rcx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v23; // [rsp+40h] [rbp-99h] BYREF
  __int128 v24; // [rsp+50h] [rbp-89h]
  _BYTE v25[4]; // [rsp+60h] [rbp-79h] BYREF
  int v26; // [rsp+64h] [rbp-75h]
  unsigned int v27; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+148h] [rbp+6Fh] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+150h] [rbp+77h] BYREF
  __int64 v30; // [rsp+158h] [rbp+7Fh] BYREF

  v26 = 0;
  v23 = 0LL;
  v24 = 0LL;
  memset_0(v25, 0, 0x8CuLL);
  v2 = *(const char **)(a1 + 184);
  GuidString = 0LL;
  LOBYTE(v27) = 0;
  DiskParameters = 0;
  pszSrc = 0LL;
  v30 = 0LL;
  v28 = 0;
  v4 = strstr(v2, "vdisk(");
  if ( v4 && strstr(v4 + 1, "partition(") )
  {
    v5 = *(_QWORD **)(a1 + 232);
    for ( i = (_QWORD *)*v5; ; i = (_QWORD *)*i )
    {
      if ( i == v5 )
        return (unsigned int)DiskParameters;
      if ( i[7] )
        break;
    }
    if ( i )
    {
      DiskParameters = VhdiGetDiskParameters(i[7], v25, &v30, &v27, &pszSrc);
      if ( DiskParameters < 0 )
      {
        v7 = 1LL;
LABEL_39:
        KeBugCheckEx(0x12Fu, v7, DiskParameters, 0LL, 0LL);
      }
      v8 = v27;
      v9 = pszSrc;
      if ( (_BYTE)v27 )
      {
        v10 = 110;
      }
      else
      {
        *(_QWORD *)&v24 = pszSrc;
        *(_QWORD *)&v23 = v25;
        *((_QWORD *)&v23 + 1) = v30;
        v7 = 2LL;
        *((_QWORD *)&v24 + 1) = &v28;
        DiskParameters = PnpBootDeviceWait(a1, 2, (__int64)&VhdiInitializeBootDisk, (__int64)&v23);
        if ( DiskParameters < 0 )
          goto LABEL_39;
        v10 = 74;
      }
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( v9[v12] );
      v13 = (unsigned int)(v10 + 2 * v12);
      Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, v13, 0x42646856uLL);
      v15 = Pool2;
      if ( !Pool2 )
        goto LABEL_19;
      if ( v8 )
      {
        if ( RtlStringFromGUID(&RamdiskBootDiskGuid, &GuidString) < 0 )
        {
LABEL_19:
          v7 = 3LL;
LABEL_38:
          DiskParameters = -1073741801;
          goto LABEL_39;
        }
        DiskParameters = RtlStringCbPrintfW(v15, 0x6EuLL, L"\\\\Device\\Ramdisk%wZ", &GuidString);
        RtlFreeAnsiString(&GuidString);
      }
      else
      {
        DiskParameters = RtlStringCbPrintfW(Pool2, 0x4AuLL, L"\\\\Device\\HarddiskVolume%lu", v28);
      }
      if ( DiskParameters < 0 )
      {
        v7 = 4LL;
        goto LABEL_39;
      }
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      RtlStringCbCatW(v15, v13, v9);
      v17 = -1LL;
      do
        ++v17;
      while ( v15[v17] );
      DiskParameters = VhdiMountVhdFile(v15, 2 * (int)v17, 0, 1, 0LL);
      if ( DiskParameters < 0 )
      {
        v7 = 5LL;
        goto LABEL_39;
      }
      NtVhdBootFile = (__int64)v15;
      v18 = v16 - 1;
      do
        ++v11;
      while ( v9[v11] );
      v27 = 2 * (v11 + v18) + 14;
      v19 = (_DWORD *)ExAllocatePool2(0x40uLL, v27, 0x42646856uLL);
      if ( !v19 )
      {
        v7 = 7LL;
        goto LABEL_38;
      }
      memmove(v19 + 2, v15 + 1, 2LL * v18);
      v20 = 2 * v18 + 10;
      v19[1] = v20;
      memmove((char *)v19 + v20, v9, 2LL * (unsigned int)(v11 + 1));
      LODWORD(dword_140E0F1DC) = v27;
      off_140E0A658 = v19;
      *(_BYTE *)v19 = 1;
    }
  }
  return (unsigned int)DiskParameters;
}
