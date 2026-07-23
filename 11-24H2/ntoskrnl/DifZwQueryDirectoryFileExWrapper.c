/*
 * XREFs of DifZwQueryDirectoryFileExWrapper @ 0x140642970
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     ZwQueryDirectoryFileEx @ 0x1406A9D50 (ZwQueryDirectoryFileEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall DifZwQueryDirectoryFileExWrapper(
        void *a1,
        void *a2,
        void (__stdcall *a3)(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved),
        void *a4,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        UNICODE_STRING *FileName)
{
  __int64 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  __int64 v20; // rdx
  BOOLEAN v21; // di
  _QWORD **v22; // rsi
  _QWORD *j; // rbx
  _QWORD v25[2]; // [rsp+58h] [rbp-59h] BYREF
  ULONG v26; // [rsp+68h] [rbp-49h]
  FILE_INFORMATION_CLASS v27; // [rsp+6Ch] [rbp-45h]
  ULONG v28; // [rsp+70h] [rbp-41h]
  PVOID v29; // [rsp+78h] [rbp-39h]
  struct _IO_STATUS_BLOCK *v30; // [rsp+80h] [rbp-31h]
  void *v31; // [rsp+88h] [rbp-29h]
  void (__stdcall *v32)(PVOID, PIO_STATUS_BLOCK, ULONG); // [rsp+90h] [rbp-21h]
  void *v33; // [rsp+98h] [rbp-19h]
  void *v34; // [rsp+A0h] [rbp-11h]
  unsigned int DirectoryFile; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(56);
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
  v25[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v34 = a1;
  v30 = IoStatusBlock;
  v29 = FileInformation;
  v28 = Length;
  v27 = FileInformationClass;
  v26 = QueryFlags;
  v25[1] = FileName;
  v33 = a2;
  v32 = a3;
  v31 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v25, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  DirectoryFile = ZwQueryDirectoryFileEx(
                    a1,
                    a2,
                    a3,
                    a4,
                    IoStatusBlock,
                    FileInformation,
                    Length,
                    FileInformationClass,
                    QueryFlags,
                    FileName);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v22 = (_QWORD **)(v15 + 6);
      for ( j = *v22; j != v22; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v25, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DirectoryFile;
}
