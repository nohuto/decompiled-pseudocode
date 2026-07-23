/*
 * XREFs of DifZwQueryDirectoryFileWrapper @ 0x140642B60
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwQueryDirectoryFile @ 0x1406A7A50 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 *v16; // rsi
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // r14
  __int64 *i; // rbx
  __int64 v21; // rdx
  BOOLEAN v22; // di
  _QWORD **v23; // rsi
  _QWORD *j; // rbx
  PVOID v26; // [rsp+68h] [rbp-59h] BYREF
  BOOLEAN v27; // [rsp+70h] [rbp-51h]
  UNICODE_STRING *v28; // [rsp+78h] [rbp-49h]
  BOOLEAN v29; // [rsp+80h] [rbp-41h]
  FILE_INFORMATION_CLASS v30; // [rsp+84h] [rbp-3Dh]
  ULONG v31; // [rsp+88h] [rbp-39h]
  PVOID v32; // [rsp+90h] [rbp-31h]
  struct _IO_STATUS_BLOCK *v33; // [rsp+98h] [rbp-29h]
  void *v34; // [rsp+A0h] [rbp-21h]
  void (__stdcall *v35)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+A8h] [rbp-19h]
  void *v36; // [rsp+B0h] [rbp-11h]
  void *v37; // [rsp+B8h] [rbp-9h]
  unsigned int DirectoryFile; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v26, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(57);
  v16 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v17 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v17 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v26 = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v37 = a1;
  v33 = IoStatusBlock;
  v32 = FileInformation;
  v31 = Length;
  v30 = FileInformationClass;
  v29 = ReturnSingleEntry;
  v28 = FileName;
  v27 = RestartScan;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v16[4]; i != v16 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v26, v15);
    }
    if ( v19 )
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
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v23 = (_QWORD **)(v16 + 6);
      for ( j = *v23; j != v23; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v26, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DirectoryFile;
}
