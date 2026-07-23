/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1407836F0
 * Callers:
 *     DifRtlCreateSystemVolumeInformationFolderWrapper @ 0x140637C10 (DifRtlCreateSystemVolumeInformationFolderWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783A04 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783D34 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x140783EA8 (RtlpSysVolTakeOwnership.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlCreateSystemVolumeInformationFolder(PCUNICODE_STRING VolumeRootPath)
{
  unsigned int Length; // eax
  size_t v3; // rdi
  unsigned __int16 v4; // dx
  wchar_t v5; // si
  ULONG_PTR v6; // rdx
  void *Pool2; // rax
  unsigned int v9; // eax
  NTSTATUS File; // ebx
  PVOID v11; // rcx
  PVOID v12; // rdi
  PVOID P[2]; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  int v15[4]; // [rsp+A0h] [rbp-9h] BYREF
  int v16[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+Fh]
  PVOID *v18; // [rsp+C0h] [rbp+17h]
  int v19; // [rsp+C8h] [rbp+1Fh]
  int v20; // [rsp+CCh] [rbp+23h]
  PVOID v21; // [rsp+D0h] [rbp+27h]
  __int64 v22; // [rsp+D8h] [rbp+2Fh]
  HANDLE Handle; // [rsp+110h] [rbp+67h] BYREF
  PVOID v24; // [rsp+118h] [rbp+6Fh] BYREF
  PVOID v25; // [rsp+120h] [rbp+77h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v16[1] = 0;
  v20 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  Length = VolumeRootPath->Length;
  v3 = DestinationString.Length;
  v4 = DestinationString.Length + Length;
  LOWORD(P[0]) = DestinationString.Length + Length;
  if ( (unsigned __int16)(DestinationString.Length + Length) < (unsigned __int16)Length || v4 < DestinationString.Length )
    return -1073741811;
  v5 = VolumeRootPath->Buffer[((unsigned __int64)Length >> 1) - 1];
  if ( v5 != 92 )
  {
    v4 += 2;
    LOWORD(P[0]) = v4;
  }
  v6 = (unsigned __int16)(v4 + 2);
  WORD1(P[0]) = v6;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v6, 0x536C6F56u);
  P[1] = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memmove(Pool2, VolumeRootPath->Buffer, VolumeRootPath->Length);
  v9 = VolumeRootPath->Length;
  LOWORD(P[0]) = VolumeRootPath->Length;
  if ( v5 != 92 )
  {
    *((_WORD *)P[1] + ((unsigned __int64)v9 >> 1)) = 92;
    LOWORD(v9) = LOWORD(P[0]) + 2;
    LOWORD(P[0]) += 2;
  }
  memmove((char *)P[1] + (unsigned __int16)v9, DestinationString.Buffer, v3);
  LOWORD(P[0]) += v3;
  *((_WORD *)P[1] + ((unsigned __int64)LOWORD(P[0]) >> 1)) = 0;
  File = RtlpSysVolCreateSecurityDescriptor(&v25, &v24);
  if ( File >= 0 )
  {
    v12 = v25;
    v16[0] = 48;
    v17 = 0LL;
    v19 = 576;
    v18 = P;
    v21 = v25;
    v22 = 0LL;
    if ( (int)IopCreateFile(
                (int)&Handle,
                0x10000,
                (int)v16,
                (int)v15,
                0LL,
                0,
                7,
                1,
                2101344,
                0LL,
                0,
                0,
                0LL,
                0,
                32,
                0LL) >= 0 )
      NtClose(Handle);
    File = IopCreateFile((int)&Handle, 1966080, (int)v16, (int)v15, 0LL, 6, 7, 3, 33, 0LL, 0, 0, 0LL, 0, 32, 0LL);
    if ( File < 0 )
    {
      RtlpSysVolTakeOwnership(P);
      File = IopCreateFile((int)&Handle, 1966080, (int)v16, (int)v15, 0LL, 6, 7, 3, 33, 0LL, 0, 0, 0LL, 0, 32, 0LL);
    }
    ExFreePoolWithTag(P[1], 0);
    if ( File >= 0 )
    {
      ExFreePoolWithTag(v12, 0);
      File = RtlpSysVolCheckOwnerAndSecurity(Handle, (PACL)v24);
      NtClose(Handle);
      v11 = v24;
    }
    else
    {
      ExFreePoolWithTag(v24, 0);
      v11 = v12;
    }
  }
  else
  {
    v11 = P[1];
  }
  ExFreePoolWithTag(v11, 0);
  return File;
}
