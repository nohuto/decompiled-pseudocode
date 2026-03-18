/*
 * XREFs of DifZwQueryDirectoryFileWrapper @ 0x1406445A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     ZwQueryDirectoryFile @ 0x1406A6AB0 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rsi
  int v19; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v21; // r14
  __int64 *i; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  BOOLEAN v26; // di
  _QWORD **v27; // rsi
  _QWORD *j; // rbx
  PVOID v30; // [rsp+68h] [rbp-59h] BYREF
  BOOLEAN v31; // [rsp+70h] [rbp-51h]
  UNICODE_STRING *v32; // [rsp+78h] [rbp-49h]
  BOOLEAN v33; // [rsp+80h] [rbp-41h]
  FILE_INFORMATION_CLASS v34; // [rsp+84h] [rbp-3Dh]
  ULONG v35; // [rsp+88h] [rbp-39h]
  PVOID v36; // [rsp+90h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v37; // [rsp+98h] [rbp-29h]
  void *v38; // [rsp+A0h] [rbp-21h]
  void (__stdcall *v39)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+A8h] [rbp-19h]
  void *v40; // [rsp+B0h] [rbp-11h]
  void *v41; // [rsp+B8h] [rbp-9h]
  unsigned int DirectoryFile; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v30, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(57);
  v18 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v30 = ReturnAddressForWrappers;
LABEL_7:
  v21 = 0;
  v41 = a1;
  v37 = IoStatusBlock;
  v36 = FileInformation;
  v35 = Length;
  v34 = FileInformationClass;
  v33 = ReturnSingleEntry;
  v32 = FileName;
  v31 = RestartScan;
  v40 = a2;
  v39 = a3;
  v38 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v21 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v18[4]; i != v18 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v30, v15, v16, v17);
    }
    if ( v21 )
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
  if ( v18 )
  {
    if ( (v26 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v26 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v27 = (_QWORD **)(v18 + 6);
      for ( j = *v27; j != v27; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v30, v23, v24, v25);
      }
      if ( v26 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DirectoryFile;
}
