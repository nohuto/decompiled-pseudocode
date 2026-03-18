/*
 * XREFs of DifZwQueryDirectoryFileWrapper @ 0x1406385E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     ZwQueryDirectoryFile @ 0x14069B7E0 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DifZwQueryDirectoryFileWrapper(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        UNICODE_STRING *FileName,
        BOOLEAN RestartScan)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  PVOID v24; // [rsp+68h] [rbp-59h] BYREF
  BOOLEAN v25; // [rsp+70h] [rbp-51h]
  UNICODE_STRING *v26; // [rsp+78h] [rbp-49h]
  BOOLEAN v27; // [rsp+80h] [rbp-41h]
  FILE_INFORMATION_CLASS v28; // [rsp+84h] [rbp-3Dh]
  ULONG v29; // [rsp+88h] [rbp-39h]
  PVOID v30; // [rsp+90h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v31; // [rsp+98h] [rbp-29h]
  void *v32; // [rsp+A0h] [rbp-21h]
  void (__stdcall *v33)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+A8h] [rbp-19h]
  void *v34; // [rsp+B0h] [rbp-11h]
  void *v35; // [rsp+B8h] [rbp-9h]
  unsigned int DirectoryFile; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v24, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(57);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v35 = a1;
  v31 = IoStatusBlock;
  v30 = FileInformation;
  v29 = Length;
  v28 = FileInformationClass;
  v27 = ReturnSingleEntry;
  v26 = FileName;
  v25 = RestartScan;
  v34 = a2;
  v33 = a3;
  v32 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v24);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  DirectoryFile = ZwQueryDirectoryFile(
                    a1,
                    a2,
                    a3,
                    a4,
                    IoStatusBlock,
                    FileInformation,
                    Length,
                    FileInformationClass,
                    ReturnSingleEntry,
                    FileName,
                    RestartScan);
  if ( v15 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v15 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v24);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DirectoryFile;
}
